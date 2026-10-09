#include <stdio.h>

char bissex(int annee)
{
	if (annee % 4 == 0 && annee % 100 != 0)
		return 1;
	else if (annee % 100 == 0 && annee % 400 == 0)
		return 1;

	return 0;
}

unsigned char nb_jours(unsigned int m, unsigned int a)
{
	if (m == 2)
		return (bissex(a)) ? 29 : 28;
	else if (m % 2 == 0)
		return 30;
	else	
		return 31;
}

int main()
{
	int annee;
	printf("\nEntrer une annee: ");
	scanf("%d", &annee);

	int mois;
	printf("\nEntrer un mois: ");
	scanf("%d", &mois);
	
	printf("\nLe mois %d de l'année %d possede %d jours.\n", mois, annee, nb_jours(mois, annee));

	return 0;
}
