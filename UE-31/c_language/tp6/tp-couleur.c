#include <stdio.h>

unsigned char echantillone(unsigned char nuance, unsigned char n, unsigned char m)
{
	return nuance * ((1 << m) - 1) / ((1 << n) - 1);
}

void print_uchar(unsigned char c)
{
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", (c >> i) & 1);
	}
}

unsigned char encode(unsigned char r, unsigned char g, unsigned char b)
{
	return echantillone(r, 8, 3) << (7-2) |
		   echantillone(g, 8, 3) << (7-5) |
		   echantillone(b, 8, 2);
}

int main()
{
	unsigned char r, g, b;
	printf("Entrer un couleur sous forme (r g b): ");
	scanf("%hhu %hhu %hhu", &r, &g, &b);
	printf("Couleur saisie: (%hhu, %hhu, %hhu)\n", r, g, b);
	printf("Couleur encodee: %d\n", encode(r ,g, b));
	
	return 0;
}
