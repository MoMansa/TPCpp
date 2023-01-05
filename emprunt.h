#include <iostream>
#include <string>
#include "date.h"
#include "livre.h"
#include "lecteur.h"

#ifndef EMPRUNT_H
#define EMPRUNT_H

class Emprunt {
    public:
        Emprunt(Date emprunt, Date retour, Livre livre, Lecteur lecteur);
        std::string toString();

    private:
        Date _date1;
        Date _date2;
        int _isbn;
        std::string _id;
};

#endif