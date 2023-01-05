#pragma once
#include "emprunt.h"
#include <assert.h> 

Emprunt::Emprunt(Date emprunt,Date retour, Livre livre, Lecteur lecteur){
    /**date1 = emprunt();
    date2 = retour();
    isbn = livre.isbn();
    id = lecteur.id();*/
}

std::string Emprunt::toString(){
  return "emprunter le " + _date1.toString() + "à retourner le " + _date2.toString();
}