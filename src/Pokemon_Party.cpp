#include "Pokemon.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Pokemon_Party.hpp"

void Pokemon_Party::add_pokemon(const Pokemon& pokemon){
    pokemons.push_back(pokemon);
};

void Pokemon_Party::remove_pokemon(int index){
    pokemons.erase(pokemons.begin() + index);
};

Pokemon Pokemon_Party::get_pokemon(int index){
    return pokemons.at(index);
};

void Pokemon_Party::display(){
    for (auto& p : pokemons) {
        p.display_info();
    };
};