// ConsoleApplication1.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


int main()
{
	Deck d;
	for (int i = 0; i < 52; i++)
	{
		printf("%i  ", d.GetCarte(i));
	}
	getc(stdin);
    return 0;
}

