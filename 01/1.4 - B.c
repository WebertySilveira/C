/* Divis�o de dois valores*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float n1, n2, result;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	
	if(n2 != 0)
	{
		result = n1/n2;
		printf("Divis�o: %.2f", result);
	}
	else
	{
		printf("Imposs�vel dividir por zero!");
	}
	
	return (0);   
}
