/*
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float workedHours, basicSalary, valueWorkedHours, salary, tax, netSalary;
	
	printf("Digite quantidade de horas trabalhadas: ");
	scanf("%f", &workedHours);
	printf("Digite o valor do salário mínimo: R$");
	scanf("%f", &basicSalary);
	
	valueWorkedHours = basicSalary/2;
	salary = workedHours * valueWorkedHours;
	tax = (salary*3)/100;
	netSalary = salary - tax;
	
	printf("Salário a receber: R$%.2f", netSalary);
	
	return(0);
}
