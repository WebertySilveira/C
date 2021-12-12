/* Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float base, height, area;
	
	printf("Digite a Base do triângulo: ");
	scanf("%f", &base);
	printf("Digite a Altura do triângulo: ");
	scanf("%f", &height);

	area = (base * height)/2;
	printf("Área: %.2f", area);
	
	return(0);	
}
