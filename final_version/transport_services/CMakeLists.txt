cmake_minimum_required(VERSION 3.5)

project(transport_services LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(Doxygen)
#option(BUILD_DOCUMENTATION "Create and install documentation (requires Doxygen)" ${DOXYGEN_FOUND})
#
#if(DOXYGEN_FOUND)
#
#        set(DOXYGEN ${CMAKE_SOURCE_DIR}/doc/Doxyfile.in)
#
#    message("Doxygen build started")
#
#        add_custom_target(
#                docs ALL
#                COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN}
#                COMMENT "Generating API documentation with Doxygen"
#                VERBATIM
#                WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/doc
#        )
#
#endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Sql REQUIRED)

add_subdirectory(src)


get_property(QT_CORE_INCLUDE_DIRS TARGET Qt${QT_VERSION_MAJOR}::Core PROPERTY INTERFACE_INCLUDE_DIRECTORIES)
list(GET QT_CORE_INCLUDE_DIRS 0 QT_CORE_MAIN_INCLUDE_DIR)
get_filename_component(QT_MAIN_DIR ${QT_CORE_MAIN_INCLUDE_DIR}/.. ABSOLUTE)


install(FILES $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Widgets> DESTINATION .)

install(FILES $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Sql> DESTINATION .)

install(FILES $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Core> DESTINATION .)

install(FILES $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Gui> DESTINATION .)

install(DIRECTORY ${QT_MAIN_DIR}/plugins/sqldrivers/
        DESTINATION ./plugins/sqldrivers USE_SOURCE_PERMISSIONS)

install(DIRECTORY ${QT_MAIN_DIR}/plugins/platforms/
               DESTINATION ./plugins/platforms USE_SOURCE_PERMISSIONS)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/doc DESTINATION ${PROJECT_BINARY_DIR})


install(TARGETS transport_services DESTINATION .)



