cmake_minimum_required(VERSION 3.16)
project(test)

# Find Geant4 package with UI and visualization
find_package(Geant4 REQUIRED ui_all vis_all)

# Include Geant4 headers
include(${Geant4_USE_FILE})

# Add executable
add_executable(test main.cc)

# Link Geant4 libraries
target_link_libraries(test ${Geant4_LIBRARIES})