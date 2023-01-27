#pragma once
#include "Date.h"
#include "livre.h"
#include "Lecteur.h"
class Emprunt
{
public:
	Emprunt(Date d, Livre &li, Lecteur le) {
		date = d;
		isbn = li.getIsbn();
		idLecteur = le.getid();
	};
	int getIsbn() {
		return isbn;
	};

private:
	Date date;
	int isbn;
	std::string idLecteur;
};

void emprunt(Date, Livre&, Lecteur);
void rendre(Livre&);
