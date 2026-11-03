// São 4 exercícios de programas com um menu principal que permite escolher qual dos 4 programas executar.

#include <stdio.h>
int main() {

    int opcao;

    do{
        //MENU PRINCIPAL - exercício 1
        printf("\n====================================\n");
        printf("    UC00606 - Programas\n");
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
        
            //variáveis
            int pin; // número inserido pelo usuário
            int pincorreto = 1234;
            int numtentativas = 0;
            int acesso = 0; // 0 = acesso negado, 1 = acesso permitido

            while (numtentativas < 3 && acesso == 0) { 
                printf("Insira seu PIN: ");
                scanf("%d", &pin);

                if (pin == pincorreto) {
                    acesso = 1;
                    printf("PIN correto! Acesso permitido.\n");
                } else {
                    numtentativas++; // Incrementa o número de tentativas
                    printf("PIN incorreto! Acesso negado. \nTentativas restantes: %d\n", 3 - numtentativas);
                }

            }
        
        } else if (opcao == 2) { // CÁLCULO DE MÉDIAS E CLASSIFICAÇÕES - exercício 3

            //variáveis
            int numalunos;
            int contadoralunos = 1;
            int alunosaprovados = 0;
            int alunosreprovados = 0;

            float classificacao;
            float soma = 0;
            float media;

            do { // Solicita ao usuário o número de alunos
                printf("Quantidade de alunos: ");
                scanf("%d", &numalunos);
                if (numalunos <= 0) {
                    printf("Número de alunos inválido! Retorne um valor acima de 0.\n");
                }
            } while (numalunos <= 0);

            


        } else if (opcao == 3) { // JOGO DE ADIVINHAÇÃO - exercício 4

        } else if (opcao == 4) { // CONVERSOR DE NÚMEROS DECIMAIS - ROMANOS - exercício 5

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
