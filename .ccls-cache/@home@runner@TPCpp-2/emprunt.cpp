#pragma once
#include "emprunt.h"
#include <assert.h>

Emprunt::Emprunt(std::string lecteur, int livre, Date empruntdate,
                 Date retourdate) {
  _idlecteur = lecteur;
  _isbnlivre = livre;
  _empruntdate = empruntdate;
  _retourdate = retourdate;
}

std::string Emprunt::toString() {
  return _idlecteur + " a emprunter le livre " + std::to_string(_isbnlivre) +
         " le " + _empruntdate.toString() + " à retourner le " +
         _retourdate.toString();
}