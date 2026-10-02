#include <stdio.h>

int main()
{
	int a, b;
	char op;
	printf("Entrer une opération: \n");
	scanf("%i %c %i", &a, &op, &b);
	
	switch (op)
	{
		case '+': printf("Le résultat de %i %c %i est %i\n", a, op, b, a+b); break;
		case '-': printf("Le résultat de %i %c %i est %i\n", a, op, b, a-b); break;
		case '*': printf("Le résultat de %i %c %i est %i\n", a, op, b, a*b); break;
		case '/': printf((b != 0) ? "Le résultat de %i %c %i est %i\n" : "Erreur b = 0\n", a, op, b, (b == 0) ? 0 : a/b);  break;
		case '%': printf("Le résultat de %i %c %i est %i\n", a, op, b, a%b);
	}

	return 0;
}
