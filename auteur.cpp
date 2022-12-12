#include "auteur.h"
#include <assert.h>



Auteur::Auteur(std::string nom, std::string prenom,  std::string id) {
  _nom = nom;
  _prenom = prenom;
  _id = "987654321";
}
std::string Auteur::id() { return _id; }
std::string Auteur::nom() { return _nom; }
std::string Auteur::prenom() { return _prenom; }

std::string Auteur::toString(){
  return _id+ "/" + _nom + "/"+ _prenom;
}