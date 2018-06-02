#include "stdafx.h"
#include "Deck.h"
using namespace std;

Deck::Deck()
{
	int indice = 0;
	int x = 0;
	for (int val = 2; val <= 11; val++)
	{
		if (x<3 && val == 11)
		{
			val = 10;
			x++;
		}
		cartes[indice] = val;
		cartes[indice + 13] = val;
		cartes[indice + 26] = val;
		cartes[indice + 39] = val;
		indice++;
	}
}

int Deck::GetCarte(int indice) const
{
	return cartes[indice];
}

Deck::~Deck()
{
}


