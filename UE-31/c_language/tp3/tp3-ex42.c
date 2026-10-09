#include <stdio.h>

void croissant(float *a, float *b)
{
	if (*a > *b)
	{
		float tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

int main()
{
	float a, b;
	printf("Entrer a: ");
	scanf("%f", &a);
	printf("Entrer b: ");
	scanf("%f", &b);
	
	croissant(&a, &b);
	
	printf("Apres tri, a = %.0f et b = %.0f\n", a, b);
	
	return 0;
}
