cmake_minimum_required(VERSION 2.8)

project(ExampleAppWithTests)

set(EXE_SOURCE testapp/main.cpp)

add_subdirectory(static-lib-example)
add_subdirectory(application-example)
add_subdirectory(boost-tests-example)
add_subdirectory(gtests-example)

include_directories(static-lib-example)

enable_testing()
add_test (NAME MyTest COMMAND Test)
