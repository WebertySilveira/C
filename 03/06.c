/* Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tamb�m sobre o sal�rio base */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float salary, newSalary;
	int bonus = 5;
	int tax = 7;
	
	printf("Digite seu sal�rio base: R$");
	scanf("%f", &salary);
	
	newSalary = salary;
	newSalary -= (salary * tax)/100;
	newSalary += (salary * bonus)/100;
	
	printf("Sal�rio final: R$%.2f", newSalary);
	
	return(0);
}
