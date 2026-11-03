
#include <iostream>
#include <string>
using namespace std;

// Classe de base
class Utilisateur {
protected:
    int identifiant;
    string login;

public:
    Utilisateur(int id, string l) {
        identifiant = id;
        login = l;
    }

    void afficher() {
        cout << "Identifiant : " << identifiant << endl;
        cout << "Login : " << login << endl;
    }
};

// Classe Administrateur
class Administrateur : virtual public Utilisateur {
protected:
    string droitsAcces;

public:
    Administrateur(int id, string l, string droits)
        : Utilisateur(id, l) {
        droitsAcces = droits;
    }

    void gererSysteme() {
        cout << "Gestion du systeme activee." << endl;
        cout << "Droits d'acces : " << droitsAcces << endl;
    }
};

// Classe Moderateur
class Moderateur : virtual public Utilisateur {
protected:
    int niveauModeration;

public:
    Moderateur(int id, string l, int niveau)
        : Utilisateur(id, l) {
        niveauModeration = niveau;
    }

    void modererContenu() {
        cout << "Moderation du contenu activee." << endl;
        cout << "Niveau de moderation : "
             << niveauModeration << endl;
    }
};

// Classe SuperUtilisateur
class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    SuperUtilisateur(int id, string l, string droits, int niveau)
        : Utilisateur(id, l),
          Administrateur(id, l, droits),
          Moderateur(id, l, niveau) {
    }

    void afficherInformations() {
        cout << "\n=== SUPER UTILISATEUR ===" << endl;

        Utilisateur::afficher();

        gererSysteme();
        modererContenu();
    }
};

// Programme principal
int main() {

    int id;
    string login;
    string droits;
    int niveau;

    cout << "===== CREATION D'UN SUPER UTILISATEUR =====" << endl;

    cout << "Entrer l'identifiant : ";
    cin >> id;

    cout << "Entrer le login : ";
    cin >> login;

    cout << "Entrer les droits d'acces : ";
    cin >> droits;

    cout << "Entrer le niveau de moderation : ";
    cin >> niveau;

    SuperUtilisateur su(id, login, droits, niveau);

    int choix;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Afficher les informations" << endl;
        cout << "2. Gerer le systeme" << endl;
        cout << "3. Moderer le contenu" << endl;
        cout << "0. Quitter" << endl;

        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {

            case 1:
                su.afficherInformations();
                break;

            case 2:
                su.gererSysteme();
                break;

            case 3:
                su.modererContenu();
                break;

            case 0:
                cout << "Fin du programme." << endl;
                break;

            default:
                cout << "Choix invalide !" << endl;
        }

    } while (choix != 0);

    return 0;
}
