#include <stdio.h>

int main()
{
	float moy;
	
	int n, cptr = 0;
	printf("Entrez un nombre: ");
	scanf("%i", &n);
	
	while (n >= 0)
	{
		moy += n;
		cptr++;
		
		printf("Entrez un nombre: ");
		scanf("%i", &n);
	}

	printf("Moyenne = %f\n", (cptr == 0) ? 0 : moy / cptr);

	return 0;
}
