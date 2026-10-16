#include <stdio.h>

void inverse(int t[], unsigned int n)
{
	int tmp;
	for (int i = 0; i < n/2; i++)
	{
		tmp = t[i];
		t[i] = t[n-i-1];
		t[n-i-1] = tmp;
	}
}

int main()
{
	int t[7];
	for (int i = 0; i < 7; i++)
	{
		printf("Element %d/7: ", i+1);
		scanf("%d", &t[i]);
	}
	
	printf("Tableau original: [ %d", t[0]);
	for (int i = 1; i < 7; i++)
	{
		printf(", %d", t[i]);
	}
	printf(" ]\n");
	
	inverse(t, 7);
	
	printf("Tableau inverse: [ %d", t[0]);
	for (int i = 1; i < 7; i++)
	{
		printf(", %d", t[i]);
	}
	printf(" ]\n");
	
	return 0;
}
