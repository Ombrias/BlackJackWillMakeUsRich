#pragma once
#include <vector>

using namespace std;

class Main
{
	public:
		Main(); //Constructeur de base
		Main(unsigned int carte); //Constructeur quand on s�pare
		~Main();
		vector<unsigned int> GetMain(); //Renvoie le tableau
		bool GetEstUnePaire();
		bool GetContientUnAs();
		unsigned int GetSomme();
		void SetContientUnAsFalse();
		void SetContientUnAsTrue();
		void AjouterCarte(unsigned int nouvelleCarte); //Ajoute une carte � la fin
		int SupprimerCarte(); //Supprimer une carte pour s�parer
		void AfficherMain(); // Affiche la main, je te jure


	private:
		vector <unsigned int> main;
		bool estUnePaire;
		bool contientUnAs;
		unsigned int somme;
};

