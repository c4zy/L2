#include <stdio.h>

int main()
{
	unsigned int a, m, j;
	printf("Entrez une date: ");
	
	int val;
	scanf("%u", &val);
	a = val / 10000;
	m = (val / 100) % 100;
	j = val % 100;
	
	printf("Annee = %d, Mois = %d, Jour = %d\n", a, m, j);

	return 0;
}
