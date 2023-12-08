cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME QEngine)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} QMD)
target_include_directories(${PROJECT_NAME} PUBLIC include)