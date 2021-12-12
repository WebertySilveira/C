/* 
Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int number;
	float square, cube, squareRoot, cubeRoot; 
	
	printf("Digite um número positivo e maior que zero: ");
	scanf("%d", &number);
	
	if (number > 0)
	{
		square = pow(number, 2);
		cube = pow(number, 3);
		squareRoot = sqrt(number);
		cubeRoot = cbrt(number);
		
		printf("Número ao quadrado: %.2f\n", square);
		printf("Número ao cubo: %.2f\n", cube);
		printf("Raiz quadrada: %.2f\n", squareRoot);
		printf("Raiz cúbica: %.2f\n", cubeRoot);
	}
	else
	{
		printf("Número inválido!");
	}
	
	return (0);
}
