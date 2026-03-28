cmake_minimum_required(VERSION 3.16)

project(PhysicsEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(physics_engine)

# Add all source files
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