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

void tri_selection(int t[], unsigned int n)
{
	int debut = 0;
	while (debut < n-1)
	{
		int min = debut;
		int i = debut+1;
		while (i < n)
		{
			if (t[i] < t[min])
			{
				min = i;
			}
			
			i++;
		}
		
		if (min != i)
		{
			int tmp = t[min];
			t[min] = t[debut];
			t[debut] = tmp;
		}
	
		debut++;
	}
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
	
	tri_selection(t, 5);
	
	affiche(t, 5);
	
	return 0;
}
