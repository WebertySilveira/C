/* Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre seu sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary;
	int tax = 10;
	int bonus = 50;	
	
	printf("Digite seu sal�rio base: R$");
	scanf("%f", &salary);
	
	salary -= (salary * tax)/100;
	salary += bonus;
	
	printf("Sal�rio Final: R$%.2f", salary);
	
	return(0);
}
