#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"

std::string toString(Lecteur l) {
	std::string isbn = "";
	for (int i = 0; i < l.getIsbn().size(); i++) {
		isbn += std::to_string(l.getIsbn().at(i)) + ", ";
	}
	return "Id : " + l.getid() + " Nom : " + l.getNom() + " Prenom : " + l.getPrenom() + " Isbn des livres empruntes : " + isbn;
}

std::ostream& operator<<(std::ostream& os, const Lecteur& lt)
{
	os << toString(lt);
	return os;
}

std::string toStringGenre(Livre::Genres g) {
	switch (g)
	{
	case Livre::Science_fiction:
		return "Science_fiction";
		break;
	case Livre::Aventure:
		return "Aventure";
		break;
	case Livre::Biographie:
		return "Biographie";
		break;
	case Livre::Historique:
		return "Historique";
		break;
	case Livre::Realiste:
		return "Realiste";
		break;
	case Livre::Education:
		return "Education";
		break;
	case Livre::Romance:
		return "Romance";
		break;
	case Livre::Policier:
		return "Policier";
		break;
	default:
		break;
	}
}

std::string toStringLangue(Livre::Langues l) {
	switch (l)
	{
	case Livre::Francais:
		return "Francais";
		break;
	case Livre::Anglais:
		return "Anglais";
		break;
	case Livre::Mandarin:
		return "Mandarin";
		break;
	case Livre::Espagnol:
		return "Espagnol";
		break;
	case Livre::Arabe:
		return "Arabe";
		break;
	case Livre::Russe:
		return "Russe";
		break;
	default:
		break;
	}
}

std::string toString(Livre l) {
	return "Titre : " + l.getTitre() + " Auteur : " + l.getAuteur().getNom() + " " + l.getAuteur().getPrenom() + " Genre : " + toStringGenre(l.getGenre()) + " Langues : " + toStringLangue(l.getlangue()) + " Date : " + l.getDate().toString() + " Isbn : " + std::to_string(l.getIsbn());
}

std::ostream& operator<<(std::ostream& os, const Livre& li)
{
	os << toString(li);
	return os;
}

void emprunt(Date d, Livre& li, Lecteur le) {
	if (!li.getIsemprunte()) {
		
		li.emprunt();
		std::cout << "Le livre : " << std::to_string(li.getIsbn()) << " a ete emprunte par le lecteur : " + le.getid() << " le " << d.toString() << std::endl;
	}
	else {
		std::cout << "Le livre " << li.getIsbn() << " est deja emprunte" << std::endl;
	}
}

void rendre(Livre& l) {
	if (l.getIsemprunte()) {
		l.rendre();
		std::cout << "Le livre : " << std::to_string(l.getIsbn()) << " a ete rendu" << std::endl;
	}
	else {
		std::cout << "Le livre" << l.getIsbn() << " n'est pas emprunte" << std::endl;
	}
}


std::vector<Livre> searchByAuteur(Bibliotheque b, Auteur a) {
	std::vector<Livre> ans;
	for (int i = 0; i < b.getLivres().size(); i++) {
		if (b.getLivres().at(i).getAuteur().getNom() == a.getNom() && b.getLivres().at(i).getAuteur().getPrenom() == a.getPrenom()) {
			ans.push_back(b.getLivres().at(i));
		}
	}
	return ans;
}

std::string searchLivresEmprunte(Bibliotheque &b) {
	std::string ans = "";
	std::vector<int> emprunte;
	int incr = 0;
	double pourcent = 0;
	int nblivre = b.getLivres().size();
	
	for (int i = 0; i < b.getEmprunt().size();i++) {
		ans += std::to_string((b.getEmprunt().at(i).getIsbn())) + " ";
		incr++;
	}
	if (b.getLivres().size() > 0) {
		pourcent = (incr / nblivre)*100;
	}

	ans += std::to_string(pourcent);

	return ans;
}