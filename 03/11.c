/* 
Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
a) o n�mero digitado ao quadrado;
b) o n�mero digitado ao cubo;
c) a raiz quadrada do n�mero digitado;
d) a raiz c�bica do n�mero digitado
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int number;
	float square, cube, squareRoot, cubeRoot; 
	
	printf("Digite um n�mero positivo e maior que zero: ");
	scanf("%d", &number);
	
	if (number > 0)
	{
		square = pow(number, 2);
		cube = pow(number, 3);
		squareRoot = sqrt(number);
		cubeRoot = cbrt(number);
		
		printf("N�mero ao quadrado: %.2f\n", square);
		printf("N�mero ao cubo: %.2f\n", cube);
		printf("Raiz quadrada: %.2f\n", squareRoot);
		printf("Raiz c�bica: %.2f\n", cubeRoot);
	}
	else
	{
		printf("N�mero inv�lido!");
	}
	
	return (0);
}
