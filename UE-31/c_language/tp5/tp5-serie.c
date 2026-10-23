#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Ex 2.1
typedef struct
{
	int *valeurs;
	unsigned int taille;
} serie;

//Ex 2.2
serie creation_serie(unsigned int n)
{
	serie s;
	s.valeurs = (int *)malloc(n * sizeof(int));
	s.taille = n;
	return s;
}

//Ex 2.3
void affiche_serie(serie s)
{
	if (s.taille > 0)
	{
		printf("( %d", s.valeurs[0]);
		for (int i = 1; i < s.taille; i++)
			printf(", %d", s.valeurs[i]);
		printf(" )");
	}
	else
		printf("(nil)");
}

//Ex 2.4
void destruction_serie(serie *ps)
{
	free(ps->valeurs);
	ps->valeurs = NULL;
	ps->taille = 0;
}

//Ex 2.5
float moyenne(serie s)
{
	if (s.taille == 0)
		return NAN;
	
	float moy = 0;
	for (int i = 0; i < s.taille; i++)
		moy += s.valeurs[i];
	
	return moy / s.taille;
}

//Ex 2.6
float variance(serie s)
{
	if (s.taille == 0)
		return NAN;
		
	float var = 0;
	for (int i = 0; i < s.taille; i++)
		var += (s.valeurs[i] - moyenne(s)) * (s.valeurs[i] - moyenne(s));
	
	return var / s.taille;
}

//Ex 2.7
void echanger(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

serie tri_croissant(serie s)
{
	serie sTriee = creation_serie(s.taille);
	for (int i = 0; i < sTriee.taille; i++)
		sTriee.valeurs[i] = s.valeurs[i];
	
	for (int f = s.taille-1; f > 0; f--)
		for (int i = 0; i < f; i++)
			if (sTriee.valeurs[i] > sTriee.valeurs[i+1])
				echanger(&sTriee.valeurs[i], &sTriee.valeurs[i+1]);
	
	return sTriee;
}

//Ex 2.8
float mediane(serie s)
{
	if (s.taille == 0)
		return NAN;
	
	return (s.taille % 2 == 0)
				? s.valeurs[(s.taille / 2) - 1]
				: s.valeurs[((s.taille + 1) / 2) - 1]; 
}

int main()
{
	//serie s;
	
	int n;
	printf("Nombre de valeurs: ");
	scanf("%d", &n);
	
	serie s = creation_serie(n);
	for (int i=0; i < n; i++)
	{
		printf("Valeur %d/%d: ", i+1, n);
		scanf("%d", &s.valeurs[i]);
	}
	
	printf("Serie: ");
	affiche_serie(s);
	printf("\n");
	
	printf("Moyenne de la serie: %f\n", moyenne(s));
	
	printf("Variance de la serie: %f\n", variance(s));
	
	serie sTriee = tri_croissant(s);
	
	printf("Mediane de la serie: %f\n", mediane(sTriee));
	
	printf("Serie triee: ");
	affiche_serie(sTriee);
	printf("\n");
	
	destruction_serie(&s);
	
	destruction_serie(&sTriee);
	
	printf("Serie desallouee: valeurs = ");
	affiche_serie(s);
	printf(", taille = %d\n", s.taille);
	
	printf("Serie triee desallouee: valeurs = ");
	affiche_serie(sTriee);
	printf(", taille = %d\n", s.taille);
	
	return 0;
}
