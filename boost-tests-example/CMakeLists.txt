cmake_minimum_required(VERSION 2.8)

find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

include_directories (${ExampleAppWithTests_SOURCE_DIR}/static-lib-example
                     ${Boost_INCLUDE_DIRS}
                     )

add_definitions (-DBOOST_TEST_DYN_LINK)

add_executable(Test example-test.cpp)

target_link_libraries (Test
                       example-library
                       ${Boost_FILESYSTEM_LIBRARY}
                       ${Boost_SYSTEM_LIBRARY}
                       ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                       )
