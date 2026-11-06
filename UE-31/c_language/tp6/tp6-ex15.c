#include <stdio.h>

int pgcd(unsigned int n, unsigned int m)
{
	if (n == 0) return m;
	if (m == 0) return n;

	return pgcd(n, m);
	// non fait
}

int main()
{
	int n, m;
	printf("Entrer un premier nombre: ");
	scanf("%d", &n); getchar();
	printf("Entrer un second nombre: ");
	scanf("%d", &m); getchar();
	printf("Le PGCD de %d et %d est %d\n", n, m, pgcd(n, m));
	
	return 0;
}
