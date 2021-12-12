/* Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro. */

#include <stdio.h>
#include <math.h>

int main()
{
	int number1, number2, raised1, raised2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &number1);
	printf("Digite o segundo valor: ");
	scanf("%d", &number2);
	
	raised1 = pow(number1, number2);
	raised2 = pow(number2, number1);
	
	printf("%d elevado a %d: %d\n", number1, number2, raised1);
	printf("%d elevado a %d: %d", number2, number1, raised2);
	return(0);
}
