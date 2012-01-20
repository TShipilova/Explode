macro(unit_test name)
  add_executable(${name} ${name}.cpp)
  target_link_libraries(${name} ${Boost_LIBRARIES} ${BOOST_TEST_EXEC_MONITOR_LIBRARY})
  add_test(${name} ${CMAKE_CURRENT_BINARY_DIR}/${name})
endmacro(unit_test)

unit_test(wierd)
