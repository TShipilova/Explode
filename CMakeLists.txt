cmake_minimum_required(VERSION 2.8)
find_package(Boost COMPONENTS 
    unit_test_framework 
    test_exec_monitor 
    filesystem
    signals
    REQUIRED)
find_package(SDL REQUIRED)
set(external_libs ${SDL_LIBRARY} ${BOOST_FILESYSTEM_LIBRARY})
include_directories(${Boost_INCLUDE_DIRS})
include_directories(${SDL_INCLUDE_DIRS})
enable_testing()
add_subdirectory(include)
add_subdirectory(core)
add_subdirectory(doc)
add_subdirectory(check)
add_subdirectory(gui)