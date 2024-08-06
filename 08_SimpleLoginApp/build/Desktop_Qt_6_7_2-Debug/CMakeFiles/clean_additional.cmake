# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "08_SimpleLoginApp_autogen"
  "CMakeFiles/08_SimpleLoginApp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/08_SimpleLoginApp_autogen.dir/ParseCache.txt"
  )
endif()
