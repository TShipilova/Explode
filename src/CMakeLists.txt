set(coresource
  Position.cpp)
add_library(core STATIC ${coresource})
add_executable(explode main.cpp)
target_link_libraries(explode core)