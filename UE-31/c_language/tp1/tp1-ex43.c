#include <stdio.h>

int main()
{
	float x1, y1;
	float x2, y2;
	
	printf("Saisissez les coords de v1: ");
	scanf("%f %f", &x1, &y1);
	
	printf("Saisissez les coords de v2: ");
	scanf("%f %f", &x2, &y2);
	
	const float ps = x1 * y1 + x2 * y2; 
	
	printf("Produit scalaire: %f\n", ps);
	
	return 0;
}
