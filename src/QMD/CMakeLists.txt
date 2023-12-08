cmake_minimum_required(VERSION 3.12)

set(LIB_NAME QMD)

project(${LIB_NAME})

set(SRC
    src/qmd_factory
    src/qmd_parser
)

set(INCLUDE include/QMD/qmd.hpp)

add_library(${LIB_NAME} STATIC ${SRC} ${INCLUDE})
target_include_directories(${LIB_NAME} PUBLIC include)