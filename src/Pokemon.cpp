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
};

//ADD HEALING METHOD BY JUSTINE HAZAN
void Pokemon::heal(int amount) {
    hitpoint += amount;
    std::cout << name << "gets" << amount << "PV" << std::endl;
};