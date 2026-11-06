#include <stdio.h>

int fibonacci(int n)
{
	if (n < 2)
		return n;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int n;
	printf("Entrer un nombre: ");
	scanf("%d", &n);
	printf("%d", fibonacci(0));
	for (int i = 1; i <= n; i++)
		printf(", %d", fibonacci(i));
	printf("\n");
	return 0;
}
