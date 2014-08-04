cmake_minimum_required(VERSION 2.8)

find_package (GTest REQUIRED)

include_directories (${ExampleAppWithTests_SOURCE_DIR}/static-lib-example
                     ${GTEST_INCLUDE_DIR}
                     )

add_executable(run-gtests example-test.cpp)

target_link_libraries (run-gtests
                       example-library
                       gtest
                       gtest_main
                       )
