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
        scanf("%d", &opcao);


        // EXERCICIO 1 - TABUADA PERSONALIZADA
        if (opcao == 1) {

            int numero, limite;
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

            for (int i = 1; i <= limite; i++) {

                printf("%d x %d = %d\n", numero, i, numero * i);

                soma = soma + (numero * i);
            }

            printf("Soma dos resultados: %d\n", soma);
        }
        


}