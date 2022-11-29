#include <iostream>
#include "date.h"


class Livre {
public:
    Livre(int titre,std::string auteur, int langue, Date publication, int isbn, int preemprunt);
    int titre() const;
    std::string auteur;
    int langue() const;
    Date publication;
    int isbn() const;
    int preemprunt() const;

private:
    int _titre;
    std::string _auteur;
    int _langue;
    Date _publication;
    int _isbn;
    int _preemprunt;
};