cmake_minimum_required(VERSION 3.5)

project(sfml_project_copy)
set(CMAKE_CXX_STANDARD 17)

# Set SFML directory paths
# set(SFML_INCLUDE_DIR "./SFML-2.6.1/include")
# set(SFML_LIBRARY_DIR "./SFML-2.6.1/lib")

# Include directories

link_directories(src/lib)
include_directories(src/include)

file(GLOB SRC_FILES src/*.cpp)
list(REMOVE_ITEM SRC_FILES src/main.cpp)
add_executable(main src/main.cpp src/Fruit.cpp src/Button.cpp src/Utility.cpp ${SRC_FILES})


add_custom_command(TARGET main POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_SOURCE_DIR}/src/bin" $<TARGET_FILE_DIR:main>)


# Copy audio_effect.wav to build directory on build
# configure_file(src/audio_effect.wav ${CMAKE_CURRENT_BINARY_DIR}/audio_effect.wav COPYONLY)

# Install audio file (optional)
# install(FILES src/audio_effect.wav
#         DESTINATION bin)

add_custom_command(TARGET main POST_BUILD
COMMAND ${CMAKE_COMMAND} -E copy_directory
${CMAKE_CURRENT_SOURCE_DIR}/src/assets
${CMAKE_CURRENT_BINARY_DIR}/assets)
        
# Link SFML libraries
target_link_directories(main PRIVATE ${SFML_LIBRARY_DIR})
target_link_libraries(main 
    sfml-graphics
    sfml-window
    sfml-system
    sfml-audio
    
)
