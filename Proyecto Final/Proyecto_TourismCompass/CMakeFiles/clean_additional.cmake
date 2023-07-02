# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\TourismCompass_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TourismCompass_autogen.dir\\ParseCache.txt"
  "TourismCompass_autogen"
  )
endif()
