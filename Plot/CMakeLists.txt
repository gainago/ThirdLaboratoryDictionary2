cmake_minimum_required(VERSION 3.8)

project(plot_lib  VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(qwtIncludeDirectories "${PROJECT_SOURCE_DIR}/../../../Qwt/qwt-6.3.0/classincludes" "${PROJECT_SOURCE_DIR}/../../../Qwt/qwt-6.3.0/src")
set(qwtLibraryPath "${PROJECT_SOURCE_DIR}/../../../Qwt/qwt-6.3.0/lib/libqwt.so.6.3.0")

include_directories(
${qwtIncludeDirectories}
"${PROJECT_SOURCE_DIR}/Declaration"
)

find_package(Qt5 REQUIRED COMPONENTS Widgets Core)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/Definition/*.cpp" "${PROJECT_SOURCE_DIR}/Declaration/*.h")

add_library(${PROJECT_NAME} SHARED
${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)

target_link_libraries(${PROJECT_NAME} PRIVATE ${qwtLibraryPath})

