/* Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica. */

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
	printf("M�dia final: %.2f", average);
	
	return(0);
}
