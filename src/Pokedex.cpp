#include <iostream>
#include <fstream>
#include <sstream>
#include "Pokedex.hpp"


void lireCSV(const std::string& nomFichier) {
    std::ifstream fichier(nomFichier); // Ouvre le fichier
    if (!fichier.is_open()) { // Vérifie si le fichier est bien ouvert
        std::cerr << "Impossible d'ouvrir le fichier : " << nomFichier << std::endl;
        return;
    }

    std::string ligne;
    while (std::getline(fichier, ligne)) { // Lit le fichier ligne par ligne
        std::stringstream ss(ligne); // Utilise un flux pour diviser la ligne
        std::string cellule;
        std::vector<std::string> donneesLigne;
        //Divise la ligne en cellules séparées par des virgules
        while (std::getline(ss, cellule, ',')) {
            donneesLigne.push_back(cellule); // Ajoute chaque cellule au vecteur
        }
        // Affiche les données de la ligne
        for (const auto& valeur : donneesLigne) {
            std::cout << valeur << " "; // Affiche les valeurs séparées par un espace
        }
        std::cout << std::endl;
    }
    fichier.close();
};