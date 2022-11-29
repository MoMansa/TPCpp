#pragma once
#include <string>
#include "Livre.h"
#include <vector>

class Lecteur
{
public:
	Lecteur(std::string i, std::string n, std::string p, Livre l) {
		id = i;
		nom = n;
		prenom = p;
	};

	void emprunt(Livre);

private:
	std::string id;
	std::string nom;
	std::string prenom;
	std::vector<int> isbnLivre;
};
