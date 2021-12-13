/*
Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura e a altura que
o usu�rio deseja alcan�ar subindo a escada, calcule e mostre quantos degraus ele dever� subir para
atingir seu objetivo, sem se preocupar com a altura do usu�rio. Todas as medidas fornecidas devem
estar em metros.
*/

#include <stdio.h>

int main()
{
	float step, height, numberSteps;
	
	printf("Digite a altura de cada degrau: ");
	scanf("%f", &step);
	printf("Digite a altura que deseja alcan�ar: ");
	scanf("%f", &height);
	
	numberSteps = height/step;
	printf("Dever� subir %.2f degraus.", numberSteps);
	
	return(0);
}
