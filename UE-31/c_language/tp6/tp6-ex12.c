#include <stdio.h>

int somme(int n)
{
	if (n <= 0)
		return 0;
	return n + somme(n-1);
}

int main()
{
	int n;
	printf("Entrer un nombre: ");
	scanf("%d", &n);
	printf("somme(%d) = %d\n", n, somme(n));
	
	return 0;
}
