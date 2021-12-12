/*
Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que
o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir para
atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas devem
estar em metros.
*/

#include <stdio.h>

int main()
{
	float step, height, numberSteps;
	
	printf("Digite a altura de cada degrau: ");
	scanf("%f", &step);
	printf("Digite a altura que deseja alcançar: ");
	scanf("%f", &height);
	
	numberSteps = height/step;
	printf("Deverá subir %.2f degraus.", numberSteps);
	
	return(0);
}
