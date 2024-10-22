#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Categorie {
private:
    int id;  // Identifiant unique de la cat�gorie
    string nom;  // Nom de la cat�gorie
    vector<string> listImages;  // Liste des images associ�es � cette cat�gorie

public:
    // Constructeur
    Categorie(int id, const string& nom) : id(id), nom(nom) {}

    // Getters
    int getId() const { return id; }
    string getNom() const { return nom; }
    vector<string> getListImages() const { return listImages; }

    // Setters
    void setNom(const string& nouveauNom) { nom = nouveauNom; }

    // M�thodes pour g�rer la cat�gorie
    void creerCategorie(int newId, const string& newNom) {
        id = newId;
        nom = newNom;
        cout << "Cat�gorie '" << nom << "' cr��e avec succ�s.\n";
    }

    void modifierCategorie(const string& nouveauNom) {
        nom = nouveauNom;
        cout << "Cat�gorie modifi�e. Nouveau nom : " << nom << "\n";
    }

    void supprimerCategorie() {
        cout << "Cat�gorie '" << nom << "' supprim�e.\n";
        nom.clear();
        listImages.clear();
    }

    // M�thodes pour g�rer les images associ�es � la cat�gorie
    void ajouterImage(const string& image) {
        listImages.push_back(image);
        cout << "Image '" << image << "' ajout�e � la cat�gorie '" << nom << "'.\n";
    }

    void afficherImages() const {
        cout << "Images de la cat�gorie '" << nom << "':\n";
        for (const auto& img : listImages) {
            cout << " - " << img << "\n";
        }
    }
};

int main() {
    // Cr�ation d'une cat�gorie
    Categorie cat(1, "Nature");

    // Ajout d'images � la cat�gorie
    cat.ajouterImage("montagne.jpg");
    cat.ajouterImage("plage.jpg");

    // Affichage des images
    cat.afficherImages();

    // Modification de la cat�gorie
    cat.modifierCategorie("Paysages");

    // Suppression de la cat�gorie
    cat.supprimerCategorie();

    return 0;
}
