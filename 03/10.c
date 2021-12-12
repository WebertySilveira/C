/* Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = ! * R2
. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	float radius, area;
	
	printf("Digite o valor do raio do círculo: ");
	scanf("%f", &radius);
	
	area = 3.1415 * pow(radius, 2);
	printf("Área do círculo: %.2f", area);
	
	return(0);
}
