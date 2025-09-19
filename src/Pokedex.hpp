#include <iostream>
#include "Pokemon.hpp"
#include "Pokemon_Vector.hpp"
#include <vector>
#include <string>

using std::vector;
using std::string;

class Pokedex : public Pokemon_Vector {
    private :
        static Pokedex* pokedex;
        vector<Pokemon*> pokemons;

        Pokedex(const string& filename);

    public :
        void lireCSV(const string& nomFIchier);

};