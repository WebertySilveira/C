/*
Um trabalhador recebeu seu sal�rio e o depositou em sua conta banc�ria. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. Sabe-se que cada opera��o banc�ria de retirada paga
CPMF de 0,38% e o saldo inicial da conta est� zerado.
*/

#include <stdio.h>

int main()
{
	float salary, withdraw1, withdraw2, cpmf1, cpmf2;
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &salary);
	printf("Digite seu primeiro saque: ");
	scanf("%f", &withdraw1); 
	printf("Digite seu segundo saque: ");
	scanf("%f", &withdraw2);
	
	cpmf1 = withdraw1 * 0.38/100;
	cpmf2 = withdraw2 * 0.38/100;
	
	salary = salary - withdraw1 - withdraw2 - cpmf1 - cpmf2;
	printf("Saldo final: R$%f", salary);
	
	return(0);
}
