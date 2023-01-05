#include "bibliotheque.h"
#include <assert.h>

Bibliotheque::Bibliotheque(Livre livre, Lecteur lecteur, Emprunt emprunt)
{
  _livre.push_back(livre);
  _lecteur.push_back(lecteur);
  _emprunt.push_back(emprunt);
}

void Bibliotheque::addlivre(Livre livre){
  _livre.push_back(livre);
}

void Bibliotheque::addlecteur(Lecteur lecteur){
  _lecteur.push_back(lecteur);
};

void Bibliotheque::addemprunt(Emprunt emprunt){
  _emprunt.push_back(emprunt);
};

 std::vector <Livre> Bibliotheque::getlivre(){
   return _livre;
 }


/**std::string Bibliotheque::toString() {
  return 
}*/