project(symmetry)
cmake_minimum_required(VERSION 3.16)

find_package(Qt5Widgets)
find_package(Qt5Core)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(run main.cpp GUI/mainwindow.cpp GUI/mainwindow.h rotation.cpp rotation.h GUI/centerWidget.h objekts/PenState.cpp objekts/PenState.h objekts/state.h GUI/centerWidget.cpp)
target_link_libraries(run Qt5::Widgets Qt5::Core)