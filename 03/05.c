/* Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre
o valor do aumento e o novo sal�rio. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary;
	int percent;
	
	printf("Digite o seu sal�rio atual: R$");
	scanf("%f", &salary);
	printf("Digite o percentual de aumento: ");
	scanf("%d", &percent);
	
	salary += (salary * percent)/100;
	printf("Novo sal�rio: R$%.2f", salary);
	
	return(0);
}
