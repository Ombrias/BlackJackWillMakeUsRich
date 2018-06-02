#pragma once

class Deck
{
private:
	int cartes[52];
public:
	Deck();
	~Deck();
	
	int GetCarte(int indice) const;
};

