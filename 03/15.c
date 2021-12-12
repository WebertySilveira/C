/*
O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float price, percent, tax;
	
	printf("Digite o preço de fábrica: R$");
	scanf("%f", &price);
	printf("Digite o percentual de lucro: ");
	scanf("%f", &percent);
	printf("Digite o percentual de impostos: ");
	scanf("%f", &tax);
	
	percent = (price * percent)/100;
	tax = (price * tax)/100;
	
	printf("Lucro do Distribuidor: R$%.2f\n", percent);
	printf("Impostos: R$%.2f\n", tax);

	printf("Preço Final: R$%.2f\n", (price + percent + tax));
	return(0);
}
