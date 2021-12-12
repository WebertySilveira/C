/* Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary;
	
	printf("Digite seu salário atual: R$");
	scanf("%f", &salary);
	
	salary += (salary * 25)/100;
	printf("Novo salário: R$%.2f", salary);
	
	return (0);
}
