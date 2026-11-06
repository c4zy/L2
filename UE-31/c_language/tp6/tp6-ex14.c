#include <stdio.h>

int digits(int n)
{
	if (n >= 0 && n < 10)
		return 1;
	return 1 + digits(n / 10);
}

int main()
{
	int n;
	printf("Entrer un nombre: ");
	scanf("%d", &n);
	printf("Le nombre %d possede %d %s.\n", n, digits(n), (digits(n) == 1) ? "chiffre" : "chiffres");
	return 0;
}
