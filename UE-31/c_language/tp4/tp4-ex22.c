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

void tri_bulle(int t[], unsigned int n)
{
	int fin = n-1;
	while (fin > 0)
	{
		int i = 0;
		while (i < n-1)
		{
			if (t[i] > t[i+1])
			{
				int tmp = t[i];
				t[i] = t[i+1];
				t[i+1] = tmp;
			}
			
			i++;
		}
	
		fin--;
	}
}

int main()
{
	int t[6];
	for (int i = 0; i < 6; i++)
	{
		printf("Element %d/6: ", i+1);
		scanf("%d", &t[i]);
	}
	
	printf("Tableau original: ");
	affiche(t, 6);
	
	tri_bulle(t, 6);
	
	printf("Tableau triée: ");
	affiche(t, 6);
	
	return 0;
}
