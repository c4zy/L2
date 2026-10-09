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

int main()
{
	int n, m;
	printf("Entrer le nombre a : \n");
	scanf("%d", &n); getchar();
	printf("Entrer le nombre b : \n");
	scanf("%d", &m); getchar();
	printf("\nLe PGCD de %d et %d est: %d\n", n, m, pgcd(n, m));
		
	return 0;
}
