#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

using namespace std;

class Pokemon {
    private:
        int id;
        string name;
        int evolution;
        double max_hitpoint;    
        double hitpoint;
        double attack;
        double defense;

    public:
        static int counter;

        Pokemon(const int id,
                const string name,
                const int evolution,
                const double max_hitpoint,
                double hitpoint,
                double attack,
                double defense);
        
        Pokemon(const Pokemon& poke){
            id = poke.id;
            name = poke.name;
            evolution = poke.evolution;
            max_hitpoint = poke.max_hitpoint;
            hitpoint = poke.hitpoint;
            attack = poke.attack;
            defense = poke.defense;
        };

        void attackother(Pokemon &defender);

        double getattack(){return attack;};
        double getdefense(){return defense;};
        double gethitpoint(){return hitpoint;};

        void sethitpoint(double damage);

        void display_info() const{};

        ~Pokemon(){};
};

#endif