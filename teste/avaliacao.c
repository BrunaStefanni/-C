// Avaliação Final - Linguagem C

// Por: Bruna Leite

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

        if (op == 1) { // Exercício 2 - Cálculo de Salário

            // Declaracao das variaveis
            float salarioBase, valorExtra, premio, total;
            int horas;

            printf("\n=== CALCULO DE SALARIO ===\n");

            // Pedir o salario base
            do {
                printf("Salario base: ");
                scanf("%f", &salarioBase);

                if (salarioBase <= 0) {
                    printf("Erro! Digite um valor de salario acima de zero.\n");
                }

            } while (salarioBase <= 0);

            // Pedir as horas extras
            do {
                printf("Horas extraordinarias: ");
                scanf("%d", &horas);

                if (horas < 0) {
                    printf("Erro! Digite um valor de horas acima de zero.\n");
                }

            } while (horas < 0);

            // Calcular o valor das horas extraordinarias
            valorExtra = horas * 12;

            // Calcular o premio de produtividade
            if (horas < 10) {
                premio = 0;
            }
            else if (horas <= 20) {
                premio = salarioBase * 0.05;
            }
            else {
                premio = salarioBase * 0.10;
            }

            // Calcular a remuneracao total
            total = salarioBase + valorExtra + premio;

            // Apresentar os resultados
            printf("\nSalario base: %.2f EUR\n", salarioBase);
            printf("Valor das horas extra: %.2f EUR\n", valorExtra);
            printf("Premio de produtividade: %.2f EUR\n", premio);
            printf("Remuneracao total: %.2f EUR\n", total);

        

        } else if (op == 2) { // Exercício 3 - Controlo de Estacionamento

            // Variaveis
            int ocupados = 0;
            int capacidade = 20;
            int veiculos;

            printf("\n=== CONTROLO DE ESTACIONAMENTO ===\n");

            printf("Capacidade do parque: %d lugares\n", capacidade);

            // Repetir enquanto existirem lugares disponiveis
            while (ocupados < capacidade) {

                printf("\nVeiculos a entrar (0 para terminar): ");
                scanf("%d", &veiculos);

                // Se introduzir 0, termina o registo
                if (veiculos == 0) {
                    break;
                }

                // Verificar se o numero e positivo
                if (veiculos < 0) {
                    printf("Erro! Introduza um numero positivo.\n");
                }

                // Verificar capacidade de lugares suficientes
                else if (veiculos <= capacidade - ocupados) {
                    ocupados = ocupados + veiculos;

                    printf("Entrada autorizada!\n");
                    printf("Lugares ocupados: %d\n", ocupados);
                    printf("Lugares disponiveis: %d\n", capacidade - ocupados);
                }

                else {
                    printf("Entrada recusada! Lugares insuficientes.\n");
                }
            }

            // Apresentar dados finais do estacionamento
            printf("\n=== RESUMO FINAL ===\n");

            printf("Lugares ocupados: %d\n", ocupados);
            printf("Lugares disponiveis: %d\n", capacidade - ocupados);
        

        } else if (op == 3) { // Exercício 4 - Análise de Números

            // variaveis
            int numero;
            int i;
            int soma = 0;
            int quantidade = 0;

            printf("\n=== ANALISE DE NUMEROS ===\n");

            // Pedir um numero entre 5 e 40
            do {
                printf("Introduza um numero entre 5 e 40: ");
                scanf("%d", &numero);

                if (numero < 5 || numero > 40) {
                    printf("Erro! O numero deve estar entre 5 e 40.\n");
                }
            
            } while (numero < 5 || numero > 40);

            // Mostrar todos os numeros de 1 ate ao numero escolhido
            printf("\nSequencia:\n");

            for (i = 1; i <= numero; i++) {
                printf("%d ", i);
            }

            // Mostrar apenas os numeros impares
            printf("\n\nNumeros impares:\n");

            for (i = 1; i <= numero; i++) {

                if (i % 2 != 0) {
                    printf("%d ", i);
                }
            }

            // Calcular a soma dos multiplos de 5
            for (i = 1; i <= numero; i++) {

                if (i % 5 == 0) {
                    soma = soma + i;
                }
            }

            // Contar os numeros divisiveis por 4
            for (i = 1; i <= numero; i++) {

                if (i % 4 == 0) {
                    quantidade++;
                }
            }

            // Apresentar os resultados
            printf("\n\nSoma dos multiplos de 5: %d\n", soma);
            printf("Quantidade de multiplos de 4: %d\n", quantidade);


        } else if (op == 4) { // Exercício 5 - Gestão de Consumos

            // Array para guardar os 7 consumos
            float consumos[7];

            // Restantes variaveis
            float total = 0;
            float media;
            float maior, menor;

            int i;
            int diasAcima = 0;
            int diaMenor = 0;

            printf("\n=== GESTAO DE CONSUMOS ===\n");

            // Registar os consumos dos 7 dias
            for (i = 0; i < 7; i++) {

                do {
                    printf("Consumo do dia %d: ", i + 1);
                    scanf("%f", &consumos[i]);

                    // Validar para nao aceitar valores negativos
                    if (consumos[i] < 0) {
                        printf("Erro! O consumo nao pode ser negativo.\n");
                    }

                } while (consumos[i] < 0);

                // Somar os consumos
                total = total + consumos[i];

                // No primeiro dia inicializar o maior e o menor
                if (i == 0) {
                    maior = consumos[i];
                    menor = consumos[i];
                    diaMenor = i + 1;
                }

                else { // Verificar se encontrou um consumo maior
                    if (consumos[i] > maior) {
                        maior = consumos[i];
                    }

                    // Verificar se encontrou um consumo menor
                    if (consumos[i] < menor) {
                        menor = consumos[i];
                        diaMenor = i + 1;
                    }
                }
            }

            // Contar os dias com consumo superior a 30
            for (i = 0; i < 7; i++) {
                if (consumos[i] > 30) {
                    diasAcima++;
                }
            }

            // Calcular a media dos consumos
            media = total / 7;

            // Apresentar todos os consumos
            printf("\nConsumos registados:\n");

            for (i = 0; i < 7; i++) {
                printf("%.2f ", consumos[i]);
            }

            // Apresentar os resultados finais
            printf("\n\nConsumo total: %.2f kWh\n", total);
            printf("Media diaria: %.2f kWh\n", media);
            printf("Maior consumo: %.2f kWh\n", maior);
            printf("Menor consumo: %.2f kWh\n", menor);
            printf("Dias acima de 30 kWh: %d\n", diasAcima);
            printf("Dia do menor consumo: %d\n", diaMenor);

        } else if (op == 5) { Exercício 6 - Pesquisa  de Encomendas

            // Declaracao das variaveis
            int quantidades[8]; // Array para guardar as 8 quantidades
            int i;
            int total = 0;
            int acima20 = 0;
            int pesquisa;
            int ocorrencias = 0;

            printf("\n=== PESQUISA DE ENCOMENDAS ===\n");

            // Registar as quantidades das 8 encomendas
            for (i = 0; i < 8; i++) {

                do {
                    printf("Quantidade da encomenda %d: ", i + 1);
                    scanf("%d", &quantidades[i]);

                    // Verificar se a quantidade e negativa
                    if (quantidades[i] < 0) {
                        printf("Erro! A quantidade nao pode ser negativa.\n");
                    }

                } while (quantidades[i] < 0);

                // Somar todas as quantidades
                total = total + quantidades[i];

                // Contar encomendas com mais de 20 unidades
                if (quantidades[i] > 20) {
                    acima20++;
                }
            }

            // Apresentar todas as quantidades
            printf("\nQuantidades registadas:\n");

            for (i = 0; i < 8; i++) {
                printf("%d ", quantidades[i]);
            }

            // Apresentar o total e a quantidade de encomendas acima de 20
            printf("\n\nTotal de produtos: %d\n", total);
            printf("Encomendas acima de 20 unidades: %d\n", acima20);

            // Pedir a quantidade que queremos pesquisar
            printf("\nQuantidade a pesquisar: ");
            scanf("%d", &pesquisa);

            // Procurar a quantidade no array
            printf("\nEncontrada nas encomendas:\n");

            for (i = 0; i < 8; i++) {

                // Verificar se a quantidade corresponde a pesquisa
                if (quantidades[i] == pesquisa) {
                    printf("%d ", i + 1);
                    ocorrencias++;
                }
            }

            // Verificar se encontrou alguma quantidade
            if (ocorrencias == 0) {
                printf("Quantidade nao encontrada.");
            }

            // Apresentar o numero de ocorrencias
            printf("\nTotal de ocorrencias: %d\n", ocorrencias);

        } else if (op == 6) { // Exercício 7 - Desenho de Um Losango

        } else if (op == 7) {

        }
        
            // OPCAO INVALIDA
            else if (opcao != 0) {
                printf("\nOpcao invalida! Tente novamente.\n");
            }
    
        } while (op != 0);
        
        printf("\nPrograma terminado!\n");

        return 0;
    }

}


