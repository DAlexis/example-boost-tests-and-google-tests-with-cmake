cmake_minimum_required(VERSION 2.8)

project(example-application)

include_directories (${ExampleAppWithTests_SOURCE_DIR}/static-lib-example)

add_executable(testapp example-app.cpp)

target_link_libraries (testapp
                       example-library
                       )

