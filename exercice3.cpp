
#include <iostream>
#include <string>
using namespace std;

// Classe de base
class Vehicule {
protected:
    string marque;
    string modele;

public:
    Vehicule(string ma, string mo) {
        marque = ma;
        modele = mo;
    }
};

// Classe Thermique avec heritage virtuel
class Thermique : virtual public Vehicule {
protected:
    double consommation;

public:
    Thermique(string ma, string mo, double c)
        : Vehicule(ma, mo) {
        consommation = c;
    }
};

// Classe Electrique avec heritage virtuel
class Electrique : virtual public Vehicule {
protected:
    double autonomie;

public:
    Electrique(string ma, string mo, double a)
        : Vehicule(ma, mo) {
        autonomie = a;
    }
};

// Classe Hybride
class Hybride : public Thermique, public Electrique {
public:
    Hybride(string ma, string mo, double c, double a)
        : Vehicule(ma, mo),
          Thermique(ma, mo, c),
          Electrique(ma, mo, a) {
    }

    void afficherCaracteristiques() {
        cout << "=== Vehicule Hybride ===" << endl;
        cout << "Marque : " << marque << endl;
        cout << "Modele : " << modele << endl;
        cout << "Consommation : " << consommation
             << " L/100km" << endl;
        cout << "Autonomie batterie : " << autonomie
             << " km" << endl;
    }
};

// Programme principal
int main() {

    Hybride v1("Toyota", "Prius", 4.5, 50);

    v1.afficherCaracteristiques();

    return 0;
}
