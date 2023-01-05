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

private:
  std::vector <Livre> _livre;
  std::vector <Lecteur> _lecteur;
  std::vector <Emprunt> _emprunt;

};

#endif