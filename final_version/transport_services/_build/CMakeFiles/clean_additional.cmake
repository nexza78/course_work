# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\transport_services_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\transport_services_autogen.dir\\ParseCache.txt"
  "transport_services_autogen"
  )
endif()
