#include <stdio.h>

main() {
	system("clear");

	int opcao;
	do{
		printf("Menu geral \n\n");
		printf("1 - Cadastros \n\n");
		printf("2 - Pedidos \n\n");
		printf("3 - Relatorios \n\n");
		printf("4 - Sair \n\n");

		printf("Escolha o menu \n\n");
		scanf_s("%d", &opcao);

		switch (opcao){
			case 1: printf("\n Você escolheu a opcao 1 - Cadastros. \n\n");
				int submenu, idade, codigo, estoque;
					char nome, endereco, nproduto;					
					printf("\Escolha o que deseja cadastrar:  \n\n");
					printf("1 - Clientes \n\n");
					printf("2 - Produtos \n\n");
					printf("3 - Voltar para o menu anterior \n\n"); // não sei como fazer para voltar pro menu anterior
					scanf_s("%d", &submenu);
					switch (submenu)
					{
					case 1: 						
						// Quando para cadastrar vários campos, o foco do cursor fica sempre no último campo.
						// Como arrumo isso?
						printf("Informe os dados do cliente:  \n\n");						
						printf("Nome completo:  \n\n");
						scanf_s("%c", &nome);
						printf("Endereco  \n\n");
						scanf_s("%c", &endereco);
						printf("Idade:  \n\n");
						scanf_s("%d", &idade);					
						break;
					case 2:
						printf("Informe os dados do produto:  \n\n");
						printf("Nome completo:  \n\n");
						scanf_s("%c", &nproduto);
						printf("Codigo  \n\n");
						scanf_s("%d", &codigo);
						printf("Estoque:  \n\n");
						scanf_s("%d", &estoque);
						break;
					}
			break;
			case 2: printf("\n Você escolheu a opcao 2 - Pedidos. \n\n");
					printf("\Escolha o tipo de pedido: \n\n");
					printf("1 - Pedido de compra \n\n");
					printf("2 - Pedido de venda \n\n");
					printf("3 - Voltar para o menu anterior \n\n");
			break;
			case 3: printf("\n Você escolheu a opcao 3 - Relatorios. \n\n"); 
					printf("\Escolha qual relatorio quer gerar \n\n");
					printf("1 - Relatorio de Clientes \n\n");
					printf("2 - Relatorio de Produtos \n\n");
					printf("3 - Relatorio de Pedido de compra \n\n");
					printf("4 - Relatorio de Pedido de venda \n\n");
					printf("5 - Voltar para o menu anterior \n\n");
			break;
			case 4: system("clear");
				return 0;
		default: printf("\n\n Você digitou uma opcao invalida! \n\n");
		break;
		}

	} while ( opcao != 4);
	
}