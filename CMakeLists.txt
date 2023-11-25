cmake_minimum_required(VERSION 3.15.0)

project(calculator VERSION 0.1.0 LANGUAGES C CXX)

set(Qt6_DIR "C:/Qt/6.6.1/mingw_64/lib/cmake/Qt6")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        calcwindow.cpp
        calcwindow.h
        Calculation.cpp
        Calculation.h
        calcwindow.ui
)


add_executable(calculator
    ${PROJECT_SOURCES}
)

target_link_libraries(calculator PRIVATE Qt6::Widgets)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
