#include <stdio.h>

unsigned char bissextile(unsigned int a)
{
	if (a % 4 == 0 && a % 100 != 0)
		return 1;
	else if (a % 100 == 0 && a % 400 == 0)
		return 1;
	
	return 0;
}

int main()
{
	int annee;
	printf("Entrer une annee: ");
	scanf("%d", &annee);

	if (bissextile(annee))
		printf("%d est bissextile\n", annee);
	else
		printf("%d n'est pas bissextile\n", annee);

	return 0;
}
