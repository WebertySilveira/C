/*
Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo, calcule e
mostre o sal�rio a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do sal�rio m�nimo.
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do sal�rio bruto.
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float workedHours, basicSalary, valueWorkedHours, salary, tax, netSalary;
	
	printf("Digite quantidade de horas trabalhadas: ");
	scanf("%f", &workedHours);
	printf("Digite o valor do sal�rio m�nimo: R$");
	scanf("%f", &basicSalary);
	
	valueWorkedHours = basicSalary/2;
	salary = workedHours * valueWorkedHours;
	tax = (salary*3)/100;
	netSalary = salary - tax;
	
	printf("Sal�rio a receber: R$%.2f", netSalary);
	
	return(0);
}
