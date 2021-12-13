/*
O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do
distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o pre�o final do ve�culo. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float price, percent, tax;
	
	printf("Digite o pre�o de f�brica: R$");
	scanf("%f", &price);
	printf("Digite o percentual de lucro: ");
	scanf("%f", &percent);
	printf("Digite o percentual de impostos: ");
	scanf("%f", &tax);
	
	percent = (price * percent)/100;
	tax = (price * tax)/100;
	
	printf("Lucro do Distribuidor: R$%.2f\n", percent);
	printf("Impostos: R$%.2f\n", tax);

	printf("Pre�o Final: R$%.2f\n", (price + percent + tax));
	return(0);
}
