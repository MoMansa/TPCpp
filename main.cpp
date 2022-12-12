#include <iostream>
#include "date.h"
#include "auteur.h"
#include "livre.h"
//#include "lecteur.h"
//#pragma once

int main(int argc, char const *argv[]) {
  Date publication(12, 12, 2022);
  /**std::cout << "a day: " << publication.toString() << std::endl;
  std::cout << "#day: " << dayOfYear(publication) << std::endl;
  publication.next();*/
  Auteur toto("Terieur","Alain","1");
  Livre livre(" harry potter",toto , "anglais",publication ,1234567899) ;
  std::cout << "Livre" << livre.toString() << std::endl;
}