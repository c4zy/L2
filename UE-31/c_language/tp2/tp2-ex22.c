#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Entrez (a b c): ");
	scanf("%i %i %i", &a, &b, &c);

	float disc = b*b - 4*a*c;
	
	if (disc < 0.0)
		printf("Aucune solution réele.\n");
	else if (disc == 0.0)
	{
		float sol = -b / (2*a);
		printf("Solution: %f\n", sol);
	}
	else
	{
		float sol1 = (-b + sqrt(disc)) / (2*a);
		float sol2 = (-b - sqrt(disc)) / (2*a);
		printf("Solutions: %f %f\n", sol1, sol2);
	}

	return 0;
}
