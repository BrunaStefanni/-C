// Correção Ficha de Trabalho 5 - Jogo do Galo / Velha
#include <stdio.h>

int main() {

    // Criar o tabuleiro com 9 posicoes
    int tabuleiro[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    int posicao;
    int i;
    int vencedor = 0;
    int livres;
    int fim = 0;

    // 0 = livre
    // 1 = computador (X)
    // 2 = humano (O)

    // O jogo repete enquanto nao existir vencedor ou empate
    do {

        // APRESENTAR O TABULEIRO
        printf("\n\n===== JOGO DO GALO =====\n\n");

        for (i = 0; i < 9; i++) {

            // Se a posicao estiver livre, mostrar o seu numero
            if (tabuleiro[i] == 0) {
                printf("%d", i + 1);
            }

            // Se for do computador, mostrar X
            else if (tabuleiro[i] == 1) {
                printf("X");
            }

            // Se for do humano, mostrar O
            else {
                printf("O");
            }

            // Separar as colunas
            if (i % 3 == 2) {
                printf("\n");
            } else {
                printf(" | ");
            }
        }

        // JOGADA DO HUMANO
        // Pedir uma posicao ate ser valida e estar livre
        do {

            printf("\nEscolha uma posicao (1 a 9): ");
            scanf("%d", &posicao);

            // Verificar se a posicao e valida
            if (posicao < 1 || posicao > 9) {
                printf("Posicao invalida!\n");
            }

            // Verificar se a posicao ja esta ocupada
            else if (tabuleiro[posicao - 1] != 0) {
                printf("Essa posicao ja esta ocupada!\n");
            }

        } while (posicao < 1 || posicao > 9 ||
                 tabuleiro[posicao - 1] != 0);

        // Guardar a jogada do humano
        // Subtrair 1 porque o array comeca na posicao 0
        tabuleiro[posicao - 1] = 2;

        // VERIFICAR SE O HUMANO GANHOU

        if (
            (tabuleiro[0] == 2 && tabuleiro[1] == 2 && tabuleiro[2] == 2) ||
            (tabuleiro[3] == 2 && tabuleiro[4] == 2 && tabuleiro[5] == 2) ||
            (tabuleiro[6] == 2 && tabuleiro[7] == 2 && tabuleiro[8] == 2) ||
            (tabuleiro[0] == 2 && tabuleiro[3] == 2 && tabuleiro[6] == 2) ||
            (tabuleiro[1] == 2 && tabuleiro[4] == 2 && tabuleiro[7] == 2) ||
            (tabuleiro[2] == 2 && tabuleiro[5] == 2 && tabuleiro[8] == 2) ||
            (tabuleiro[0] == 2 && tabuleiro[4] == 2 && tabuleiro[8] == 2) ||
            (tabuleiro[2] == 2 && tabuleiro[4] == 2 && tabuleiro[6] == 2)
        ) {

            vencedor = 2;
            fim = 1;

        }

        // VERIFICAR SE EXISTE EMPATE
        if (fim == 0) {

            livres = 0;

            // Contar as posicoes livres
            for (i = 0; i < 9; i++) {

                if (tabuleiro[i] == 0) {
                    livres++;
                }
            }

            // Se nao houver posicoes livres, existe empate
            if (livres == 0) {
                fim = 1;
            }
        }

        // JOGADA DO COMPUTADOR
        // So joga se o jogo ainda nao terminou
        if (fim == 0) {

            // Procurar a primeira posicao livre
            for (i = 0; i < 9; i++) {

                if (tabuleiro[i] == 0) {

                    // O computador coloca X
                    tabuleiro[i] = 1;

                    // Parar o ciclo depois de jogar
                    break;
                }
            }

            // VERIFICAR SE O COMPUTADOR GANHOU

            if (
                (tabuleiro[0] == 1 && tabuleiro[1] == 1 && tabuleiro[2] == 1) ||
                (tabuleiro[3] == 1 && tabuleiro[4] == 1 && tabuleiro[5] == 1) ||
                (tabuleiro[6] == 1 && tabuleiro[7] == 1 && tabuleiro[8] == 1) ||
                (tabuleiro[0] == 1 && tabuleiro[3] == 1 && tabuleiro[6] == 1) ||
                (tabuleiro[1] == 1 && tabuleiro[4] == 1 && tabuleiro[7] == 1) ||
                (tabuleiro[2] == 1 && tabuleiro[5] == 1 && tabuleiro[8] == 1) ||
                (tabuleiro[0] == 1 && tabuleiro[4] == 1 && tabuleiro[8] == 1) ||
                (tabuleiro[2] == 1 && tabuleiro[4] == 1 && tabuleiro[6] == 1)
            ) {

                vencedor = 1;
                fim = 1;
            }

            // VERIFICAR SE EXISTE EMPATE
            if (fim == 0) {

                livres = 0;

                for (i = 0; i < 9; i++) {

                    if (tabuleiro[i] == 0) {
                        livres++;
                    }
                }

                if (livres == 0) {
                    fim = 1;
                }
            }
        }

    } while (fim == 0);

    // APRESENTAR O TABULEIRO FINAL
    printf("\n\n===== TABULEIRO FINAL =====\n\n");

    for (i = 0; i < 9; i++) {

        if (tabuleiro[i] == 0) {
            printf("%d", i + 1);
        } else if (tabuleiro[i] == 1) {
            printf("X");
        } else {
            printf("O");
        }

        if (i % 3 == 2) {
            printf("\n");
        } else {
            printf(" | ");
        }
    }

    // APRESENTAR O RESULTADO
    if (vencedor == 2) {
        printf("\nVOCÊ VENCEU!\n");
    }

    else if (vencedor == 1) {
        printf("\nCOMPUTADOR VENCEU, VOCÊ PERDEU!\n");
    }

    else {
        printf("\nEMPATE!\n");
    }

    printf("\nFim do jogo!\n");

    return 0;
}
