
#include <iostream>
#include <string>
using namespace std;

// Classe Personne
class Personne {
protected:
    string nom;
    string prenom;

public:
    Personne(string n, string p) {
        nom = n;
        prenom = p;
    }

    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
    }
};

// Classe Chercheur
class Chercheur {
protected:
    string domaineRecherche;

public:
    Chercheur(string domaine) {
        domaineRecherche = domaine;
    }

    void afficher() {
        cout << "Domaine de recherche : "
             << domaineRecherche << endl;
    }
};

// Héritage multiple
class EnseignantChercheur : public Personne, public Chercheur {
public:
    EnseignantChercheur(string n, string p, string domaine)
        : Personne(n, p), Chercheur(domaine) {
    }

    void afficher() {
        cout << "=== Enseignant Chercheur ===" << endl;

        Personne::afficher();
        Chercheur::afficher();
    }
};

// Programme principal
int main() {

    EnseignantChercheur e1(
        "Id El Baz",
        "Hamza",
        "Intelligence Artificielle"
    );

    e1.afficher();

    return 0;
}
