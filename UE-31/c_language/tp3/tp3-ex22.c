#include <stdio.h>

int puissance(unsigned int x, unsigned int n)
{
	int res = 1;
	
	for (int i = 1; i <= n; i++)
		res *= x;
	
	return res;
}

int main()
{
	int x, n;
	printf("Entrer un nombre x : ");
	scanf("%d", &x);
	printf("Entrer un exposant : ");
	scanf("%d", &n);
	
	printf("%d^%d = %d\n", x, n, puissance(x, n));
	
	return 0;
}
