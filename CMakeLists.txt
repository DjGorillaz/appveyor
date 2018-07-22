cmake_minimum_required(VERSION 3.8)

project(appveyor)

find_package(Eigen3 CONFIG REQUIRED)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

#set(CMAKE_PREFIX_PATH "C:\\Qt\\5.11.0\\msvc2017_64\\")

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

# Populate a CMake variable with the sources
set(appveyor_SRCS
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

# Tell CMake to create the helloworld executable
add_executable(appveyor ${appveyor_SRCS})

set_target_properties(appveyor PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARTD_REQUIRED ON
#	COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)

# Use the Widgets module from Qt 5
target_link_libraries(appveyor PRIVATE Qt5::Widgets  Eigen3::Eigen)
#target_link_libraries(appveyor PRIVATE Eigen3::Eigen)

install(TARGETS appveyor RUNTIME DESTINATION bin)
