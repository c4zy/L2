#include <stdio.h>

int pgcd(int a, int b)
{
	while (b > 0)
	{
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	
	return a;
}

int ppcm(int a, int b)
{
	return a*b / pgcd(a, b);
}

int main()
{
	int a, b;
	printf("Entrer le nombre a :\n");
	scanf("%d", &a); getchar();
	printf("Entrer le nombre b:\n");
	scanf("%d", &b); getchar();
	
	printf("Le PPCM de %d et %d est: %d\n", a, b, ppcm(a, b));

	return 0;
}
