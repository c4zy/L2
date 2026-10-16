#include <stdio.h>

// Ex 3.2
//------------------------------------------------------------------------------------------------------------
void affiche(char plateau[][3])
{
	for (int i=0; i < 3; i++)
	{
		printf("[ %c", plateau[i][0]);
		for (int j=1; j < 3; j++)
		{
			printf(" %c", plateau[i][j]);
		}
		printf(" ]\n");
	}
}

// Ex 3.3
//------------------------------------------------------------------------------------------------------------
char case_valide(int ligne, int colonne, char plateau[][3])
{
	if (ligne >= 0 && ligne < 3
	&&  colonne >= 0 &&  colonne < 3
	&&  plateau[ligne][colonne] == ' ')
	{
		return 1;
	}

	return 0;
}
//------------------------------------------------------------------------------------------------------------

// Ex 3.4
//------------------------------------------------------------------------------------------------------------
char case_libre(char plateau[][3])
{
	char libre = 0;
	int i = 0;
	while (!libre && i < 3)
	{
		int j = 0;
		while (!libre && j < 3)
		{
			if (plateau[i][j] == ' ')
			{
				libre = 1;
			}
			j++;
		}
		i++;
	}
	
	return libre;
}
//------------------------------------------------------------------------------------------------------------

// Ex 3.5
//------------------------------------------------------------------------------------------------------------
char aligne(char symbole, char plateau[][3])
{
	
	for (int i=0; i < 3; i++)
	{
		if (plateau[i][0] == symbole && plateau[i][1] == symbole && plateau[i][2] == symbole)
			return 1;
	}
	
	for (int j=0; j < 3; j++)
	{
		if (plateau[0][j] == symbole && plateau[1][j] == symbole && plateau[2][j] == symbole)
			return 1;
	}
	
	if (plateau[0][0] == symbole && plateau[1][1] == symbole && plateau[2][2] == symbole)
		return 1;
		
	if (plateau[2][0] == symbole && plateau[1][1] == symbole && plateau[0][2] == symbole)
		return 1;
	
	return 0;
}
//------------------------------------------------------------------------------------------------------------


int main()
{
	// Ex 3.1
	//--------------------------------------------------------------------------------------------------------
	char plateau[3][3] = 
	{
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	};
	//--------------------------------------------------------------------------------------------------------

	/*
	affiche(plateau);
	*/
	
	/*
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j < 3; j++)
		{
			printf("Case (%d, %d)", i, j);
			printf(" %s\n", (case_valide(i, j, plateau) == 1) ? "valide." : "invalide.");
		}
	}
	*/
	
	/*
	printf("%s\n", (case_libre(plateau) == 1) ? "Il ya des cases libres." : "Il ya plus de cases libres.");
	*/
	
	/*
	printf("%s\n", (aligne('O', plateau) == 1) ? "Jeu terminée." : "Jeu non-terminée.");
	*/
	
	int l, c;
	char vainqueur = 0;
	while (!vainqueur && case_libre(plateau))
	{
		affiche(plateau);
		printf("J1: Position a jouer (l, c): ");
		scanf("%d %d", &l, &c);
		
		while (!case_valide(l, c, plateau))
		{
			printf("J1: Position invalide (l, c): ");
			scanf("%d %d", &l, &c);
		}
		plateau[l][c] = 'X';
		affiche(plateau);
		
		if (aligne('X', plateau))
		{
			vainqueur = 1;
		}
		else
		{
		
			printf("J2: Position a jouer (l, c): ");
			scanf("%d %d", &l, &c);
			
			while (!case_valide(l, c, plateau))
			{
				printf("J2: Position invalide (l, c): ");
				scanf("%d %d", &l, &c);
			}
			plateau[l][c] = 'O';
			
			if (aligne('O', plateau))
			{
				vainqueur = 2;
			}
		}
	}
	
	affiche(plateau);
	printf("J%d a gagnée la partie!\n", vainqueur);
	return 0;
}
