#include <stdio.h>

int main()
{
	int n;
	printf("Entrer un nombre :\n");
	scanf("%i", &n);
	
	int res = 0;
	while (res * res <= n) res ++;
	
	printf("Le plus petit carré supérieur à %i est %i.\n", n, res * res);

	return 0;
}
