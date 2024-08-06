# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "07_Second_Window_autogen"
  "CMakeFiles/07_Second_Window_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/07_Second_Window_autogen.dir/ParseCache.txt"
  )
endif()
