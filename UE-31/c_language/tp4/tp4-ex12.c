#include <stdio.h>

int somme(int t[], unsigned int n)
{
	int s = 0;
	
	for (int i = 0; i < n; i++)
		s += t[i];
	
	return s;
}

int main()
{
	int t[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Element %d/5: ", i+1);
		scanf("%d", &t[i]);
	}
	
	printf("Somme: %d\n", somme(t, 5));

	return 0;
}
