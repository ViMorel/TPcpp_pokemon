#ifndef POKEMON_VECTOR_HPP
#define POKEMON_VECTOR_HPP
#include <iostream>
#include "Pokemon.hpp"
#include <vector>

using std::vector;

class Pokemon_Vector {
    private :
        vector<Pokemon> pokemons;
    public :
        Pokemon_Vector();
        virtual ~Pokemon_Vector();

        virtual void add_pokemon(const Pokemon& pokemon) = 0;

        virtual void remove_pokemon(int index) = 0;

        virtual Pokemon get_pokemon(int index) = 0;

        virtual void display() = 0;
};

#endif