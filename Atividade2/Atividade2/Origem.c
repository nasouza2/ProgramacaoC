#include <stdio.h>

main() {
	system("clear");

	int opcao;
	do{
		printf("Menu geral \n\n");
		printf("1 - Cadastros \n\n");
		printf("2 - Pedidos \n\n");
		printf("3 - Relatorio \n\n");
		printf("4 - Sair \n\n");

		printf("Escolha o menu \n\n");
		scanf_s("%d", &opcao);

		switch (opcao){
			case 1: printf("\n O usuario escolheu a opcao 1. \n\n");
			break;
			case 2: printf("\n O usuario escolheu a opcao 2. \n\n");
			break;
			case 3: printf("\n O usuario escolheu a opcao 3. \n\n"); 
			break;
			case 4: system("clear");
				return 0;
		default: printf("\n\n Você digitou uma opcao invalida! \n\n");
		break;
		}

	} while ( opcao != 4);
	
}