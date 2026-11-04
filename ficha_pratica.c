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

            } while (numalunos <= 0); // Validação do número de alunos
            
            
            while (contadoralunos <= numalunos) { // Loop para cada aluno
                
                printf("Classificação do aluno %d: ", contadoralunos);
                scanf("%f", &classificacao);

                if (classificacao >= 0 && classificacao <= 20) { // Validação da classificação
                    soma += classificacao; // Soma das classificações
                    
                    if (classificacao >= 10) {
                        alunosaprovados++; // Incrementa o número de alunos aprovados
                    } else {
                        alunosreprovados++; // Incrementa o número de alunos reprovados
                    }
                    
                    contadoralunos++; // Incrementa o contador de alunos
                } else {
                    printf("Classificação inválida! Retorne um valor entre 0 e 20.\n");
                }

            } media = soma / numalunos; // Cálculo da média

            printf("=== RESULTADOS ===\n");
            printf("Média da turma: %.2f\n", media);
            printf("Alunos aprovados: %d\n", alunosaprovados);
            printf("Alunos reprovados: %d\n", alunosreprovados);
            

        } else if (opcao == 3) { // JOGO DE ADIVINHAÇÃO - exercício 4

            //variáveis
            const int numero_secreto = 7; // Número secreto fixo
            int tentativa;
            int numtentativas = 0;
            int max_tentativas = 3; // ou colocaria nno while numtentativas++;
            int acertou = 0; // 0 = não acertou, 1 = acertou

            while (numtentativas < max_tentativas && acertou == 0) { // Loop de tentativas
                printf("Adivinhe o número secreto (entre 1 e 10): ");
                scanf("%d", &tentativa);

                if (tentativa == numero_secreto) {
                    acertou = 1;
                    printf("Parabéns! Você acertou o número secreto!\n");
                } else if (tentativa < numero_secreto) {
                    printf("O número secreto é maior que %d. Tente novamente.\n", tentativa);
                } else {
                    printf("O número secreto é menor que %d. Tente novamente.\n", tentativa);            
                }
            }
            // resultado final após as tentativas
            if (acertou == 0) {
                printf("Suas tentativas acabaram! O número secreto era %d.\n", numero_secreto);
            }

            printf("Tentativas realizadas: %d\n", numtentativas);
            printf("Fim do jogo de adivinhação.\n");

        } else if (opcao == 4) { // CONVERSOR DE NÚMEROS DECIMAIS - ROMANOS - exercício 5

            //variáveis
            int numero;

            printf("=== Conversor de Números Decimais para Romanos ===\n");

            do { // Solicita ao usuário o número decimal
                printf("Digite um número decimal (1 a 3999): ");
                scanf("%d", &numero);
                if (numero < 1 || numero > 3999) {
                    printf("Número inválido! Retorne um valor entre 1 e 3999.\n");
                }
            } while (numero < 1 || numero > 3999); // Validação do número decimal

            printf("Número decimal: %d\n", numero);
            printf("Número romano: ");

            while (numero >= 1000) { // Loop para converter o número decimal em romano - Milhar
                printf("M");
                numero -= 1000;
            }
            if (numero >= 900) { // Loop para converter o número decimal em romano - Centena
                printf("CM");
                numero -= 900;
            }
            else if (numero >= 500) {
                printf("D");
                numero -= 500;
            }
            else if (numero >= 400) {
                printf("CD");
                numero -= 400;
            }
            while (numero >= 100) {
                printf("C");
                numero -= 100;
            }
            if (numero >= 90) { // Loop para converter o número decimal em romano - Dezena
                printf("XC");
                numero -= 90;
            }
            else if (numero >= 50) {
                printf("L");
                numero -= 50;
            }
            else if (numero >= 40) {
                printf("XL");
                numero -= 40;
            }
            while (numero >= 10) {
                printf("X");
                numero -= 10;
            }
            if (numero >= 9) { // Loop para converter o número decimal em romano - Unidade
                printf("IX");
                numero -= 9;
            }
            else if (numero >= 5) {
                printf("V");
                numero -= 5;
            }
            else if (numero >= 4) {
                printf("IV");
                numero -= 4;
            }
            while (numero >= 1) {
                printf("I");
                numero -= 1;
            }
            printf("\n");

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
