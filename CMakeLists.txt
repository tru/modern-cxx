cmake_minimum_required(VERSION 3.8)
project(modern-cxx CXX)

set(feats async iteration tuples)

foreach(p ${feats})
  if(EXISTS ${CMAKE_SOURCE_DIR}/${p}-98.cpp)
    add_executable(${p}-98 ${p}-98.cpp)
    set_target_properties(${p}-98 PROPERTIES CXX_STANDARD 98)
    target_link_libraries(${p}-98 -pthread)
  endif()

  if(EXISTS ${CMAKE_SOURCE_DIR}/${p}-modern.cpp)
    add_executable(${p}-modern ${p}-modern.cpp)
    set_target_properties(${p}-modern PROPERTIES CXX_STANDARD 17)
    target_link_libraries(${p}-modern -pthread)
  endif()
endforeach()
