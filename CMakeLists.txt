cmake_minimum_required(VERSION 3.5)

project(sfml_test)
set(CMAKE_CXX_STANDARD 17)

# Set SFML directory paths
# set(SFML_INCLUDE_DIR "./SFML-2.6.1/include")
# set(SFML_LIBRARY_DIR "./SFML-2.6.1/lib")

# Include directories

link_directories(src/lib)
include_directories(src/include)

file(GLOB SRC_FILES src/*.cpp)
list(REMOVE_ITEM SRC_FILES src/main.cpp)
add_executable(YourExecutableName src/main.cpp ${SRC_FILES})


add_custom_command(TARGET YourExecutableName POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_SOURCE_DIR}/src/bin" $<TARGET_FILE_DIR:YourExecutableName>)

# Link SFML libraries
target_link_directories(YourExecutableName PRIVATE ${SFML_LIBRARY_DIR})
target_link_libraries(YourExecutableName 
    sfml-graphics
    sfml-window
    sfml-system
)
