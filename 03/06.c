/* Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary, newSalary;
	int bonus = 5;
	int tax = 7;
	
	printf("Digite seu salário base: R$");
	scanf("%f", &salary);
	
	newSalary = salary;
	newSalary -= (salary * tax)/100;
	newSalary += (salary * bonus)/100;
	
	printf("Salário final: R$%.2f", newSalary);
	
	return(0);
}
