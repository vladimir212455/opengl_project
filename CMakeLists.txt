cmake_minimum_required(VERSION 3.15)
project(Gl)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)
find_package(assimp REQUIRED)

add_executable(${PROJECT_NAME} 
    include/KHR/glad.c
    src/Camera/camera.hpp
    src/Model/shader.hpp
    src/Engine/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE assimp::assimp
)

target_link_libraries(${PROJECT_NAME}
    OpenGL::GL
    glfw
)
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)