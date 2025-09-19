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

        virtual void add_Pokemon(const Pokemon& poke);

        virtual void remove_Pokemon(int index);

        Pokemon& get_Pokemon(int index);

        virtual void display();
};