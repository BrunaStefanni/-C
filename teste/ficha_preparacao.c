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
            
            // Variáveis para armazenar o PIN introduzido e o número de tentativas
            int pin, tentativas = 0;

            printf("\n=== CONTROLO DE ACESSO ===\n");

            while (tentativas < 3) { // Permite até 3 tentativas para introduzir o PIN 

                printf("Introduza o PIN: ");
                scanf("%d", &pin);

                tentativas++; // Incrementa o número de tentativas

                if (pin == 2468) { // Verifica se o PIN está correto
                    printf("Acesso autorizado!\n");
                    break; // Sai do loop se o PIN estiver correto
                }
                else { // Caso o PIN esteja incorreto..
                    printf("PIN incorreto.\n");

                    if (tentativas < 3) { // Informa o utilizador do número de tentativas restantes
                        printf("Restam %d tentativas.\n", 3 - tentativas);
                    }
                }
            }

            if (pin != 2468) { // Se o PIN estiver incorreto após 3 tentativas, bloqueia o acesso
                printf("Acesso bloqueado!\n");
            }

        } else if (op == 3) { // Exercício 4 - Sequências Numéricas

            int numero;
            int somaPares = 0;

            printf("\n=== SEQUENCIAS NUMERICAS ===\n");

            do {
                printf("Introduza um numero (1 a 50): ");
                scanf("%d", &numero);
            } while (numero < 1 || numero > 50);

            printf("\nOrdem crescente:\n");

            for (int i = 1; i <= numero; i++) {
                printf("%d ", i);
            }

            printf("\n\nOrdem decrescente:\n");

            for (int i = numero; i >= 1; i--) {
                printf("%d ", i);
            }

            printf("\n\nMultiplos de 3:\n");

            for (int i = 1; i <= numero; i++) {
                if (i % 3 == 0) {
                    printf("%d ", i);
                }
            }

            for (int i = 1; i <= numero; i++) {
                if (i % 2 == 0) {
                    somaPares += i;
                }
            }

            printf("\n\nSoma dos numeros pares: %d\n", somaPares);
            
        
        } else if (op == 4) { // Exercício 5 - Análise de Temperaturas

            float temperaturas[7];
            float soma = 0;
            float media, maxima, minima;
            int diasAcima25 = 0;
            int diaMaxima = 1;

            printf("\n=== ANALISE DE TEMPERATURAS ===\n");

            for (int i = 0; i < 7; i++) {
                printf("Dia %d: ", i + 1);
                scanf("%f", &temperaturas[i]);
            }

            maxima = temperaturas[0];
            minima = temperaturas[0];

            printf("\nTemperaturas:\n");

            for (int i = 0; i < 7; i++) {
                printf("%.2f ", temperaturas[i]);
            }

            for (int i = 0; i < 7; i++) {

                soma += temperaturas[i];

                if (temperaturas[i] > maxima) {
                    maxima = temperaturas[i];
                    diaMaxima = i + 1;
                }

                if (temperaturas[i] < minima) {
                    minima = temperaturas[i];
                }

                if (temperaturas[i] > 25) {
                    diasAcima25++;
                }
            }

            media = soma / 7;

            printf("\n\nMedia semanal: %.2f\n", media);
            printf("Temperatura maxima: %.2f\n", maxima);
            printf("Temperatura minima: %.2f\n", minima);
            printf("Dias acima de 25 graus: %d\n", diasAcima25);
            printf("Primeiro dia da temperatura maxima: %d\n", diaMaxima);
    
        
        } else if (op == 5) { // Exercício 6 - Pesquisa de Produtos

            int stock[8];
            int total = 0;
            int produtosBaixoStock = 0;
            int produtoConsultar;

            printf("\n=== PESQUISA DE PRODUTOS ===\n");

            for (int i = 0; i < 8; i++) {

                do {
                    printf("Produto %d: ", i + 1);
                    scanf("%d", &stock[i]);
                } while (stock[i] < 0);
            }

            printf("\nQuantidades:\n");

            for (int i = 0; i < 8; i++) {
                printf("%d ", stock[i]);
            }

            for (int i = 0; i < 8; i++) {

                total += stock[i];

                if (stock[i] < 5) {
                    produtosBaixoStock++;
                }
            }

            printf("\n\nTotal de unidades: %d\n", total);
            printf("Produtos com menos de 5 unidades: %d\n", produtosBaixoStock);

            do {
                printf("\nNumero do produto a consultar (1 a 8): ");
                scanf("%d", &produtoConsultar);
            } while (produtoConsultar < 1 || produtoConsultar > 8);

            printf("Stock do produto %d: %d unidades\n", produtoConsultar, stock[produtoConsultar - 1]);
            
        } else if (op == 6) { // Exercício 7 - Desenho de Uma Ampulheta
            
            int altura;

            printf("\n=== DESENHO DE UMA AMPULHETA ===\n");

            do {
                printf("Introduza a altura (2 a 10): ");
                scanf("%d", &altura);
            } while (altura < 2 || altura > 10);

            printf("\n");

            for (int i = 0; i < altura; i++) {

                for (int j = 0; j < i; j++) {
                    printf(" ");
                }

                for (int j = 0; j < 2 * (altura - i) - 1; j++) {
                    printf("*");
                }

                printf("\n");
            }

            for (int i = altura - 2; i >= 0; i--) {

                for (int j = 0; j < i; j++) {
                    printf(" ");
                }

                for (int j = 0; j < 2 * (altura - i) - 1; j++) {
                    printf("*");
                }

                printf("\n");
            }

        } else if (op == 7) { // Exercício 8 - Classificação de Jogadores

            int pontuacoes[6];
            int auxiliar;

            printf("\n=== CLASSIFICACAO DE JOGADORES ===\n");

            for (int i = 0; i < 6; i++) {

                do {
                    printf("Pontuacao do jogador %d: ", i + 1);
                    scanf("%d", &pontuacoes[i]);
                } while (pontuacoes[i] < 0);
            }

            printf("\nPontuacoes originais:\n");

            for (int i = 0; i < 6; i++) {
                printf("%d ", pontuacoes[i]);
            }

            for (int i = 0; i < 5; i++) {

                for (int j = 0; j < 5 - i; j++) {

                    if (pontuacoes[j] < pontuacoes[j + 1]) {

                        auxiliar = pontuacoes[j];
                        pontuacoes[j] = pontuacoes[j + 1];
                        pontuacoes[j + 1] = auxiliar;
                    }
                }
            }

            printf("\n\n=== CLASSIFICACAO FINAL ===\n");

            for (int i = 0; i < 6; i++) {
                printf("%d. lugar: %d pontos\n",
                       i + 1, pontuacoes[i]);
            }

            printf("\nPontuacao vencedora: %d\n", pontuacoes[0]);

            printf("Diferenca entre maior e menor: %d\n",pontuacoes[0] - pontuacoes[5]);
        }

        else if (opcao == 0) {
            printf("\nPrograma terminado.\n");
        }

        else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

        } else if (op != 0) {
            printf("Opcao invalida!\n");
        }

    } while (op != 0);
        
    printf("\nPrograma terminado. Obrigado!\n");

    return 0;
}