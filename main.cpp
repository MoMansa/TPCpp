#include "auteur.h"
#include "bibliotheque.h"
#include "date.h"
#include "emprunt.h"
#include "lecteur.h"
#include "livre.h"
#include <iostream>
//#pragma once

std::ostream &operator<<(std::ostream &os, Livre &L) {

  os << L._titre << " " << L._auteur.toString() << "/" << L._langue << "/"
     << L._publication.toString() << "/" << std::to_string(L._isbn);
  return os;
}
  
std::ostream& operator<<(std::ostream &os, Lecteur &L) {
  
  os << L._nom << "/" << L._prenom << "/" << std::to_string(L._id);
  return os;
}
  

int main(int argc, char const *argv[]) {
  Date publication1(6, 27, 1997 );
  Date publication2(7, 2, 1998);
  Date publication3(7, 8, 1999);
  Date publication4(10, 20, 2018);
  Date publication5(7, 22, 2011);
  Date publication6(10, 6, 1998);
  Date publication7(8, 1, 1996);
  Date publication8(7, 23, 2005);
  Date publication9(11, 20, 2008);
  Date publication10(8, 11, 2011);
  Date publication11(1, 1, 2008);
  Date empruntdate(12, 12, 2022);
  Date retourdate(1, 1, 2023);

  Lecteur Lec1(" Terieur ", " alex ", 101 );
  Lecteur Lec2(" Terieur ", " Alain ",  102 );

  Auteur A1("Rowling", "J. K. ", "1");
  Auteur A2("Martin", "George R. R", "2");
  Auteur A3("Paolini", "Christopher ", "3");
  Auteur A4("Sun", "Tzu ", "4");

  Livre l1(" Harry Potter à l'école des sorciers ", A1, " français",
           publication1 , 1);
  Livre l2(" Harry Potter et la chambre des secrets ", A1, " français ",
           publication2, 2);
  Livre l3(" Harry potter et le prisonnier d'azkaban", A1, " français ",
           publication3, 3);
  Livre l4(" Game of Thrones Fire & Blood ", A2, " anglais ", publication4,
          4);
  Livre l5(" Game of Thrones A Feast for Crows ", A2, " anglais ", publication5,
           5);
  Livre l6(" Game of Thrones A Clash of Kings ", A2, " anglais ", publication6,
           6);
  Livre l7(" Game of Thrones A game of thrones  ", A2, " anglais ", publication7,
           7);
  Livre l8(" Eragon l'Ainé ", A3, "français", publication8, 12);
  Livre l9(" Eragon Brisingr ", A3, "français", publication9, 13);
  Livre l10(" Eragon l'Héritage ", A3, "français", publication10, 10);
  Livre l11(" l'Art de la geurre ", A4, "Chinois classique", publication11,
            11);

  Emprunt E1(Lec1.getidlecteur(), l1.getisbnlivre(), empruntdate, retourdate);
  Emprunt E2(Lec1.getidlecteur(), l2.getisbnlivre(), empruntdate, retourdate);
  Emprunt E3(Lec1.getidlecteur(), l9.getisbnlivre(), empruntdate, retourdate);
  Emprunt E4(Lec1.getidlecteur(), l3.getisbnlivre(), empruntdate, retourdate);
  Emprunt E5(Lec1.getidlecteur(), l5.getisbnlivre(), empruntdate, retourdate);
  Emprunt E6(Lec1.getidlecteur(), l6.getisbnlivre(), empruntdate, retourdate);
  Emprunt E7(Lec1.getidlecteur(), l11.getisbnlivre(), empruntdate, retourdate);
  Emprunt E8(Lec1.getidlecteur(), l6.getisbnlivre(), empruntdate, retourdate);
  Emprunt E9(Lec1.getidlecteur(), l7.getisbnlivre(), empruntdate, retourdate);
  Emprunt E10(Lec1.getidlecteur(), l8.getisbnlivre(), empruntdate, retourdate);
   Emprunt E11(Lec2.getidlecteur(), l1.getisbnlivre(), empruntdate, retourdate);
  Emprunt E12(Lec2.getidlecteur(), l2.getisbnlivre(), empruntdate, retourdate);
  Emprunt E13(Lec2.getidlecteur(), l9.getisbnlivre(), empruntdate, retourdate);
  Emprunt E14(Lec2.getidlecteur(), l3.getisbnlivre(), empruntdate, retourdate);
  Emprunt E15(Lec2.getidlecteur(), l5.getisbnlivre(), empruntdate, retourdate);
  Emprunt E16(Lec2.getidlecteur(), l6.getisbnlivre(), empruntdate, retourdate);
  Emprunt E17(Lec2.getidlecteur(), l11.getisbnlivre(), empruntdate, retourdate);
  Emprunt E18(Lec2.getidlecteur(), l6.getisbnlivre(), empruntdate, retourdate);
  Emprunt E19(Lec2.getidlecteur(), l7.getisbnlivre(), empruntdate, retourdate);
  Emprunt E20(Lec2.getidlecteur(), l8.getisbnlivre(), empruntdate, retourdate);
  
  std::vector<Emprunt> emprunts = {};
  emprunts.push_back(E1);
  emprunts.push_back(E2);
  emprunts.push_back(E3);
  emprunts.push_back(E4);
  emprunts.push_back(E5);
  emprunts.push_back(E6);
  emprunts.push_back(E7);
  emprunts.push_back(E8);
  emprunts.push_back(E9);
  emprunts.push_back(E10);

  Bibliotheque B1(l1, Lec1, E1);
  B1.addlivre(l2);
  B1.addlivre(l3);
  B1.addlivre(l4);
  B1.addlivre(l5);
  B1.addlivre(l6);
  B1.addlivre(l7);
  B1.addlivre(l8);
  B1.addlivre(l9);
  B1.addlivre(l10);
  B1.addlivre(l11);
  B1.addlecteur(Lec2);
  B1.addemprunt(E2);
  B1.addemprunt(E3);
  B1.addemprunt(E4);
  B1.addemprunt(E5);
  B1.addemprunt(E6);
  B1.addemprunt(E7);
  B1.addemprunt(E8);
  B1.addemprunt(E9);
  B1.addemprunt(E10);
  
  std::cout << "Bibliotheque" << std::endl;
  std::cout << "Entrer votre ID" << std::endl;

  int choix2;
  std::cin >> choix2;
  
  if (B1.idlec(choix2)) {
    Lecteur test2 = B1.read(choix2);
    std::cout << test2 << std::endl;

  } else {
    std::cout << "ID indisponible";
  }
  
  std::cout << "Livres disponibles: " << std::endl;

  for (int i = 0; i < B1.getlivre().size(); i++) {
    std::cout << B1.getlivre().at(i).gettitre() << std::endl;
  }

  std::cout << "Info Livres disponibles veuillez entrer un isbn: " << std::endl;
  
  int choix;
  std::cin >> choix;
  
  if (B1.livredispo(choix)) {
    Livre test = B1.books(choix);
    std::cout << test << std::endl;

  } else {
    std::cout << "livre indisponible";
  }
  
/**std::cout << "Emprunt disponible : " << std::endl;

  for (int i = 0; i < emprunts.size(); i++) {
    std::cout << emprunts.at(i).toString() << std::endl;
  }*/
}
