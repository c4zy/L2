#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Ex 3.1
typedef struct
{
	int *valeurs;
	unsigned int taille;
} serie;

typedef struct
{
	serie *classes;
	unsigned int nb_classes;
} ecole;

//Ex 3.2
serie creation_serie(unsigned int n)
{
	serie s;
	s.valeurs = (int *)malloc(n * sizeof(int));
	s.taille = n;
	return s;
}

ecole creation_ecole(unsigned int m)
{
	ecole e;
	e.classes = (serie *)malloc(m * sizeof(serie));
	e.nb_classes = m;
	return e;
}

//Ex 3.3
void saisie_ecole(ecole e)
{
	for (int i = 0; i < e.nb_classes; i++)
	{
		int n;
		printf("\nNombre d'eleves de la classe %d: ", i+1);
		scanf("%d", &n);
		
		serie s = creation_serie(n);
	
		for (int j = 0; j < s.taille; j++)
		{
			printf("Note de l'eleve %d/%d: ", j+1, n);
			scanf("%d", &s.valeurs[j]);
		}
		
		e.classes[i] = s;
	}
		
}

//Ex 3.4
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

void affiche_ecole(ecole e)
{
	printf("\n");
	for (int i = 0; i < e.nb_classes; i++)
	{
		printf("Classe %d : ", i+1);
		affiche_serie(e.classes[i]);
		printf("\n");
	}
}

//Ex 3.5
void destruction_serie(serie *ps)
{
	free(ps->valeurs);
	ps->valeurs = NULL;
	ps->taille = 0;
}

void destruction_ecole(ecole *pe)
{
	for (int i = 0; i < pe->nb_classes; i++)
		destruction_serie(&pe->classes[i]);
	
	free(pe->classes);
	pe->classes = NULL;
	pe->nb_classes = 0;
}

//Ex 3.6
float moyenne(serie s)
{
	if (s.taille == 0)
		return NAN;
	
	float moy = 0;
	for (int i = 0; i < s.taille; i++)
		moy += s.valeurs[i];
	
	return moy / s.taille;
}

float variance(serie s)
{
	if (s.taille == 0)
		return NAN;
		
	float var = 0;
	for (int i = 0; i < s.taille; i++)
		var += (s.valeurs[i] - moyenne(s)) * (s.valeurs[i] - moyenne(s));
	
	return var / s.taille;
}

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
	/*
	int n;
	printf("Nombre de classes dans l'ecole: ");
	scanf("%d", &n);
	ecole e = creation_ecole(n);
	
	saisie_ecole(e);
	
	affiche_ecole(e);
	
	printf("Destruction de e\n");
	destruction_ecole(&e);
	
	printf("\nClasses dans l'ecole: %d\n", e.nb_classes);
	printf("Addresse de e.classes: %p\n", e.classes);
	*/
	
	ecole e;
	unsigned int n;
	int choix = -1;
	
	while (choix != 0)
	{
		printf("\nGestion d'ecole\n");
		printf("1: Saisir une ecole\n");
		printf("2: Moyenne d'une classe\n");
		printf("3: Variance d'une classe\n");
		printf("4: Mediane d'une classe\n");
		printf("0: Quitter\n\n");
		
		printf("Choix: ");
		scanf("%d", &choix); getchar();
		
		switch (choix)
		{
			case 1:
				printf("Nb de classes: ");
				scanf("%d", &n); getchar();
				e = creation_ecole(n);
				saisie_ecole(e);
				break;
				
			case 2:
				printf("Classe: ");
				scanf("%d", &n); getchar();
				printf("Moyenne de la classe %d: %f\n", n, moyenne(e.classes[n-1]));
				break;
			
			case 3:
				printf("Classe: ");
				scanf("%d", &n); getchar();
				printf("Variance de la classe %d: %f\n", n, variance(e.classes[n-1]));
				break;
				
			case 4:
				printf("Classe: ");
				scanf("%d", &n); getchar();
				printf("Mediane de la classe %d: %f\n", n, mediane(tri_croissant(e.classes[n-1])));
				break;
				
			case 0:
				break;
			
			default: printf("Choisir 1, 2, 3, 4 ou 0.\n");
		}
	}
	
	destruction_ecole(&e);

	printf("\n\nClasses dans l'ecole: %u", e.nb_classes);
  	printf("\nAddresse de e.classes: %p", e.classes);

	return 0;
}











