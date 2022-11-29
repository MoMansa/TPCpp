#pragma once
#include <string>
#include "Date.h"

class Livre
{
public:
	Livre();
	
	enum Genres {
		Science_fiction, Aventure, Biographie, Historique, Realiste, Education, Romance 
	};


private:
	std::string tire;
	std::string auteur;
	std::string langue;
	Genres genre;
	Date date;
	int ISBN;
};
