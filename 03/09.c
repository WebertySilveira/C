/* Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float base, height, area;
	
	printf("Digite a Base do tri�ngulo: ");
	scanf("%f", &base);
	printf("Digite a Altura do tri�ngulo: ");
	scanf("%f", &height);

	area = (base * height)/2;
	printf("�rea: %.2f", area);
	
	return(0);	
}
