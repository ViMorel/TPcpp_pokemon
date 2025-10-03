#include <iostream>
#include "Pokemon.hpp"
#include "Pokemon_Vector.hpp"
#include <vector>
#include <string>

#define pokedex_lengh 721

using std::vector;
using std::string;

class Pokedex : public Pokemon_Vector {
    private :
        static Pokedex* pokedex;
        vector<Pokemon> pokemons;

        Pokedex(const string& filename);
        ~Pokedex();
        std::string filename;

    public :
        static Pokedex *get_instance(const string& filename);

        Pokedex(Pokedex &other) = delete;
        Pokedex& operator = (const Pokedex&) = delete;

        void add_pokemon(const Pokemon& pokemon) override;

        void remove_pokemon(int index) override;

        Pokemon get_pokemon(int index) override;
        
        void display() override;
    
};