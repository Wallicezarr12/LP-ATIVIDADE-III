#include <stdio.h>


int main() {

int totalContatos = 0;
int opcao;
char nomes[200][50];
char telefones[200][15];
int i;
    
printf("Bem-vindo à agenda telefônica!\n");

  do {
    printf("\nMenu:\n");
    printf("1 - Adicionar um número\n");
    printf("2 - Mostrar números cadastrados e encerrar\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:

    if (totalContatos < 100) {
    printf("Digite o nome: ");
    scanf("%s", nomes[totalContatos]);

printf("Digite o número: ");
scanf("%s", telefones[totalContatos]);

totalContatos++;

printf("Contato adicionado com sucesso!\n");
} else {

printf("A agenda está cheia.\n");
}
    break;

      case 2:
            if (totalContatos > 0) {
printf("\nnumeros cadastrados:\n");
for (i = 0; i < totalContatos; ++i) {

printf("Nome: %s, Telefone: %s\n", nomes[i], telefones[i]);
}
} else {

printf("Nenhum número cadastrado ainda.\n");
}
       break;

            default:
        printf("Opção inválida. Tente novamente.\n");
}
    } while (opcao != 2);

    return 0;
}