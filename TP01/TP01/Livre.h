#pragma once
#include <string>
#include "Date.h"

class Livre
{

public:
	enum Genres {
		Science_fiction, Aventure, Biographie, Historique, Realiste, Education, Romance, Policier
	};
	enum Langues {
		Francais, Anglais, Mandarin, Espagnol, Arabe, Russe
	};
public:
	Livre();
	
	
	int getIsbn();

private:
	std::string titre;
	std::string auteur;
	Langues langue;
	Genres genre;
	Date date;
	int isbn;
};
