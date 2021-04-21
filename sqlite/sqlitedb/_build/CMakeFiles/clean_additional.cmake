# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sqlitedb_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sqlitedb_autogen.dir\\ParseCache.txt"
  "sqlitedb_autogen"
  )
endif()
