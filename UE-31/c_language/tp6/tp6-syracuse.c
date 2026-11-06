#include <stdio.h>

// tp6 syracuse partie 1
int collatz(unsigned int x)
{
	return (x % 2 == 0) ? x / 2 : 3*x + 1;
}

// tp6 syracuse partie 2
void syracuse(unsigned int x)
{
	printf("%d ", x);
	if (x == 1 || x == 0) return;
	return syracuse(collatz(x));
}

// tp6 syracuse partie 3
int temps_de_vol(unsigned int x)
{
	if (x == 0) return 0;
	if (x == 1) return 0;
	return 1 + temps_de_vol(collatz(x));
}

// tp6 syracuse partie 4
int altitude(unsigned int x)
{
	int maxi = 0;
	return maxi;
}

int main()
{
	int n;
	printf("Entrer x: ");
	scanf("%d", &n); getchar();
	
	// 1
	printf("collatz(%d) = %d\n", n, collatz(n));
	
	//2
	printf("Syracuse: ");
	syracuse(n);
	printf("\n");
	
	//3
	printf("Temps de vol: %d\n", temps_de_vol(n));
	
	return 0;
}
