/* Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se
que este sofreu um aumento de 25%. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary;
	
	printf("Digite seu sal�rio atual: R$");
	scanf("%f", &salary);
	
	salary += (salary * 25)/100;
	printf("Novo sal�rio: R$%.2f", salary);
	
	return (0);
}
