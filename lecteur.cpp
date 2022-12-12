#include "lecteur.h"
#include <assert.h> 



Lecteur::Lecteur(std::string nom, std::string prenom,  std::string id) {
  _nom = nom;
  _prenom = prenom;
  _id = "123465789";
}
std::string Lecteur::id() { return _id; }
std::string Lecteur::nom() { return _nom; }
std::string Lecteur::prenom() { return _prenom; }


std::string Lecteur::toString(){
return _id+ "/" + _nom + "/"+ _prenom;
}