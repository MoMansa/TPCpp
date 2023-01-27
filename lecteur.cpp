#include "lecteur.h"
#include <assert.h>

Lecteur::Lecteur(std::string nom, std::string prenom,int id) {
  _nom = nom;
  _prenom = prenom;
  _id = id;
}
int Lecteur::id() const { return _id; }
std::string Lecteur::nom() { return _nom; }
std::string Lecteur::prenom() { return _prenom; }
int Lecteur::getidlecteur() { return _id; };

std::string Lecteur::toString() { return std::to_string(_id) + "/" + _nom + "/" + _prenom; }