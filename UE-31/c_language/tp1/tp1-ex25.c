#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("%i\n", a && !b || !a && b);
	
		a = 0; b = 1;
	printf("%i\n", a && !b || !a && b);
	
		a = 1; b = 0;
	printf("%i\n", a && !b || !a && b);
	
		a = 1; b = 1;
	printf("%i\n", a && !b || !a && b);
		
	return 0;
}
