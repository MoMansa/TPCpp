#pragma once
#include <string>
class Auteur
{
public:
	Auteur(std::string n, std::string p) {
		nom = n;
		prenom = p;
	};
	Auteur() {
		nom = "Auteur";
		prenom = "Jean";
	}
	std::string getNom();
	std::string getPrenom();

private:
	std::string nom;
	std::string prenom;
};