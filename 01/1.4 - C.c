/* Média entre dois valores */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float n1, n2, average;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	
	average = (n1+n2)/2;
	
	if(average >= 7)
	{
		printf("Média final: %.2f \nAprovado!", average);
	}
	else
	{
		printf("Média final: %.2f \nReprovado!", average);
	}
	
	return (0);
}
