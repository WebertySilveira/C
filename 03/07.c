/* Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary;
	int tax = 10;
	int bonus = 50;	
	
	printf("Digite seu salário base: R$");
	scanf("%f", &salary);
	
	salary -= (salary * tax)/100;
	salary += bonus;
	
	printf("Salário Final: R$%.2f", salary);
	
	return(0);
}
