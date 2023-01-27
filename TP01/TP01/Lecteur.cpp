#include "Lecteur.h"

std::string Lecteur::getid() {
	return id;
}

void Lecteur::emprunt(Livre l) {
	isbnLivre.push_back(l.getIsbn());
}

std::vector<int> Lecteur::getIsbn() {
	return isbnLivre;
}

std::string Lecteur::getNom() {
	return nom;
}

std::string Lecteur::getPrenom() {
	return prenom;
}

std::string Lecteur::toString() {
	std::string isbn = "";
	for (int i = 0; i < isbnLivre.size(); i++) {
		isbn += std::to_string(isbnLivre.at(i)) + ", ";
	}
	return "Id : " + id + " Nom : " + nom + " Prenom : " + prenom + " Isbn des livres empruntes : " + isbn;
}