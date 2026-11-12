//Ciclos, For e Arrays - Ficha de Trabalho 4

#include <stdio.h>
int main() {

    int opcao;

    do{

        printf("\n========================================\n");
        printf("       CICLOS, FOR E ARRAYS\n");
        printf("========================================\n");
        printf("1 - Sequencias numericas\n");
        printf("2 - Analise de numeros\n");
        printf("3 - Pesquisa num array\n");
        printf("4 - Triangulo de asteriscos\n");
        printf("5 - Arvore de natal\n");
        printf("6 - Ordenacao de numeros\n");
        printf("0 - Sair\n");
        printf("========================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

         // EXERCICIO 1 - SEQUENCIAS NUMERICAS
        if (opcao == 1) {

            int n, i, soma = 0;

            printf("\nIntroduza um numero positivo: ");
            scanf("%d", &n);

            if (n <= 0) {
                printf("Numero invalido!\n");
            } else {

                // Numeros por ordem crescente
                printf("Crescente: ");

                for (i = 1; i <= n; i++) {
                    printf("%d ", i);
                }

                // Numeros por ordem decrescente
                printf("\nDecrescente: ");

                for (i = n; i >= 1; i--) {
                    printf("%d ", i);
                }

                // Mostrar apenas os numeros pares
                printf("\nPares: ");

                for (i = 1; i <= n; i++) {
                    if (i % 2 == 0) {
                        printf("%d ", i);
                    }
                }

                // Calcular a soma dos numeros
                for (i = 1; i <= n; i++) {
                    soma = soma + i;
                }

                printf("\nSoma: %d\n", soma);
            }
        }

        // EXERCICIO 2 - ANALISE DE NUMEROS
        else if (opcao == 2) {

            int numeros[10];
            int i, soma = 0;
            int maior, menor;
            int pares = 0, impares = 0;
            float media;

            // Pedir os 10 numeros ao utilizador
            for (i = 0; i < 10; i++) {
                printf("Introduza o numero %d: ", i + 1);
                scanf("%d", &numeros[i]);
            }

            // Inicializar maior e menor com o primeiro numero
            maior = numeros[0];
            menor = numeros[0];

            // Analisar todos os numeros do array
            for (i = 0; i < 10; i++) {

                soma = soma + numeros[i];

                // Verificar o maior numero
                if (numeros[i] > maior) {
                    maior = numeros[i];
                }

                // Verificar o menor numero
                if (numeros[i] < menor) {
                    menor = numeros[i];
                }

                // Contar pares e impares
                if (numeros[i] % 2 == 0) {
                    pares++;
                } else {
                    impares++;
                }
            }

            // Mostrar os numeros pela ordem de introducao
            printf("\nOrdem de introducao: ");

            for (i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            // Mostrar os numeros pela ordem inversa
            printf("\nOrdem inversa: ");

            for (i = 9; i >= 0; i--) {
                printf("%d ", numeros[i]);
            }

            // Calcular a media
            media = (float)soma / 10;

            printf("\nSoma: %d", soma);
            printf("\nMedia: %.2f", media);
            printf("\nMaior numero: %d", maior);
            printf("\nMenor numero: %d", menor);
            printf("\nQuantidade de pares: %d", pares);
            printf("\nQuantidade de impares: %d\n", impares);
        }

        // EXERCICIO 3 - PESQUISA NUM ARRAY
        else if (opcao == 3) {

            int numeros[8];
            int i, pesquisa;
            int ocorrencias = 0;

            // Guardar 8 numeros no array
            for (i = 0; i < 8; i++) {
                printf("Introduza o numero %d: ", i + 1);
                scanf("%d", &numeros[i]);
            }

            // Pedir o numero que queremos procurar
            printf("\nNumero a pesquisar: ");
            scanf("%d", &pesquisa);

            // Percorrer o array a procura do numero
            for (i = 0; i < 8; i++) {

                if (numeros[i] == pesquisa) {

                    // i + 1 porque as posicoes comecam em 1
                    printf("Encontrado na posicao %d\n", i + 1);

                    ocorrencias++;
                }
            }

            // Verificar se o numero foi encontrado
            if (ocorrencias == 0) {
                printf("Numero nao encontrado!\n");
            } else {
                printf("Total de ocorrencias: %d\n", ocorrencias);
            }
        }

        // EXERCICIO 4 - TRIANGULOS DE ASTERISCOS
        else if (opcao == 4) {

            int altura, i, j;

            printf("Introduza a altura do triangulo (1 a 20): ");
            scanf("%d", &altura);

            if (altura < 1 || altura > 20) {
                printf("Altura invalida!\n");
            } else {

                // Padrao A - Triangulo crescente
                printf("\nTriangulo crescente:\n");

                for (i = 1; i <= altura; i++) {

                    // Imprimir os asteriscos de cada linha
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }

                    printf("\n");
                }

                // Padrao B - Triangulo invertido
                printf("\nTriangulo invertido:\n");

                for (i = altura; i >= 1; i--) {

                    // Imprimir os asteriscos de cada linha
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }

                    printf("\n");
                }
            }
        }

        // EXERCICIO 5 - ARVORE DE NATAL
        else if (opcao == 5) {

            int altura, i, j;

            printf("Introduza a altura da arvore (2 a 20): ");
            scanf("%d", &altura);

            if (altura < 2 || altura > 20) {
                printf("Altura invalida!\n");
            } else {

                // Desenhar a copa da arvore
                for (i = 1; i <= altura; i++) {

                    // Imprimir os espacos antes dos asteriscos
                    for (j = 1; j <= altura - i; j++) {
                        printf(" ");
                    }

                    // Imprimir os asteriscos da copa
                    for (j = 1; j <= (2 * i - 1); j++) {
                        printf("*");
                    }

                    printf("\n");
                }

                // Desenhar o tronco com duas linhas
                for (i = 1; i <= 2; i++) {

                    // Centrar o tronco
                    for (j = 1; j < altura; j++) {
                        printf(" ");
                    }

                    printf("*\n");
                }
            }
        }

        // EXERCICIO 6 - ORDENACAO (BUBBLE SORT)
        else if (opcao == 6) {

            int numeros[10];
            int i, j, aux;

            // Introduzir os 10 numeros
            for (i = 0; i < 10; i++) {
                printf("Introduza o numero %d: ", i + 1);
                scanf("%d", &numeros[i]);
            }

            // Mostrar os numeros originais
            printf("\nNumeros originais: ");

            for (i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            // Algoritmo Bubble Sort
            // Comparar elementos que estao lado a lado
            for (i = 0; i < 9; i++) {

                for (j = 0; j < 9 - i; j++) {

                    // Se o numero da esquerda for maior,
                    // trocar os dois numeros
                    if (numeros[j] > numeros[j + 1]) {

                        aux = numeros[j];
                        numeros[j] = numeros[j + 1];
                        numeros[j + 1] = aux;
                    }
                }
            }

            // Mostrar por ordem crescente
            printf("\n\nOrdem crescente: ");

            for (i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            // Mostrar por ordem decrescente
            printf("\nOrdem decrescente: ");

            for (i = 9; i >= 0; i--) {
                printf("%d ", numeros[i]);
            }

            printf("\n");
        }

        // OPCAO INVALIDA
        else if (opcao != 0) {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("\nPrograma terminado!\n");

    return 0;
}