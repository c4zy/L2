#include <stdio.h>

void inverse(float *a)
{
	*a = (*a == 0) ? 0 : 1 / *a;
}

int main()
{
	float x;
	printf("Entrer un nombre : ");
	scanf("%f", &x);
	inverse(&x);
	printf("\nSon inverse est : %f\n", x);

	return 0;
}
