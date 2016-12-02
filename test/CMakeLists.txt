
file(GLOB cpps *.cpp)
add_executable(testperson ${cpps})
# link against our static library
target_link_libraries(testperson personlib)