#include <stdio.h>

int main()
{
	int n;
	
	printf("Saisissez un nombre entier: ");
	scanf("%d", &n);
	
	printf("Parite: %d\n", n % 2);

	return 0;
}
