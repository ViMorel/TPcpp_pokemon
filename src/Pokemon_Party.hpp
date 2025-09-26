#include "Pokemon_Vector.hpp"
#include <vector>

class Pokemon_Party : public Pokemon_Vector  {
    private : 
        vector<Pokemon> pokemons;

    public :
        void add_pokemon(const Pokemon& poke) override;

        void remove_pokemon(int index) override;

        Pokemon get_pokemon(int index) override;

        void display() override;
};