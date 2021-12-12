/*
Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.
*/

#include <stdio.h>

int main()
{
	float kilos, portion1, portion2, day5;
	
	printf("Digite quantos quilos de ração: ");
	scanf("%f", &kilos);
	
	printf("Porção para o primeiro gato: ");
	scanf("%f", &portion1);
	printf("Porção para o segundo gato: ");
	scanf("%f", &portion2);
	
	day5 = kilos - (((portion1/1000) + (portion2/1000))*5);
	printf("Após 5 dias sobraram %f KG", day5);
	
	return(0);
}
