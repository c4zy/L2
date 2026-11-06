#include <stdio.h>

// 1
void print_uchar(unsigned char c)
{
	for (int i = 7; i >= 0; i--) printf("%d", (c >> i) & 1);
	//printf("\n");
}

// 2
unsigned char comp2_uchar(unsigned char c)
{
	return ~c + 1;
}

// 4
unsigned char extract(unsigned char val, unsigned char begin, unsigned char end)
{
	unsigned char res = 0;
	int cptr = 0;
	for (int i = 7; i >= 0; i--)
	{
		if (i >= begin && i <= end)
		{
			res |= ((val >> i) & 1) << (7-cptr);
			cptr++;
		}
	}
	
	return res;
}

// 5
unsigned char poids(unsigned char a)
{
	int cptr = 0;
	while (a > 0)
	{
		if (a & 1 == 1)
			cptr++;
		a >>= 1;
	}
	return cptr;
}

// 6
unsigned char hamming(unsigned char a, unsigned char b)
{
	int s = 0;
	
	for (int i = 0; i < 8; i++)
	{
		s += ((a >> i) & 1) ^ ((b >> i) & 1);
	}
	
	return s;
}

// 3
int main(){
    
    unsigned char a, b;
    printf("Saisir un nombre entre 0 et 255: ");
    scanf("%hhu", &a); getchar();
    printf("Saisir un nombre entre 0 et 255: ");
    scanf("%hhu", &b); getchar();
    
    printf("a = ");
    print_uchar(a);
    printf("\n");
    
    printf("b = ");
    print_uchar(b);
    printf("\n");
    
    printf("d(%d, %d) = %d\n", a, b, hamming(a, b));
    
    return 0;
}
