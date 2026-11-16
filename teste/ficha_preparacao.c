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

        if (op == 1) { // Exercício 2 — Calculadora de Compras
            
            // Variáveis para armazenar o preço unitário, quantidade, subtotal, desconto e total
            float preco, subtotal, desconto, total;
            int quantidade;

            printf("\n=== CALCULADORA DE COMPRAS ===\n");

            do { // Solicita o preço unitário até que seja um valor positivo
                printf("Preco unitario: ");
                scanf("%f", &preco);
            } while (preco <= 0);

            do { // Solicita a quantidade até que seja um valor positivo
                printf("Quantidade: ");
                scanf("%d", &quantidade);
            } while (quantidade <= 0);

            subtotal = preco * quantidade; // Calcula o subtotal

            if (subtotal < 50) { // Aplica o desconto inferior a 50 euros
                desconto = 0;
            }
            else if (subtotal <= 100) { // Aplica o desconto entre 50 e 100 euros
                desconto = 0.05;
            }
            else { // Aplica o desconto superior a 100 euros
                desconto = 0.10;
            }

            total = subtotal - (subtotal * desconto); // Calcula o total a pagar após o desconto

            printf("\nSubtotal: %.2f EUR\n", subtotal);
            printf("Desconto aplicado: %.0f%%\n", desconto * 100);
            printf("Valor do desconto: %.2f EUR\n", subtotal * desconto);
            printf("Total a pagar: %.2f EUR\n", total);

        
        } else if (op == 2) { // Exercício 3 - Controlo de Acesso
        
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