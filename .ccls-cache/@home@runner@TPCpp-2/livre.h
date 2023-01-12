#pragma once
#include "auteur.h"
#include "date.h"
#include <iostream>

#ifndef LIVRE_H
#define LIVRE_H

class Livre {
public:
  Livre(std::string titre, Auteur auteur, std::string langue, Date publication,
        int isbn);
  int isbn() const;
  std::string titre();
  std::string langue();
  std::string toString();
  int getisbnlivre();
  std::string gettitre();
  friend std::ostream& operator<<(std::ostream& os, Livre& L);

private:
  Auteur _auteur;
  Date _publication;
  int _isbn;
  std::string _titre;
  std::string _langue;
};



#endif