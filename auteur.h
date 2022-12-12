
#include <iostream>
#include <string>

#ifndef AUTEUR_H
#define AUTEUR_H

class Auteur {
    public:
        Auteur();
        Auteur(std::string nom, std::string prenom, std::string id);
        std::string nom();
        std::string prenom();
        std::string id();
        std::string toString();
        
    private:
        std::string _nom;
        std::string _prenom;
        std::string _id;
};

#endif