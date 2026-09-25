#include <stdio.h>

int main()
{
	const float pi = 3.14159265358793;

	printf("Saisissez le rayon r: ");
	
	float r;
	scanf("%f", &r);
	
	printf("Perimetre: %f\n", 2 * pi * r);
	printf("Aire: %f\n", pi * r * r);

	return 0;
}
