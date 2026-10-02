#include <stdio.h>

int main()
{
	int n, nbChiffres = 0;
	printf("Entrer un nombre: ");
	scanf("%i", &n);
	
	do
	{
		n /= 10;
		nbChiffres++;
	} while (n > 0);
	
	printf("Nombre de chiffres: %i\n", nbChiffres);

	return 0;
}
