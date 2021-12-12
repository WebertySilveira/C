/* Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salário. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary;
	int percent;
	
	printf("Digite o seu salário atual: R$");
	scanf("%f", &salary);
	printf("Digite o percentual de aumento: ");
	scanf("%d", &percent);
	
	salary += (salary * percent)/100;
	printf("Novo salário: R$%.2f", salary);
	
	return(0);
}
