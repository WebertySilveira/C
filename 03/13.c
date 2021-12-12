/*
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float feet, inches, yards, miles;
	
	printf("Digite uma medida em pés: ");
	scanf("%f", &feet);
	
	inches = feet*12;
	yards = feet/3;
	miles = yards/1760;
	
	printf("Polegadas: %.2f\n", inches);
	printf("Jardas: %.2f\n", yards);
	printf("Milhas: %f\n", miles);
	
	return(0);
}
