#include <stdio.h>

int main()
{
	int n;
	printf("Entrez n: ");
	scanf("%d", &n);
	
	if (n < 0)
	{
		printf("n doit être positif!\n");
		return -1;
	}
		
	printf("(x + 1)^%d = ", n);
	
	printf("x^%d + ", n);
	for (int i = n-1; i > 1; i--)
	{
	
		int nfact = 1;
		for (int i = 0; i < n; i++) nfact *= i+1;
			
		int kfact = 1;
		for (int j = 0; j < i; j++) kfact *= j+1;
			
		int nkfact = 1;
		for (int j = 0; j < n-i; j++) nkfact *= j+1;
	
		printf("%dx^%d + ", nfact/(kfact*nkfact), i);
	}
	printf("%dx + 1\n", n);
	
	
	return 0;
}
