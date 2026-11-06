#include <stdio.h>

int factorielle(int n)
{
	if (n < 2)
		return 1;
	return n * factorielle(n-1);
	
}

int main()
{
	int n;
	printf("Entrer un nombre: ");
	scanf("%d", &n);
	
	printf("%d! = %d\n", n, factorielle(n));

	return 0;
}
