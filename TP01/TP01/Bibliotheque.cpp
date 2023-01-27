#include "Bibliotheque.h"

void Bibliotheque::addAuteur(Auteur& a) {
	auteurs.push_back(a);
}

void Bibliotheque::addLecteur(Lecteur& l) {
	lecteurs.push_back(l);
}

void Bibliotheque::addLivre(Livre& l) {
	livres.push_back(l);
}

std::vector<Livre> Bibliotheque::getLivres() {
	return livres;
}

std::vector<Lecteur> Bibliotheque::getLecteurs() {
	return lecteurs;
}

std::vector<Auteur> Bibliotheque::getAuteurs() {
	return auteurs;
}

std::vector<Emprunt> Bibliotheque::getEmprunt() {
	return emprunts;
}

void Bibliotheque::livreEmprunt(Livre& l) {
	l.emprunt();
}

void Bibliotheque::addEmprunt(Emprunt& e) {
	emprunts.push_back(e);
}

