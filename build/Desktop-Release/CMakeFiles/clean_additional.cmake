# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/blocks2stacks_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/blocks2stacks_autogen.dir/ParseCache.txt"
  "blocks2stacks_autogen"
  )
endif()
