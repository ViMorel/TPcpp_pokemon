#include "Pokemon.hpp"
#include <iostream>

using namespace std;

void Pokemon::sethitpoint(double damage){
    if(hitpoint > 0){
        this->hitpoint = hitpoint - damage;
    }
};

void Pokemon::attackother(Pokemon &defender){
    double atk = 0;
    double def = 0;
    double hp = 100;
    atk = this->attack;
    def = defender.getdefense();
    hp = defender.gethitpoint();
    if(hp <= 0){
        return;
    };
    if(atk > def){
        defender.sethitpoint(atk - def);
    };
    hp = defender.gethitpoint();
    string name = defender.getname();
    std::cout << name << "hp are :" << hp << std::endl;
};

Pokemon::Pokemon(const int id,
                const string name,
                const int evolution,
                const double max_hitpoint,
                double hitpoint,
                double attack,
                double defense):
                id(id), 
                name(name), 
                evolution(evolution),
                max_hitpoint(max_hitpoint),
                hitpoint(hitpoint),
                attack(attack),
                defense(defense)
                {};

Pokemon::~Pokemon(){};