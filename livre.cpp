#include "livre.h"
#include <assert.h>

Livre::Livre(std::string titre, Auteur toto, std::string langue, Date publication, int isbn)
{
  _titre = titre;
  _auteur = toto;
  _langue = langue;
  _publication = publication;
  _isbn = isbn;
}

int Livre::isbn() const { return _isbn; }
int Livre::getisbnlivre() { return _isbn; };
std::string Livre::gettitre() { return _titre; };

std::string Livre::toString() {
  return _titre + " " + _auteur.toString() + " / " + _langue + " / " +
         _publication.toString() + " isbn: " + std::to_string(_isbn);
}
