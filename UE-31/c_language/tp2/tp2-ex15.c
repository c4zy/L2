#include <stdio.h>

int main()
{
	int n;
	printf("Entrez n: ");
	scanf("%i", &n);
	
	if (n <= 0)
	{
		printf("n doit être strictement positif!\n");
		return -1;
	}
	
	int s = 0;
	
	for (int i = 1; i <= n; i++)
		s += i*i;
	
	printf("%i\n", s);
	
	return 0;
}
