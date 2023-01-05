#pragma once
#include "auteur.h"
#include "date.h"
#include <iostream>

#ifndef LIVRE_H
#define LIVRE_H

class Livre {
public:
  Livre(std::string titre, Auteur toto, std::string langue, Date publication, int isbn); 
  int isbn() const;
  std::string titre();
  std::string langue();
  std::string toString();

private:
  Auteur _auteur;
  Date _publication;
  int _isbn;
  std::string _titre;
  std::string _langue;
};

#endif