
#include <stdio.h>
#include <stdlib.h>

main()
{
	int idade, n1, n2, soma, sub, divisao, mult;
	char nome, email;
	float salario;

	printf("\n Informe a idade: ");
	scanf_s("%d", &idade);
	printf("\n Informe o nome: ");
	scanf_s("%c", &nome);
	printf("\n Informe o email: ");
	scanf_s("%c", &email);
	printf("\n Informe o salario: ");
	scanf_s("%f", &salario);
	printf("\n Informe um n�mero: ");
	scanf_s("%d", &n1);
	printf("\n Informe outro n�mero: ");
	scanf_s("%d", &n2);

	soma = n1+n2;
	sub = n1-n2;
	divisao = n1/n2;
	mult = n1*n2;

	printf("\n A idade digitada �: \t %d", idade);
	printf("\n Nome digitado: %c", nome);
	printf("\n Email digitado: %c", email);
	printf("\n Salario digitado: %f", salario);
	printf("\n Numeros digitados: %d", n1, n2);
	printf("\n A soma � = \t %d", soma);
	printf("\n A subtracao � = \t %d", sub);
	printf("\n A divisao � = \t %d", divisao);
	printf("\n A multiplicacao � = \t %d", mult);
	system("pause");

}