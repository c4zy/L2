#include <stdio.h>

int main()
{
	int n;
	float x;
	char c1, c2;
	
	printf("Entrez les valeurs: ");
	scanf("%d %f %c %c", &n, &x, &c1, &c2);
	printf("n=%d, x=%f, c1=%c, c2=%c\n", n, x, c1, c2);
	
	return 0;
}
