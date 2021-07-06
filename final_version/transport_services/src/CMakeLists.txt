
set(PROJECT_SOURCES
        main.cpp
        login.cpp
        login.h
        login.ui
        admin.cpp
        admin.h
        admin.ui
        user.cpp
        user.h
        user.ui
        signup.cpp
        signup.h
        signup.ui
)

add_executable(transport_services ${PROJECT_SOURCES})

target_link_libraries(transport_services PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Gui Qt${QT_VERSION_MAJOR}::Sql)
