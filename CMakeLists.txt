cmake_minimum_required(VERSION 3.5)

project(place.derpy.blocks2stacks VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES blocks2stacks_en_US.ts)

set(PROJECT_SOURCES
        main.cpp
        blocks2stacks.cpp
        blocks2stacks.h
        blocks2stacks.ui
        ${TS_FILES}
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(blocks2stacks
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        resources.qrc

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET blocks2stacks APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(blocks2stacks SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(blocks2stacks
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(blocks2stacks PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(blocks2stacks PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS blocks2stacks
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

# Fix empty CMAKE_INSTALL_DATADIR
set(CMAKE_INSTALL_DATADIR "share")

# Install the icons and desktop file
install(FILES "${CMAKE_SOURCE_DIR}/resources/${PROJECT_NAME}.svg" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/scalable/apps")
install(FILES "${CMAKE_SOURCE_DIR}/resources/${PROJECT_NAME}-symbolic.svg" DESTINATION "${CMAKE_INSTALL_DATADIR}/icons/hicolor/symbolic/apps")
install(FILES "${CMAKE_SOURCE_DIR}/resources/${PROJECT_NAME}.desktop" DESTINATION "${CMAKE_INSTALL_DATADIR}/applications")
install(FILES "${CMAKE_SOURCE_DIR}/resources/${PROJECT_NAME}.metainfo.xml" DESTINATION "${CMAKE_INSTALL_DATADIR}/metainfo")

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(blocks2stacks)
endif()
