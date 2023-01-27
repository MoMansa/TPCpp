#pragma once
#include <string>
#include "Date.h"
#include "Auteur.h"

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
	
	Livre(std::string t, Auteur a, Langues l, Genres g, Date d, int i) {
		titre = t;
		auteur = a;
		langue = l;
		genre = g;
		date = d;
		isbn = i;
		isEmprunte = false;
	};
	friend std::ostream& operator<<(std::ostream& os, const Livre& li);
	std::string getTitre();
	int getIsbn();
	Langues getlangue();
	Genres getGenre();
	Date getDate();
	Auteur getAuteur();
	void emprunt();
	void rendre();
	bool getIsemprunte();

private:
	std::string titre;
	Auteur auteur;
	Langues langue;
	Genres genre;
	Date date;
	int isbn;
	bool isEmprunte;
};
