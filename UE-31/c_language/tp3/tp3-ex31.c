#include <stdio.h>

int fact(int n)
{
	int prod = 1;
	
	for (int i = n; i > 1; i--)
		prod *= i;
	
	return prod;
}

int coeffbinomial(int n, int k)
{
	return fact(n) / (fact(k) * fact(n-k));
}

int main()
{
	int n;
	printf("Entrer une valeur pour n :\n\n");
	scanf("%d", &n);
	
	printf("\n(x+1)^%d = ", n);
	
	if (n > 1)
	{
		printf("x^%d ", n);
		
		for (int i = n-1; i > 1; i--)
			printf("+ %dx^%d ", coeffbinomial(n, i), i);
			
		printf("+ %dx + 1\n", n);
	} else if (n == 1)
	{
		printf("x + 1\n");
	} else if (n == 0)
		printf("1\n");
	
	
	
	return 0;
}
