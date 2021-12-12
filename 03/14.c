/* 
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050. 
*/

#include <stdio.h>

int main()
{
	int birth, age, year, futureAge;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &birth);
	printf("Digite o ano atual: ");
	scanf("%d", &year);
	
	age = year - birth;
	futureAge = 2050 - birth;
	
	printf("Idade atual: %d\n", age);
	printf("Idade em 2050: %d", futureAge);
	
	return(0);
}
