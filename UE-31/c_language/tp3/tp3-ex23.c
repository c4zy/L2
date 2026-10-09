#include <stdio.h>

int fact(int n)
{
	int f = 1;

	for (int i = n; i > 1; i--)
		f *= i;

	return f;
}

unsigned int arrangement(unsigned int n, unsigned int k)
{
	return fact(n) / fact(n - k);
}

int main()
{
	int n, k;
	printf("Nombre total d'elements (n) : ");
	scanf("%d", &n);
	printf("Nombre d'elements a arranger (k) : ");
	scanf("%d", &k);
	
	printf("Le nombre d'arragements de %d elements parmi %d est : %d\n", k, n, arrangement(n, k));
	
	return 0;
}






