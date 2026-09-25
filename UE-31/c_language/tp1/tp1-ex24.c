#include <stdio.h>

int main()
{
	float x = 1.0, y = 2.0, z = 3.0, u = 4.0, v = 5.0, w = 6.0;
	printf("%f\n", (x + 2) / (y + 4));
	printf("%f\n", (x * y) / (v + 2));
	printf("%f\n", x * (y + z * (3 - u)));
	printf("%f\n", u * (x*x*x) + v * (x*x) + w * x);
	
	return 0;
}
