#include "stdafx.h"
#include "Main.h"
using namespace std;


Main::Main()
{
	somme = 0;
	estUnePaire = false;
	contientUnAs = false;
}

Main::Main(unsigned int carte)
{
	somme = carte;
	estUnePaire = false;
	contientUnAs = false;
	AjouterCarte(carte);
}

Main::~Main()
{
	main.clear();
}

vector <unsigned int> Main::GetMain()
{
	return main;
}

bool Main::GetEstUnePaire()
{
	return estUnePaire;
}

bool Main::GetContientUnAs()
{
	return contientUnAs;
}

unsigned int Main::GetSomme()
{
	return somme;
}

void Main::SetContientUnAsFalse()
{
	contientUnAs = false;
}

void Main::SetContientUnAsTrue()
{
	contientUnAs = true;
}

void Main::AjouterCarte(unsigned int nouvelleCarte)
{
	main.push_back(nouvelleCarte); // J'ajoute mon élement au tableau
	somme = somme + nouvelleCarte; 
	if (main.size() == 2) // Si j'ai que deux cartes,
	{
		if (main.front() == main.back()) // Je regarde si j'ai une paire,
		{
			estUnePaire = true; // Si j'ai une paire je change mon booléen
		}
	}
	for (unsigned int i = 0; i < main.size(); i++) // Je parcours mon tableau à 
	{
		if (main[i] == 11) // la recherche d'un as, 
		{
			SetContientUnAsTrue(); // si j'en ai une je change mon booléen
		}
		break;
	}
}

int Main::SupprimerCarte()
{
	int carte;
	carte = main.back(); // Stocke la carte
	main.pop_back(); //Supprime la carte
	somme = somme - carte; // Réduit de la somme
	return carte;
}

void Main::AfficherMain()
{
	int carte;
	for (int i = 0; i < main.size(); i++)
	{
		carte = main[i];
		cout << carte << endl;
	}
}