#include <iostream>
#include "date.h"
#include "auteur.h"
#include "livre.h"
#include "lecteur.h"
#include "emprunt.h"
//#pragma once

int main(int argc, char const *argv[]) {
  Date publication(12, 12, 2012);
  Date emprunt(12, 12 ,2022);
  Date retour(1, 1, 2023);
  
  Lecteur Lec1("Terieur","alex","000001");
  Lecteur Lec2("Terieur","Alain","000002");
  
  Auteur A1("Rowling","J. K. ","1");
  Auteur A2("Martin","George R. R","2");
  Auteur A3("Paolini","Christopher ","3");
  
  Livre l1(" Harry Potter à l'école des sorciers", A1 , "français",publication , 000000001) ;
  Livre l2(" Harry Potter et la chambre des secrets", A1, "français",publication ,000000002) ;
  Livre l3(" Harry potter et le prisonnier d'azkaban", A1 , "français",publication ,000000003) ;
  Livre l4(" Game of Thrones Fire & Blood", A2 , "anglais",publication ,000000004) ;
  Livre l5(" Game of Thrones A Game of Thrones", A2 , "anglais",publication ,000000005) ;
  Livre l6(" Game of Thrones A Clash of Kings", A2 , "anglais",publication ,000000006) ;
  Livre l7(" Game of Thrones A Storm of Swords", A2 , "anglais",publication ,000000007) ;
  Livre l8(" Eragon 1", A3 , "français",publication ,000000011) ;
  Livre l9(" Eragon 2", A3 , "français",publication ,000000012) ;
  Livre l10(" Eragon 3", A3 , "français",publication ,000000010) ;
  
  std::cout << "Lecteur " << Lec1.toString() << " a emprunté" << std::endl;
  std::cout << "Livre" << l1.toString() << std::endl;
  std::cout << emprunt.toString() << std::endl;
}