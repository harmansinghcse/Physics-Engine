cmake_minimum_required(VERSION 3.16)

project(PhysicsEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake where MSYS2 packages are
set(CMAKE_PREFIX_PATH "C:/msys64/mingw64")

# Find SFML
find_package(SFML 3 COMPONENTS graphics window system REQUIRED)

# Create executable
add_executable(physics_engine)

# Source files
target_sources(physics_engine
    PRIVATE
        src/main.cpp
        src/vector2.cpp
        src/body.cpp
        src/physics/collisions.cpp
)

# Include directories
target_include_directories(physics_engine
    PRIVATE
        include
)

# Link SFML
target_link_libraries(physics_engine
    PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
)