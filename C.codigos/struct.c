/******************************************************************************

aula com struct e função

*******************************************************************************/
#include <stdio.h>
#include <stdib.h>

struct carteira {
	char marca[15];
	float dinheiro;
	int cpf, habilitacao, cartao;
};
struct carteira cart;

void cadastra() {
	printf("Entre com a marca da carteira: ");
	getchar();
	fgets(cart.marca, 15, stdin);
	printf("\nEntre com a quantidade de dinheiro: ");
	scanf("%f", &cart.dinheiro);
	printf("\nEntre com o cpf: ");
	scanf("%i", &cart.cpf);
	printf("\nEntre com a habilitaC'C#o: ");
	scanf("%i", &cart.habilitacao);
	printf("\nEntre com o cartC#o: ");
	scanf("%i", &cart.cartao);
}

void exibe() {
	printf("\nDados da carteira: ");
	printf("\nMarca: %s", cart.marca);
	printf("\nDinheiro: %f", cart.dinheiro);
	printf("\nCPF: %i", cart.cpf);
	printf("\nHabilitaC'C#o: %i", cart.habilitacao);
	printf("\nCartao: %i", cart.cartao);
}

int main()
{
	int op;
	while(op != 3) {
		printf("Cadastro de dados de uma carteira");
		printf("\nDigite 1 para cadastrar");
		printf("\nDigite 2 para exibir");
		scanf("%i", &op);
		switch(op) {
		case 1:
			cadastra() break;
		case 2:
			exibe() break;
		case 3:
			exit(1);
		default:
			printf("\nOpcao invalida")
		}
	}