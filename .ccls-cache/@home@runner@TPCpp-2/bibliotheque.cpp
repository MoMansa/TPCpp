#include "bibliotheque.h"
#include <assert.h>

Bibliotheque::Bibliotheque(Livre livre, Lecteur lecteur, Emprunt emprunt) {
  _livre.push_back(livre);
  _lecteur.push_back(lecteur);
  _emprunt.push_back(emprunt);
}

bool Bibliotheque::idlec(int choix2) {

  for (int i = 0; i < _lecteur.size(); i++) {
    if (choix2 == _lecteur.at(i).getidlecteur()) {
      return true;
    }
  }
  return false;
}

Lecteur Bibliotheque::read(int choix2) {

  for (int i = 0; i < _lecteur.size(); i++) {

    if (choix2 == _lecteur.at(i).getidlecteur()) {
      return _lecteur.at(i);
    }
  }
}

bool Bibliotheque::livredispo(int choix) {

  for (int i = 0; i < _livre.size(); i++) {
    if (choix == _livre.at(i).getisbnlivre()) {
      return true;
    }
  }
  return false;
}

Livre Bibliotheque::books(int choix) {

  for (int i = 0; i < _livre.size(); i++) {

    if (choix == _livre.at(i).getisbnlivre()) {
      return _livre.at(i);
    }
  }
}

void Bibliotheque::addlivre(Livre livre) { _livre.push_back(livre); };

void Bibliotheque::addlecteur(Lecteur lecteur) { _lecteur.push_back(lecteur); };

void Bibliotheque::addemprunt(Emprunt emprunt) { _emprunt.push_back(emprunt); };

std::vector<Livre> Bibliotheque::getlivre() { return _livre; }

/**std::string Bibliotheque::toString() {
  return
}*/