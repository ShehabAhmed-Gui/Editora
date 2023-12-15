cmake_minimum_required(VERSION 3.15)

project(notebad_implementation VERSION 0.1 LANGUAGES CXX)
set(CMAKE_PREFIX_PATH "C:/Qt/6.5.0/mingw_64/lib/cmake/Qt6/")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(srcs
        src/main.cpp
        src/files_manager/fileshandler.cpp
        src/files_manager/fileshandler.h

        src/code_editor/codeeditor.cpp
        src/code_editor/codeeditor.h
        src/code_editor/LineNumberArea.h
        src/code_editor/syntaxhighlighter.h
        src/code_editor/syntaxhighlighter.cpp
        src/code_editor/codeeditor.h
        src/code_editor/codeeditor.cpp

        src/notebad/mainwindow.cpp
        src/notebad/mainwindow.h
        src/notebad/mainwindow.ui

        src/resources/resources.qrc
)
add_executable(notebad ${srcs})

set_target_properties(notebad PROPERTIES
    AUTORCC ON
    AUTOMOC ON
    AUTOUIC ON
    AUTOGEN_BUILD_DIR ${CMAKE_SOURCE_DIR}/Debug
)

target_include_directories(notebad PUBLIC
    ${CMAKE_SOURCE_DIR}/src/
    ${CMAKE_SOURCE_DIR}/src/code_editor/
    ${CMAKE_SOURCE_DIR}/src/files_manager/
    ${CMAKE_SOURCE_DIR}/src/notebad/
    ${CMAKE_SOURCE_DIR}/src/resources/
    ${CMAKE_SOURCE_DIR}/src/forms
)

find_package(Qt6 REQUIRED COMPONENTS
    Widgets
    Gui
)

target_link_libraries(notebad PRIVATE
    Qt6::Widgets
    Qt6::Gui
)
