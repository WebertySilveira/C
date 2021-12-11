/* Porcentagem sobre um valor */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float salary;
	
	printf("Digite o seu salário atual: ");
	scanf("%f", &salary);
	
	if(salary <= 500)
	{
		salary += (salary * 20)/100;
	}
	else
	{
		salary += (salary * 10)/100;
	}
	
	printf("Com acréscimo da porcentagem: %.2f", salary);
}
