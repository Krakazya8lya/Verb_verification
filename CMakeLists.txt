cmake_minimum_required(VERSION 3.12.4)
project(verb_verifivation)

set(CMAKE_CXX_STANDARD 14)

set(SPPC src/verbStruct.cpp src/headers/verbStruct.h)
set(SPPC_TEST test/verbStructTest.cpp test/verbStructTest.h)

add_executable(${PROJECT_NAME} src/main.cpp ${SPPC})
add_executable(${PROJECT_NAME}_test test/main_test.cpp ${SPPC} ${SPPC_TEST})

