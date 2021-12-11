/* Multiplicação de dois números*/

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
	
	result = n1 * n2;
	printf("Multiplicação: %.2f", result);
	
	return (0);   
}
