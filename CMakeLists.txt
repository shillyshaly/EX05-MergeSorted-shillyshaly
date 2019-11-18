# Minimum version can be no higher than 3.5 as Ubuntu package management uses this version.
cmake_minimum_required(VERSION 3.5)

project (EX05-MergeSorted)

set(SOURCE_PREFIX "mergesorted")
set(EXEC_NAME "MergeSorted")
set(CMAKE_CXX_STANDARD 11)

if(EXISTS ${CMAKE_HOME_DIRECTORY}/csv30-lib/CMakeLists.txt)
    include(csv30-lib/CMakeLists.txt)
elseif(EXISTS /usr/local/csv30-lib/CMakeLists.txt)
    include(/usr/local/csv30-lib/CMakeLists.txt)
else()
    add_custom_target(add-submodules ALL git clone https://github.com/vc-csv30/csv30-lib.git ../csv30-lib)
endif()
