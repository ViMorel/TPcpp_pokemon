#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Pokemon.hpp"
#include "Pokedex.hpp"

using std::vector;

Pokedex* Pokedex::pokedex{nullptr};

Pokedex::Pokedex(const std::string& filename){
    std::ifstream file(filename);

    if (file.is_open()) {
        std::cout << "Superbe fichier" << std::endl; 
    } else {
        std::cerr << "Impossible d'ouvrir le file : " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) { // Lit le file line par line
        std::stringstream ss(line); // Utilise un flux pour diviser la line
        std::string cel;
        std::vector<std::string> filedataline;
        //Divise la line en cels séparées par des virgules
        while (std::getline(ss, cel, ',')) {
            filedataline.push_back(cel); // Ajoute chaque cel au vecteur
        }
        Pokemon pokemon = Pokemon(
            std::stoi(filedataline[0]),
            filedataline[1],
            std::stoi(filedataline[11]),
            std::stod(filedataline[4]),
            std::stod(filedataline[5]),
            std::stod(filedataline[6]),
            std::stod(filedataline[7])
        );
        pokemons.push_back(pokemon);
        // Affiche les données de la line
        for (const auto& value : filedataline) {
            std::cout << value << " "; // Affiche les values séparées par un espace
        }
        std::cout << std::endl;
    }
    file.close();
};

Pokedex::~Pokedex(){};

Pokemon Pokedex::get_pokemon(int index){
    if(index>pokedex_lengh || index ==0){
        cout << "index invalide" << endl;
    };
    return pokemons[index];
};

void Pokedex::add_pokemon(const Pokemon& pokemon){
    cout << "you cannot invent a pokemon xD" << endl;
};

void Pokedex::remove_pokemon(int index){
    cout << "did you killed every single pokemon of this species ? Are you MA?D or something ?" << endl;
};

void Pokedex::display() {
    for (auto& p : pokemons) {
        p.display_info();
    }
};

Pokedex* Pokedex::get_instance(const std::string& filename){
    if(pokedex == nullptr){
        pokedex = new Pokedex(filename);
    };
    return pokedex;
};
