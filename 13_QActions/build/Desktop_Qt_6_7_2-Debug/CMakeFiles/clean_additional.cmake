# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "13_QActions_autogen"
  "CMakeFiles/13_QActions_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/13_QActions_autogen.dir/ParseCache.txt"
  )
endif()
