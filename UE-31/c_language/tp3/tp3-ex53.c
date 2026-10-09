#include <stdio.h>

unsigned char bissex(unsigned int a)
{
	if (a % 4 == 0 && a % 100 != 0)
		return 1;
	else if (a % 100 == 0 && a % 400 == 0)
		return 1;
		
	return 0;
}

unsigned int nb_jours(unsigned int a, unsigned int m)
{
	if (m == 2)
		return (bissex(a)) ? 29 : 28;
	else if (m % 2 != 0)
		return 31;
	else if (m % 2 == 0)
		return 30;
}

int saisie_date(unsigned int *j, unsigned int *m, unsigned int *a)
{
	printf("Saisir une date (jj/mm/aaa): ");
	scanf("%d/%d/%d", j, m, a);
	
	unsigned char etat = *a >= 1970 && *a <= 9999;
				  etat &= *m >= 1 &&  *m <= 12;
				  etat &= *j >= 1 && *j <= nb_jours(*a, *m);
	return 1 - etat;
}

int main()
{	
	unsigned int j, m, a;
	if (saisie_date(&j, &m, &a) == 0)
		printf("La date %d, %d, %d est valide\n", j, m, a);
	else
		printf("La date %d, %d, %d est invalide\n", j, m, a);

	return 0;
}
