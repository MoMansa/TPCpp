#pragma once
#include <vector>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"

class Bibliotheque
{
public:
	Bibliotheque(){
	};
	void addLivre(Livre&);
	void addAuteur(Auteur&);
	void addLecteur(Lecteur&);
	void addEmprunt(Emprunt&);
	std::vector<Livre> getLivres();
	std::vector<Auteur> getAuteurs();
	std::vector<Lecteur> getLecteurs();
	std::vector<Emprunt> getEmprunt();
	void livreEmprunt(Livre&);

private:
	std::vector<Livre> livres;
	std::vector<Auteur> auteurs;
	std::vector<Lecteur> lecteurs;
	std::vector<Emprunt> emprunts;
};

std::vector<Livre> searchByAuteur(Bibliotheque, Auteur);
std::string searchLivresEmprunte(Bibliotheque&);