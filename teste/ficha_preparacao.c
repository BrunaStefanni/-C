// Ficha de Preparação de Teste - Linguagem #C

// Exercício 1 — Menu principal

#include<stdio.h>
int main(void) {
    int op;

    do {
        printf("\n========================================\n");
        printf("       TESTE MODELO - UC 00606\n");
        printf("========================================\n");
        printf("1 - Calculadora de Compras\n");
        printf("2 - Controlo de Acesso\n");
        printf("3 - Sequencias Numéricas\n");
        printf("4 - Análise de Temperaturas\n");
        printf("5 - Pesquisa de Produtos\n");
        printf("6 - Desenho de Uma Ampulheta\n");
        printf("7 - Classificação de Jogadores\n");
        printf("0 - Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {
        
            } else if (op == 2) {
        
            } else if (op == 3) {
        
            } else if (op == 4) {
        
            } else if (op == 5) {
            
            } else if (op == 6) {

            } else if (op == 7) {

            } else if (op != 0) {
                printf("Opcao invalida!\n");
            }

        } while (op != 0);
        
        printf("\nPrograma terminado. Obrigado!\n");

        return 0;
}