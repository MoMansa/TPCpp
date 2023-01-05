#include <iostream>
#include "date.h"
#include "auteur.h"
#include "livre.h"
#include "lecteur.h"
//#pragma once

int main(int argc, char const *argv[]) {
  Date publication(12, 12, 2012);
  /**std::cout << "a day: " << publication.toString() << std::endl;
  std::cout << "#day: " << dayOfYear(publication) << std::endl;
  publication.next();*/
  Date emprunt(12, 12 ,2022);
  Date retour(1, 1, 2023);
  Lecteur oto("Terieur","alex","1");
  //lecteur ota()
  std::cout << "Lecteur " << oto.toString() << " a emprunté" << std::endl;
  Auteur toto("Terieur","Alain","1");
  Livre l1(" harry potter",toto , "anglais",publication ,1234567899) ;
  std::cout << "Livre" << l1.toString() << std::endl;
  std::cout << emprunt.toString() << std::endl;
}