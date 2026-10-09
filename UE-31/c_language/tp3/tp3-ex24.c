#include <stdio.h>

int fact(int n)
{
	int f = 1;
	
	for (int i = n; i > 1; i--)
		f *= i; 
	
	return f;
}

unsigned int combinaison(unsigned int n, unsigned int k)
{
	return fact(n) / (fact(k) * fact(n - k));
}

int main()
{
	int n, k;
	printf("Nombre total d'elements (n) : ");
	scanf("%d", &n);
	printf("Nombre d'elements a combiner (k) : ");
	scanf("%d", &k);
	printf("Le nombre de combinaisons de %d elements parmi %d est : %d\n", k, n, combinaison(n, k));

	return 0;
}
