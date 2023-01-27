#include "Livre.h"

int Livre::getIsbn() {
	return isbn;
}

std::string Livre::getTitre() {
	return titre;
}

Livre::Langues Livre::getlangue() {
	return langue;
}

Livre::Genres Livre::getGenre() {
	return genre;
}

Date Livre::getDate() {
	return date;
}

Auteur Livre::getAuteur() {
	return auteur;
}

void Livre::emprunt() {
	isEmprunte = true;
}

void Livre::rendre() {
	isEmprunte = false;
}

bool Livre::getIsemprunte() {
	return isEmprunte;
}