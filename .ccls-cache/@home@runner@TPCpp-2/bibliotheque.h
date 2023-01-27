#include "livre.h"
#include "lecteur.h"
#include "emprunt.h"
#include <vector>


#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

class Bibliotheque{
public:
  Bibliotheque(Livre livre, Lecteur lecteur, Emprunt emprunt);
  std::string toString();
  void addlivre(Livre);
  void addlecteur(Lecteur);
  void addemprunt(Emprunt);
  std::vector <Livre> getlivre();
  std::vector <Lecteur> getlecteur();
  bool livredispo(int);
  bool idlec(int);
  Livre books(int);
  Lecteur read(int);

private:
  
  std::vector <Livre> _livre;
  std::vector <Lecteur> _lecteur;
  std::vector <Emprunt> _emprunt;

};

#endif