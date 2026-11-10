//Ciclos e Arrays - Ficha de Trabalho 3

#include <stdio.h>
int main() {

    int opcao;

    do{

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
        scanf("%d", &opcao); //recebe a opção do utilizador


        // EXERCICIO 1 - TABUADA PERSONALIZADA
        if (opcao == 1) {

            int numero, limite; // o usuário introduz o número e o limite da tabuada é maior que 0
            int soma = 0;

            printf("\n=== TABUADA PERSONALIZADA ===\n");

            printf("Introduza um numero: ");
            scanf("%d", &numero);

            printf("Limite da tabuada: ");
            scanf("%d", &limite);

            while (limite <= 0) {
                printf("O limite deve ser positivo. Tente novamente: ");
                scanf("%d", &limite);
            }

            for (int i = 1; i <= limite; i++) { // calcula a tabuada e soma os resultados

                printf("%d x %d = %d\n", numero, i, numero * i);

                soma = soma + (numero * i);
            }

            printf("Soma dos resultados: %d\n", soma);
        }

        // EXERCICIO 2 - ANALISE DE NUMEROS INTEIROS

        else if (opcao == 2) {

            int numeros[10]; // array para armazenar os 10 números inteiros
            int soma = 0;
            int pares = 0;
            int impares = 0;
            float media;

            printf("\n=== ANALISE DE NUMEROS INTEIROS ===\n");

            printf("Introduza 10 numeros:\n");

            for (int i = 0; i < 10; i++) { // solução para par e ímpar

                scanf("%d", &numeros[i]);

                soma = soma + numeros[i];

                if (numeros[i] % 2 == 0) {
                    pares++;
                }
                else {
                    impares++;
                }
            }

            printf("\nOrdem original:\n");

            for (int i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            printf("\nOrdem inversa:\n");

            for (int i = 9; i >= 0; i--) { // inicia no índice 9 e decrementa até 0 para imprimir a ordem inversa
                printf("%d ", numeros[i]);
            }

            media = soma / 10.0;

            printf("\nSoma: %d\n", soma);
            printf("Media: %.2f\n", media);
            printf("Numeros pares: %d\n", pares);
            printf("Numeros impares: %d\n", impares);
        }


        // EXERCICIO 3 - GESTAO DE CLASSIFICACOES

        else if (opcao == 3) {

            float classificacoes[8]; // array para armazenar as classificações dos 8 alunos
            float soma = 0;
            float media;
            float maior, menor;

            int aprovados = 0;
            int reprovados = 0;
            int alunoMaior = 1;

            printf("\n=== GESTAO DE CLASSIFICACOES ===\n");

            for (int i = 0; i < 8; i++) {

                printf("Aluno %d: ", i + 1);
                scanf("%f", &classificacoes[i]);

                while (classificacoes[i] < 0 || classificacoes[i] > 20) {

                    printf("Classificacao invalida! Introduza um valor entre 0 e 20: ");
                    scanf("%f", &classificacoes[i]);
                }

                soma = soma + classificacoes[i];

                if (classificacoes[i] >= 10) {
                    aprovados++;
                }
                else {
                    reprovados++;
                }

                if (i == 0) {
                    maior = classificacoes[i];
                    menor = classificacoes[i];
                }
                else {

                    if (classificacoes[i] > maior) {
                        maior = classificacoes[i];
                        alunoMaior = i + 1;
                    }

                    if (classificacoes[i] < menor) {
                        menor = classificacoes[i];
                    }
                }
            }

            media = soma / 8.0;

            printf("\nLista de classificacoes:\n");

            for (int i = 0; i < 8; i++) {
                printf("Aluno %d: %.2f\n", i + 1, classificacoes[i]);
            }

            printf("\nMedia da turma: %.2f\n", media);
            printf("Maior classificacao: %.2f\n", maior);
            printf("Menor classificacao: %.2f\n", menor);
            printf("Aprovados: %d\n", aprovados);
            printf("Reprovados: %d\n", reprovados);
            printf("Aluno com maior classificacao: %d\n", alunoMaior);
        }


        // EXERCICIO 4 - PESQUISA DE VALORES

        else if (opcao == 4) { Objetivo: procurar um número dentro de um array de 10 posições.

            int numeros[10]; // array para armazenar os 10 números inteiros
            int pesquisa;
            int ocorrencias = 0;

            printf("\n=== PESQUISA DE VALORES ===\n");

            printf("Introduza 10 numeros:\n");

            for (int i = 0; i < 10; i++) {
                scanf("%d", &numeros[i]);
            }

            printf("\nNumeros registados:\n");

            for (int i = 0; i < 10; i++) {
                printf("%d ", numeros[i]);
            }

            printf("\nNumero a pesquisar: ");
            scanf("%d", &pesquisa);

            printf("\nNumero encontrado nas posicoes:\n");

            for (int i = 0; i < 10; i++) {

                if (numeros[i] == pesquisa) {

                    printf("%d ", i + 1);

                    ocorrencias++;
                }
            }

            if (ocorrencias > 0) {
                printf("\nTotal de ocorrencias: %d\n", ocorrencias);
            }
            else {
                printf("Numero nao encontrado.\n");
            }
        }


        // EXERCICIO 5 - ANALISE DE VENDAS

        else if (opcao == 5) {

            float vendas[14];
            float total = 0;
            float media;
            float maior;
            float semana1 = 0;
            float semana2 = 0;

            int diaMaior = 1;

            printf("\n=== ANALISE DE VENDAS SEMANAIS ===\n");

            for (int i = 0; i < 14; i++) {

                printf("Venda do dia %d: ", i + 1);
                scanf("%f", &vendas[i]);

                while (vendas[i] < 0) {

                    printf("Valor invalido! Introduza uma venda positiva ou zero: ");
                    scanf("%f", &vendas[i]);
                }

                total = total + vendas[i];

                if (i == 0) {
                    maior = vendas[i];
                }
                else {
                    if (vendas[i] > maior) {
                        maior = vendas[i];
                        diaMaior = i + 1;
                    }
                }

                if (i < 7) {
                    semana1 = semana1 + vendas[i];
                }
                else {
                    semana2 = semana2 + vendas[i];
                }
            }

            media = total / 14.0;

            printf("\nTotal de vendas: %.2f euros\n", total);
            printf("Media diaria: %.2f euros\n", media);
            printf("Maior venda diaria: %.2f euros\n", maior);
            printf("Dia da maior venda: %d\n", diaMaior);
            printf("Total da primeira semana: %.2f euros\n", semana1);
            printf("Total da segunda semana: %.2f euros\n", semana2);

            if (semana1 > semana2) {
                printf("A primeira semana teve mais vendas.\n");
            }
            else if (semana2 > semana1) {
                printf("A segunda semana teve mais vendas.\n");
            }
            else {
                printf("As duas semanas tiveram o mesmo total de vendas.\n");
            }
        }


        // OPCAO INVALIDA

        else if (opcao != 0) {

            printf("\nOpcao invalida! Escolha uma opcao entre 0 e 5.\n");
        }

    } while (opcao != 0);

    printf("\nPrograma terminado. Obrigado!\n");

    return 0;



}