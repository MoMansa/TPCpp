#include "date.h"
#include "lecteur.h"
#include "livre.h"
#include <iostream>
#include <string>

#ifndef EMPRUNT_H
#define EMPRUNT_H

class Emprunt {
public:
  Emprunt(int idlecteur, int isbnlivre, Date empruntdate,
          Date retourdate);
  std::string toString();

private:
  int _idlecteur;
  int _isbnlivre;
  Date _empruntdate;
  Date _retourdate;
};

#endif