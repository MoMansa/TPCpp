#include <iostream>
#include "Date.h"
#include "Auteur.h"
#include "Emprunt.h"
#include "Lecteur.h"
#include "Livre.h"
#include "Bibliotheque.h"


int main()
{
	Date d(3, 15, 2002);
	std::cout << d.toString() << std::endl;
	Auteur a1("Auteur", "Un");
	Auteur a2("Auteur", "Deux");
	Auteur a3("Auteur", "Trois");
	Livre l1("Livre1", a1, Livre::Anglais, Livre::Science_fiction, d, 27);
	Livre l2("Livre2", a2, Livre::Francais, Livre::Realiste, d, 4564);
	Livre l3("Livre3", a3, Livre::Mandarin, Livre::Romance, d, 481);
	Livre l4("Livre4", a3, Livre::Arabe, Livre::Biographie, d, 92);
	Lecteur lect1("iddefou", "lecteur", "patrik");
	Lecteur lect2("iddezinzin", "lecteur", "raoul");

	Bibliotheque bibli;
	bibli.addLivre(l1);
	bibli.addAuteur(a1);
	bibli.addLecteur(lect1);
	bibli.addAuteur(a2);
	bibli.addAuteur(a3);
	bibli.addLivre(l2);
	bibli.addLivre(l3);
	bibli.addLivre(l4);
	bibli.addLecteur(lect2);

	std::cout << l1 << std::endl;

	emprunt(d, l1, lect1);
	Emprunt emprunt(d, l1, lect1);
	bibli.addEmprunt(emprunt);

	Emprunt emprunt2(d, l2, lect2);
	bibli.addEmprunt(emprunt2);


	std::cout << l1.getIsemprunte() << std::endl;


	std::vector<Livre> test = searchByAuteur(bibli, a1);
	for (int i = 0; i < test.size();i++) {
		std::cout << test.at(i).getTitre() << std::endl;
	}

	

	std::string feur = searchLivresEmprunte(bibli);
	std::cout << feur;
}
