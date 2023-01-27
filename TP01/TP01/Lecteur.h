#pragma once
#include <string>
#include "Livre.h"
#include <vector>
#include <iostream>

class Lecteur
{

public:
	Lecteur(std::string i, std::string n, std::string p) {
		id = i;
		nom = n;
		prenom = p;
	};

	void emprunt(Livre);
	std::string getid();
	std::string toString();
	std::vector<int> getIsbn();
	std::string getNom();
	std::string getPrenom();
	friend std::ostream& operator<<(std::ostream& os, const Lecteur& lt);

private:
	std::string id;
	std::string nom;
	std::string prenom;
	std::vector<int> isbnLivre;
};