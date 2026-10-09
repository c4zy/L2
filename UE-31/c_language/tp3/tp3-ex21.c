#include <stdio.h>

int factorielle(unsigned int n)
{
	int f = 1;
	
	for (int i = n; i > 1; i--)
		f *= i;
	
	return f;	
}

int main()
{
	int n;
	printf("Entrer un nombre entier :\n");
	scanf("%d", &n);
	printf("\nLa factorielle de %d est: %d\n", n, factorielle(n));

	return 0;
}
