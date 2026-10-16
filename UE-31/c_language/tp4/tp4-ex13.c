#include <stdio.h>

void extremum(int t[], unsigned int n, int *min, int *max)
{
	for (int i = 0; i < n; i++)
	{
		if (t[i] < *min)
			*min = t[i];
	
		if (t[i] > *max)
			*max = t[i];
	}
}

int main()
{
	int t[6], min, max;
	for (int i = 0; i < 6; i++)
	{
		printf("Element %d/6: ", i+1);
		scanf("%d", &t[i]);
	}
	min = t[0];
	max = t[0];
	
	extremum(t, 6, &min, &max);
	
	printf("Minimum du tableau: %d\n", min);
	printf("Maximum du tableau: %d\n", max);
	
	return 0;	
}
