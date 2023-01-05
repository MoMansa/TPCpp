#include <iostream>
#include <string>
#include "date.h"
#include "livre.h"
#include "lecteur.h"

#ifndef EMPRUNT_H
#define EMPRUNT_H

class Emprunt {
    public:
        Emprunt(Livre livre, Lecteur lecteur, Date empruntdate, Date retourdate );
        std::string toString();

    private:
        Date _empruntdate;
        Date _retourdate;
        int _isbn;
        std::string _id;
};

#endif