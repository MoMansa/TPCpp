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

int main(int argc, char const *argv[]) {
  Date publication(12, 12, 2012);
  Date empruntdate(12, 12, 2022);
  Date retourdate(1, 1, 2023);

  Lecteur Lec1(" Terieur ", " alex ", " 000001 ");
  Lecteur Lec2(" Terieur ", " Alain ", " 000002 ");

  Auteur A1("Rowling", "J. K. ", "1");
  Auteur A2("Martin", "George R. R", "2");
  Auteur A3("Paolini", "Christopher ", "3");
  Auteur A4("Sun", "Tzu ", "4");

  Livre l1(" Harry Potter à l'école des sorciers ", A1, " français",
           publication, 1);
  Livre l2(" Harry Potter et la chambre des secrets ", A1, " français ",
           publication, 2);
  Livre l3(" Harry potter et le prisonnier d'azkaban", A1, " français ",
           publication, 3);
  Livre l4(" Game of Thrones Fire & Blood ", A2, " anglais ", publication,
          4);
  Livre l5(" Game of Thrones A Game of Thrones ", A2, " anglais ", publication,
           5);
  Livre l6(" Game of Thrones A Clash of Kings ", A2, " anglais ", publication,
           6);
  Livre l7(" Game of Thrones A Storm of Swords ", A2, " anglais ", publication,
           7);
  Livre l8(" Eragon 1 ", A3, "français", publication, 12);
  Livre l9(" Eragon 2 ", A3, "français", publication, 13);
  Livre l10(" Eragon 3 ", A3, "français", publication, 10);
  Livre l11(" l'Art de la geurre ", A4, "Chinois classique", publication,
            11);

  Emprunt E1(Lec1.getidlecteur(), l1.getisbnlivre(), empruntdate, retourdate);
  Emprunt E2(Lec1.getidlecteur(), l2.getisbnlivre(), empruntdate, retourdate);
  Emprunt E3(Lec2.getidlecteur(), l9.getisbnlivre(), empruntdate, retourdate);
  Emprunt E4(Lec1.getidlecteur(), l3.getisbnlivre(), empruntdate, retourdate);
  Emprunt E5(Lec2.getidlecteur(), l5.getisbnlivre(), empruntdate, retourdate);
  Emprunt E6(Lec1.getidlecteur(), l6.getisbnlivre(), empruntdate, retourdate);
  Emprunt E7(Lec1.getidlecteur(), l11.getisbnlivre(), empruntdate, retourdate);
  Emprunt E8(Lec1.getidlecteur(), l6.getisbnlivre(), empruntdate, retourdate);
  Emprunt E9(Lec1.getidlecteur(), l7.getisbnlivre(), empruntdate, retourdate);
  Emprunt E10(Lec1.getidlecteur(), l8.getisbnlivre(), empruntdate, retourdate);

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

  std::cout << "Bibliotheque" << std::endl;
  std::cout << "Livres disponibles: " << std::endl;

  for (int i = 0; i < B1.getlivre().size(); i++) {
    std::cout << B1.getlivre().at(i).gettitre() << std::endl;
  }

  std::cout << "Emprunt disponible : " << std::endl;

  for (int i = 0; i < emprunts.size(); i++) {
    std::cout << emprunts.at(i).toString() << std::endl;
  }
  
  int choix;
  std::cin >> choix;
  
  if (B1.livredispo(choix)) {
    Livre test = B1.books(choix);
    std::cout << test << std::endl;

  } else {
    std::cout << "livre indisponible";
  }

  //std::cout << l1 << std::endl;

  // std::cout << "Lecteur " << Lec1.toString() << " a emprunté" << std::endl;
  // std::cout << "Livre" << l1.toString() << std::endl;
  // std::cout << empruntdate.toString() << std::endl;
}