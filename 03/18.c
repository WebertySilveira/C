/*
Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada gato � sempre a
mesma. Fa�a um programa que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para
cada gato, calcule e mostre quanto restar� de ra��o no saco ap�s cinco dias.
*/

#include <stdio.h>

int main()
{
	float kilos, portion1, portion2, day5;
	
	printf("Digite quantos quilos de ra��o: ");
	scanf("%f", &kilos);
	
	printf("Por��o para o primeiro gato: ");
	scanf("%f", &portion1);
	printf("Por��o para o segundo gato: ");
	scanf("%f", &portion2);
	
	day5 = kilos - (((portion1/1000) + (portion2/1000))*5);
	printf("Ap�s 5 dias sobraram %f KG", day5);
	
	return(0);
}
