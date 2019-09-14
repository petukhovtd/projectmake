enable_testing()

include_directories( ../googletest-master/googletest/include )

add_executable(all_test test.cpp ../funcA.cpp ../foo/foo.cpp)

target_link_libraries( all_test gtest gtest_main)