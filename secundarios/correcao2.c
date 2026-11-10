#include<stdio.h>
int main(void) {
    int op;

    do {
        printf("\n========================================\n");
        printf("       FICHA PRATICA N. 3\n");
        printf("========================================\n");
        printf("1 - Tabuada personalizada\n");
        printf("2 - Analise de numeros inteiros\n");
        printf("3 - Gestao de classificacoes\n");
        printf("4 - Pesquisa de valores\n");
        printf("5 - Analise de vendas\n");
        printf("0 - Sair\n");
        printf("========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {
            int numero, limite, soma = 0;

            printf("\n=== TABUADA ===\n");
            printf("Introduza um numero: ");
            scanf("%d", &numero);

            do {
                printf("Limite da tabuada");
                scanf("%d", &limite);

                if (limite <= 0) {
                    printf("O limite deve ser positivo!\n");
                }
            } while (limite <= 0);

            printf("\n");

            for (int i = 1; i <= limite; i++) {
                int resultado = numero * i;
                printf("%d x %d = %d\n", numero, i, resultado);

                soma += resultado;
            }

            printf("\nSoma dos resultados: %d\n", soma);
        } else if (op == 2) {
            int numeros[10];

            int soma = 0, pares = 0, impares = 0;
            float media;

            printf("\n=== ANALISE DE NUMEROS INTEIROS ===\n");

            for (int i = 0; i < 10; i++) {
                printf("Introduza o numero %d: ", i + 1);
                scanf("%d", &numeros[i]);
            }

            printf("\nOrdem original: \n");

            for (int i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            printf("\nOrdem Inversa\n");

            for (int i = 9; i >= 0; i--) {
                printf("%d ", numeros[i]);
            }

            printf("\nSoma, Pares e os Impares: \n");

            for (int i = 0; i < 10; i++) {

                soma += numeros[i];

                if (numeros[i] % 2 == 0) {
                    pares++;
                } else {
                    impares++;
                }
            }

            media = (float)soma / 10;

            printf("\n\n SOMA: %d\n", soma);
            printf("Media %.2f\n", media);
            printf("Numeros Pares: %d\n", pares);
            printf("Numeros Impares: %d\n", impares);

        } else if (op == 3) {
            float notas[8];

            float soma = 0, media, maior, menor;
            int aprovados = 0, reprovados = 0, alunoMaior = 1;

            printf("\n=== CLASSIFICAÇÕES ===\n");

            for (int i = 0; i < 8; i++) {
                do {
                    printf("Aluno %d: ", i + 1);
                    scanf("%f", &notas[i]);

                    if (notas[i] < 0 || notas[i] > 20) {
                        printf("NOTA INVÁLIDA!!! Introduza valores entre 0 e 20\n");
                    }
                } while (notas[i] < 0 || notas[i] > 20);
            }

            maior = notas[0];
            menor = notas[0];

            printf("\nClassificações registadas: \n");

            for (int i = 0; i < 8; i++) {
                soma += notas[i];

                if (notas[i] > maior){
                    maior = notas[i];
                    alunoMaior = i + 1;
                }

                if (notas[i] < menor) {
                    menor = notas[i];
                }

                if (notas[i] >= 10) {
                    aprovados++;
                } else {
                    reprovados++;
                }
            }

            media = soma / 8;

            printf("\n=== RESULTADOS ===\n");

            printf("Media da Turma: %.2f\n", media);
            printf("Maior Classificação: %.2f\n", maior);
            printf("Menor Classificação: %.2f\n", menor);
            printf("\nAprovados: %d\n", aprovados);
            printf("Reprovados: %d\n", reprovados);
            printf("\nAluno com maior classificação: %d\n", alunoMaior);

        } else if (op == 4) {
            int numeros[10], pesquisa, ocorrencias = 0;

            printf("\n=== PESQUISA DE VALORES ===\n");

            for (int i = 0; i < 10; i++) {
                printf("Introduza o numero: %d", i + 1);
                scanf("%d", &numeros[i]);
            }

            printf("\nNumeros registados: \n");

            for (int i = 0; i < 10; i++) {
                printf("%d", numeros[i]);
            }

            printf("\nNumero a pesquisar: \n");
            scanf("%d", &pesquisa);

            printf("\nNumero encontrado nas posições: \n");

            for (int i = 0; i < 10; i++) {
                if (numeros[i] == pesquisa) {
                    printf("%d ", i + 1);
                    ocorrencias++;
                }
            }

            if (ocorrencias == 0) {
                printf("Numero não foi encontrado!\n");
            } else {
                printf("\nTOTAL de ocorrencias: %d\n", ocorrencias);
            }
        } else if (op == 5) {
            float vendas[14], total = 0, media, maiorVenda;
            float primeiraSemana = 0, segundaSemana = 0;
            int diaMaior = 1;

            printf("\n=== ANALISE DE VENDAS ===\n");

            for (int i = 0; i < 14; i++) {
                do {
                    printf("Dia %d: ", i + 1);
                    scanf("%f", &vendas[i]);

                    if (vendas[i] < 0) {
                        printf("As vendas não podem ser negativas");
                    }
                } while (vendas[i] < 0);
            }

            maiorVenda = vendas[0];

            for (int i = 0; i < 14; i++) {
                total += vendas[i];

                if (vendas[i] > maiorVenda) {
                    maiorVenda = vendas[i];
                    diaMaior = i + 1;
                }

                if (i < 7) {
                    primeiraSemana += vendas[i];
                } else {
                    segundaSemana += vendas[i];
                }
            }

            media = total / 14;

            printf("\n=== RESULTADOS ===\n");
            printf("Total de vendas: %.2f EUR\n", total);
            printf("Media diaria: %.2f\n", media);
            printf("\nMaior venda: %.2f\n", maiorVenda);
            printf("Dia da maior venda: %d\n", diaMaior);
            printf("\nPrimeira semana: %.2f EUR\n", primeiraSemana);
            printf("Segunda Semana: %.2f EUR\n", segundaSemana);

            if (primeiraSemana > segundaSemana) {
                printf("\nSemana com mais vendas: Primeira\n");
            } else if (primeiraSemana < segundaSemana) {
                printf("\nSemana com mais vendas: Segunda\n");
            } else {
                printf("\nAs duas semanas tiveram o mesmo numero de vendas!\n");
            }
        } else if (op == 0) {
            printf("Bom trabalho!\n");
        } else {
            printf("Opção Inválida! Tente novamente com, valores entre 1 - 5");
        }
    } while (op != 0);

    return 0;
}