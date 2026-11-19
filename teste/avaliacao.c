// Avaliação Final - Linguagem C

#include<stdio.h>
int main(void) {
    int op;

    do {
        // Exercício 1 - Menu principal
        printf("\n========================================\n");
        printf("       AVALIACAO FINAL - UC 00606\n");
        printf("========================================\n");
        printf("1 - Calculo de Salario\n");
        printf("2 - Controlo de Estacionamento\n");
        printf("3 - Analise de Numeros\n");
        printf("4 - Gestao de Consumos\n");
        printf("5 - Pesquisa de Encomendas\n");
        printf("6 - Desenho de Um Losango\n");
        printf("7 - Classificação de Atletas\n");
        printf("0 - Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {
            