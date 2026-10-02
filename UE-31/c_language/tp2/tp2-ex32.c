#include <stdio.h>

int main()
{
	int x, y, n;
	printf("Entrez x, y, n: ");
	scanf("%i %i %i", &x, &y, &n);
	
	if (n < 0)
	{
		printf("n doit être positif!\n");
		return -1;
	}
	
	int s = 0;
	
	for (int k = 0; k <= n; k++)
	{
		int factn = 1;
		for (int i = n; i > 0; i--) factn *= i;
			
		int factk = 1;
		for (int i = k; i > 0; i--) factk *= i;
			
		int factn_k = 1;
		for (int i = n-k; i > 0; i--) factn_k *= i;
			
		int px = 1;
		for (int i = 1; i <= n-k; i++) px *= x;
		
		int py = 1;
		for (int i = 1; i <= k; i++) py *= y;
		
		s += factn / (factk * factn_k) * px * py;
	}
	
	printf("(%i + %i)^%i = %i\n", x, y, n, s);
	
	return 0;
}










