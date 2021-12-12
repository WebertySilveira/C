/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float deposit, tax, yield, finalValue;
	
	printf("Digite o valor do depósito: R$");
	scanf("%f", &deposit);
	printf("Digite a taxa de juros: ");
	scanf("%f", &tax);
	
	yield = (deposit * tax)/100;
	finalValue = deposit + yield;
	
	printf("Valor do rendimento: R$%.2f\n", yield);
	printf("Valor final: R$%.2f", finalValue);
	
	return(0);
}
