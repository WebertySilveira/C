/* Fa�a um programa que calcule e mostre a �rea de um c�rculo. Sabe-se que: �rea = ! * R2
. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	float radius, area;
	
	printf("Digite o valor do raio do c�rculo: ");
	scanf("%f", &radius);
	
	area = 3.1415 * pow(radius, 2);
	printf("�rea do c�rculo: %.2f", area);
	
	return(0);
}
