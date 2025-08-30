cmake_minimum_required(VERSION 3.10)
project(Space-Wars)

# trouver SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
# inclure les headers
include_directories(include)
# Fichiers sources
file(GLOB SOURCES src/*.cpp)
# créer l'éxécutable
add_executable(Space-Wars ${SOURCES})
#Lier SFML
target_link_libraries(Space-Wars sfml-graphics sfml-window sfml-system)
