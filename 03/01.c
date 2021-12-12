/* Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números. */

#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, sum;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	printf("Digite o terceiro valor: ");
	scanf("%d", &n3);
	printf("Digite o quarto valor: ");
	scanf("%d", &n4);
	
	sum = n1 + n2 + n3 + n4;
	printf("Soma dos valores: %d", sum);
	
	return(0);
}
