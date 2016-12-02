# Tests

# gather all of the cpp files in the test directory
file(GLOB cpps *.cpp)

# add a testperson executable referencing the cpps variable created above
add_executable(testperson ${cpps})

# link testperson against our static library
target_link_libraries(testperson personlib)