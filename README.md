# TP 9 : Héritage Multiple en C++

**Module : Programmation Orientée Objet (C++)**  
*Plateforme : MLIAEdu**  
**Réalisé par : Hamza Id El Baz**

---

## Présentation du TP

Ce TP a pour objectif de comprendre et de pratiquer le concept d'**héritage multiple en C++** à travers quatre exercices progressifs.

Les exercices permettent de découvrir la réutilisation du code, la gestion des ambiguïtés entre les classes parentes, le problème du diamant (*Diamond Problem*) et l'utilisation de l'héritage virtuel (`virtual`).

##  Objectifs pédagogiques

- Comprendre le fonctionnement de l'héritage multiple.
- Créer des classes qui héritent de plusieurs classes parentes.
- Utiliser les constructeurs pour initialiser les classes de base.
- Résoudre les ambiguïtés avec l'opérateur `::`.
- Comprendre le problème du diamant.
- Utiliser `virtual` pour éviter les copies multiples d'une classe de base.
- Développer des programmes interactifs avec un menu en ligne de commande.

---

##  Exercice 1 : Informations d'un Enseignant Chercheur

**Objectif :** Mettre en pratique l'héritage multiple simple.

### Description
Création de trois classes :
- `Personne` : contient le nom et le prénom.
- `Chercheur` : contient le domaine de recherche.
- `EnseignantChercheur` : hérite de `Personne` et `Chercheur`.

La classe fille possède une méthode `afficher()` qui appelle les méthodes des deux classes parentes.

### Notions utilisées
- Héritage multiple.
- Constructeurs.
- Attributs `protected`.
- Appel des méthodes parentes avec `::`.

###  Capture d'écran de l'exécution

<img width="1366" height="768" alt="ex1" src="https://github.com/user-attachments/assets/04738cdf-5d99-4731-88a3-4cc5621e57a7" />

---

## Exercice 2 : Employé Polyvalent (Ambiguïtés)

**Objectif :** Comprendre et résoudre les ambiguïtés dans l'héritage multiple.

### Description
Création de trois classes :
- `Technicien` : possède un salaire et une méthode `afficherSalaire()`.
- `Comptable` : possède également un salaire et une méthode `afficherSalaire()`.
- `EmployePolyvalent` : hérite des deux classes précédentes.

La classe `EmployePolyvalent` possède une méthode `afficherTousSalaires()` qui appelle les deux versions de `afficherSalaire()`.

### Notions utilisées
- Héritage multiple.
- Ambiguïté entre méthodes.
- Opérateur de résolution de portée `::`.
- Initialisation de plusieurs classes parentes.

### Capture d'écran de l'exécution

<img width="1366" height="768" alt="ex2" src="https://github.com/user-attachments/assets/bcc1b449-c182-4234-ad2f-b04d5cb1835d" />

---

## Exercice 3 : Véhicule Hybride (Héritage multiple + virtual)

**Objectif :** Comprendre le problème du diamant et utiliser l'héritage virtuel.

### Description
Création de quatre classes :
- `Vehicule` : contient la marque et le modèle.
- `Thermique` : hérite virtuellement de `Vehicule` et contient la consommation de carburant.
- `Electrique` : hérite virtuellement de `Vehicule` et contient l'autonomie de la batterie.
- `Hybride` : hérite de `Thermique` et `Electrique`.

La méthode `afficherCaracteristiques()` affiche toutes les informations du véhicule hybride.

### Notions utilisées
- Héritage multiple.
- Problème du diamant (*Diamond Problem*).
- Héritage virtuel avec `virtual`.
- Constructeurs des classes de base virtuelle.

###  Capture d'écran de l'exécution

<img width="1366" height="768" alt="ex3" src="https://github.com/user-attachments/assets/cf0cc84f-9967-4e65-b1e3-50ade2f79393" />

---

## Exercice 4 : Système d'Utilisateurs Avancé

**Objectif :** Réaliser un système avancé combinant plusieurs rôles avec un menu interactif.

### Description
Création de quatre classes :
- `Utilisateur` : contient l'identifiant et le login.
- `Administrateur` : possède des droits d'accès et une méthode `gererSysteme()`.
- `Moderateur` : possède un niveau de modération et une méthode `modererContenu()`.
- `SuperUtilisateur` : hérite de `Administrateur` et `Moderateur`.

L'exercice utilise l'héritage virtuel pour éviter la duplication de la classe `Utilisateur`.

Un menu interactif permet de :
1. Afficher les informations du super utilisateur.
2. Gérer le système.
3. Modérer le contenu.
4. Quitter le programme.

### Notions utilisées
- Héritage multiple avancé.
- Héritage virtuel.
- Constructeurs et initialisation des classes parentes.
- Résolution des ambiguïtés.
- Menu interactif avec `do...while` et `switch...case`.

###  Capture d'écran de l'exécution

<img width="1366" height="768" alt="ex4_1" src="https://github.com/user-attachments/assets/91bf4445-45d1-4d90-aeed-fa4e16590380" />
<img width="1366" height="768" alt="ex4_2" src="https://github.com/user-attachments/assets/62ad3504-be41-4264-90c5-c6b2361dcd64" />


---

## Technologies utilisées

- **Langage :** C++
- **Paradigme :** Programmation Orientée Objet (POO)
- **Compilateur :** GCC / g++
- **Environnement :** Visual Studio Code / Code::Blocks


## Conclusion

Ce TP m'a permis de renforcer mes connaissances en programmation orientée objet avec C++. J'ai appris à utiliser l'héritage multiple, à résoudre les ambiguïtés entre les classes parentes et à appliquer l'héritage virtuel pour éviter le problème du diamant.

Les quatre exercices m'ont également permis de mettre en pratique les constructeurs, les méthodes et la création de programmes interactifs.

---

**Réalisé par Hamza Id El Baz**  
*TP 9 – Programmation Orientée Objet : C++ | MLIAEdu*
