#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Pokemon.hpp"
#include "Pokedex.hpp"
#include "Pokemon_Party.hpp"

int main() {
    Pokedex* pokedex = Pokedex::get_instance("../pokedex.csv");
    std::cout << "1" << std::endl;
    pokedex->display();
    std::cout << "2" << std::endl;
    Pokemon pikachu = pokedex->get_pokemon(25);
    std::cout << "3" << std::endl;
    pikachu.display_info();
    std::cout << "4" << std::endl;
    return 0;
}