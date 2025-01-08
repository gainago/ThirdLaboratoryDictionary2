cmake_minimum_required(VERSION 3.5)

project(GUI_Cache VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

add_executable(${PROJECT_NAME}
        ${PROJECT_SOURCES}
        UIClass.h UIClass.cpp
        GetQstringFromNewWidget.cpp GetQstringFromNewWidget.h
        MyString.cpp MyString.h Person.cpp Person.h
        GenerateArraySequencePerson.cpp GenerateArraySequencePerson.h GetNamesAndSournamesToMyString.cpp GetNamesAndSournamesToMyString.h
        ArraySequence.h PrintSeq.h Sequence.h GenerateListSequencePerson.h GenerateListSequencePerson.cpp

        Abs.h Dictionary.h GetHashCode.h LRUCacheCopy.h Pair.h ReturnValue.h
        Abs.cpp GetHashCode.cpp
        LinkedList.h
        DynamicArray.h
        GetPerson.cpp
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET GUICache APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation


target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.




