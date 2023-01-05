#pragma once
#include "emprunt.h"
#include <assert.h> 

Emprunt::Emprunt(Livre livre, Lecteur lecteur, Date empruntdate, Date retourdate ){
    _empruntdate = empruntdate;
    _retourdate = retourdate;
    /**isbn = livre.isbn();
    id = lecteur.id();*/
}

std::string Emprunt::toString(){
  return "emprunter le " + _empruntdate.toString() + "à retourner le " + _retourdate.toString();
}