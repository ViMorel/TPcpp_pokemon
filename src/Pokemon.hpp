#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

using namespace std;

class Pokemon {
    private:
        int id;
        string name;
        double hitpoint;
        double attack;
        double defense;
        int generation;

    public:
        static int counter;

        Pokemon(const int id,
                const string name,
                const int evolution,
                const double max_hitpoint,
                double hitpoint,
                double attack,
                double defense,
                const int generation);
        
        Pokemon(const Pokemon &poke){
            id = poke.id;
            name = poke.name;
            hitpoint = poke.hitpoint;
            attack = poke.attack;
            defense = poke.defense;
            generation = poke.generation;
        };

        void attackother(Pokemon &defender);

        double getattack(){return attack;};
        double getdefense(){return defense;};
        double gethitpoint(){return hitpoint;};

        void sethitpoint(double damage);

        void display_info() const{};

        ~Pokemon(){};

    void heal(int amount);
};

#endif