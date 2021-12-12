/* Faça um programa que receba três notas, calcule e mostre a média aritmética. */

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"");
	float n1, n2, n3, average;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	printf("Digite o terceiro valor: ");
	scanf("%f", &n3);
	
	average = (n1 + n2 + n3)/3;
	printf("Média final: %.2f", average);
	
	return(0);
}
