#pragma once
#include <iostream>
#include <string>

#ifndef LECTEUR_H
#define LECTEUR_H

class Lecteur {
public:
  Lecteur(std::string nom, std::string prenom, int id);
  std::string nom();
  std::string prenom();
  int id() const;
  std::string toString();
  int getidlecteur();
  friend std::ostream& operator<<(std::ostream& os, Lecteur& L);

private:
  std::string _nom;
  std::string _prenom;
  int _id;
};

#endif