#include <stdio.h>

void affiche(int t[], unsigned int n)
{	if (n > 0)
	{
		printf("[ %d", t[0]);
		for (int i = 1; i < n; i++)
			printf(", %d", t[i]);
		printf(" ]\n");
	}
	else
		printf("[]\n");
}

int main()
{
	int t[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Element %d/5: ", i+1);
		scanf("%d", &t[i]);
	}
	affiche(t, 5);

	return 0;
}
