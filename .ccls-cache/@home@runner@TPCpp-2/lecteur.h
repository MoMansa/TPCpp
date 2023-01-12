#pragma once
#include <iostream>
#include <string>

#ifndef LECTEUR_H
#define LECTEUR_H

class Lecteur {
public:
  Lecteur(std::string nom = "", std::string prenom = "", std::string id = "");
  std::string nom();
  std::string prenom();
  std::string id();
  std::string toString();
  std::string getidlecteur();

private:
  std::string _nom;
  std::string _prenom;
  std::string _id;
};

#endif