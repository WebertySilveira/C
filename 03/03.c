/* Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float n1, n2, n3, p1, p2, p3, average;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("Digite o peso do primeiro valor: ");
	scanf("%f", &p1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	printf("Digite o peso do segundo valor: ");
	scanf("%f", &p2);
	
	printf("Digite o terceiro valor: ");
	scanf("%f", &n3);
	printf("Digite o peso do terceiro valor: ");
	scanf("%f", &p3);
	
	average = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
	printf("Média final: %.2f", average);
	
	return(0);
}
