#pragma once
#include <vector>

using namespace std;

class Main
{
	public:
		Main(); //Constructeur de base
		Main(unsigned int carte); //Constructeur quand on sépare
		~Main();
		vector<unsigned int> GetMain(); //Renvoie le tableau
		bool GetEstUnePaire();
		bool GetContientUnAs();
		unsigned int GetSomme();
		void SetContientUnAsFalse();
		void SetContientUnAsTrue();
		void AjouterCarte(unsigned int nouvelleCarte); //Ajoute une carte à la fin
		int SupprimerCarte(); //Supprimer une carte pour séparer
		void AfficherMain(); // Affiche la main, je te jure


	private:
		vector <unsigned int> main;
		bool estUnePaire;
		bool contientUnAs;
		unsigned int somme;
};

