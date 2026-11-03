// São 4 exercícios de programas com um menu principal que permite escolher qual dos 4 programas executar.

include <stdio.h>
int main() {

    int opcao;

    do{
        //MENU PRINCIPAL - exercício 1
        printf("\n====================================\n");
        printf("       Programas\n");
        printf("====================================\n");
        printf("1 - Validação de PIN\n");
        printf("2 - Cálculo de Médias e Classificações\n");
        printf("3 - Jogo de Adivinhação\n");
        printf("4 - Conversor de Números Decimais - Romanos\n");
        printf("0 - Sair\n");
        printf("====================================\n");
        
        printf("Escolha um programa: ");
        scanf("%d", &opcao);

        if (opcao == 1) { // VALIDAÇÃO DE PIN - exercício 2
        
        
        } else if (opcao == 2) {

        } else if (opcao == 3) {

        } else if (opcao == 4) {

        } else if (opcao == 0) { // SAIR

            printf("Você acabou de sair, até breve! Att, Bruna Leite\n");

        } else { // OPÇÃO INVÁLIDA

            printf("Opcao invalida! Tente novamente.\n");

        }
        
        

    } while (opcao != 0);

    printf("Fim do programa.\n");
    printf("Att,\n");
    printf("Bruna Leite\n");

    return 0;

}
