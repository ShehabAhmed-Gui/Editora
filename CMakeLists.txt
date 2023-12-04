cmake_minimum_required(VERSION 3.5)

project(notebad VERSION 0.1 LANGUAGES CXX)

set(srcs
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.h
        src/mainwindow.ui
        src/resources.qrc
)
add_executable(notebad ${srcs})

set_target_properties(notebad PROPERTIES
    AUTORCC ON
    AUTOMOC ON
    AUTOUIC ON
    AUTOGEN_BUILD_DIR ${CMAKE_SOURCE_DIR}/Debug
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS
    Widgets

)


target_include_directories(notebad PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(notebad PRIVATE
    Qt6::Widgets
)


include(GNUInstallDirs)
install(TARGETS notebad
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
