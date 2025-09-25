cmake_minimum_required(VERSION 3.10)

project(TPcpp_pokemon LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(SFML 2.5 REQUIRED COMPONENTS graphics window system audio)

add_executable(pokemon
    main.cpp
    Pokemon.cpp
    Pokemon_Vector.cpp
    Pokedex.cpp
        Pokedex.hpp
        Pokedex.hpp
)

target_include_directories(pokemon PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(pokemon PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
    sfml-audio
)
