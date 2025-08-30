cmake_minimum_required(VERSION 3.10)
project(Tictactoe)

# trouver SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
# inclure les headers
include_directories(include)
# Fichiers sources
file(GLOB SOURCES src/*.cpp)
# créer l'éxécutable
add_executable(Tictactoe ${SOURCES})
#Lier SFML
target_link_libraries(Tictactoe sfml-graphics sfml-window sfml-system)
