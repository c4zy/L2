#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ex 1.1
int *creation_serie(unsigned int n)
{
	int *p = (int *)malloc(n * sizeof(int));
	return p;
}

//Ex 1.2
void affiche_serie(int *s, unsigned int n)
{
	if (n > 0)
	{
		printf("(");
		printf(" %d", s[0]);
		for (int i=1; i < n; i++)
			printf(", %d", s[i]);
		printf(" )");
	}
}

//Ex 1.3
void destruction_serie(int **ps)
{
	free(*ps);
	*ps = NULL;
}

//Ex 1.4
float moyenne(int *s, unsigned int n)
{
	if (n <= 0)
		return NAN;
	
	float moy = 0;
	for (int i=0; i < n; i++)
		moy += s[i];
	return moy / n;
}

//Ex 1.5
float variance(int *s, unsigned int n)
{
	float var = 0;
	for (int i=0; i < n; i++)
		var += (s[i] - moyenne(s, n))*(s[i] - moyenne(s, n));
	return var / n;
}

//Ex 1.6
int *tri_croissant(int *s, unsigned int n)
{
	int *pTriee;
	pTriee = (int *)malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++)
		pTriee[i] = s[i];
	
	for (int f = n-1; f > 1; f--)
		for (int i = 0; i < f; i++)
			if (pTriee[i] > pTriee[i+1])
			{
				int tmp = pTriee[i];
				pTriee[i] = pTriee[i+1];
				pTriee[i+1] = tmp;
			}
	
	return pTriee;
}

//Ex 1.7
float mediane(int *s, unsigned int n)
{
	if (n == 0)
		return NAN;
		
	int *pTriee = tri_croissant(s, n);
	return (n % 2 == 0) ? pTriee[(n / 2) - 1] : pTriee[((n+1) / 2) - 1];
}

int main()
{
	int *p = creation_serie(5);
	
	for (int i=0; i < 5; i++)
	{
		printf("Valeur %d/5: ", i+1);
		scanf("%d", &p[i]);
	}
	
	//printf("Serie: ");
	//affiche_serie(p, 5);
	
	//printf("La moyenne de ");
	//affiche_serie(p, 5);
	//printf(" est %f\n", moyenne(p, 5));
	
	//printf("Sa variance est de %f\n", variance(p, 5));
	
	//printf("Serie originale: ");
	//affiche_serie(p, 5);
	//printf("\n");
	
	//int *pTriee = tri_croissant(p, 5);
	
	//printf("Serie triee: ");
	//affiche_serie(pTriee, 5);
	//printf("\n");
	
	printf("La valeur mediane de ");
	affiche_serie(p, 5);
	printf(" est %f\n", mediane(p, 5));
	
	
	destruction_serie(&p);
	//destruction_serie(&pTriee);

	return 0;
}
