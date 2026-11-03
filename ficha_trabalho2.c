#include <stdio.h>

int main() {

    int opcao;

    do {
        // Menu principal
        printf("\n====================================\n");
        printf("       Escolher um cálculo\n");
        printf("====================================\n");

        printf("1 - Calculadora de Soma\n");
        printf("2 - Calculadora Aritmetica\n");
        printf("3 - Calculadora de Areas\n");
        printf("4 - Conversor de Temperaturas\n");
        printf("5 - Conversor de Distancias\n");
        printf("6 - Calculadora de IVA\n");
        printf("7 - Calculadora de Medias\n");
        printf("8 - Calculadora de Descontos\n");
        printf("9 - Calculadora de Consumo de Combustivel\n");
        printf("10 - Calculadora de Salario\n");
        printf("11 - Calculadora de IMC\n");
        printf("0 - Sair\n");
        printf("====================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {     // poderia ser feito com if else, mas o switch é mais eficiente para este caso

            // 1 - Calculadora de Soma
            case 1: {
                int num1, num2, soma;

                printf("Introduza o primeiro numero: ");
                scanf("%d", &num1);

                printf("Introduza o segundo numero: ");
                scanf("%d", &num2);

                soma = num1 + num2;

                printf("Resultado da soma: %d\n", soma);
                break;
            }

            // 2 - Calculadora Aritmetica
            case 2: {
                int numero1, numero2;
                int soma, subtracao, multiplicacao;
                float divisao;

                printf("Primeiro numero: ");
                scanf("%d", &numero1);

                printf("Segundo numero: ");
                scanf("%d", &numero2);

                soma = numero1 + numero2;
                subtracao = numero1 - numero2;
                multiplicacao = numero1 * numero2;

                printf("Soma: %d\n", soma);
                printf("Subtracao: %d\n", subtracao);
                printf("Multiplicacao: %d\n", multiplicacao);

                if(numero2 != 0) {
                    divisao = (float) numero1 / numero2;
                    printf("Divisao: %.2f\n", divisao);
                } else {
                    printf("Nao e possivel dividir por zero!\n");
                }

                break;
            }

            // 3 - Calculadora de Areas
            case 3: {
                float comprimento, largura, area;

                printf("Comprimento: ");
                scanf("%f", &comprimento);

                printf("Largura: ");
                scanf("%f", &largura);

                area = comprimento * largura;

                printf("Area do retangulo: %.2f m2\n", area);
                break;
            }

            // 4 - Conversor de Temperaturas
            case 4: {
                float celsius, fahrenheit;

                printf("Temperatura em Celsius: ");
                scanf("%f", &celsius);

                fahrenheit = (celsius * 9.0 / 5.0) + 32;

                printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
                break;
            }

            // 5 - Conversor de Distancias
            case 5: {
                float quilometros, metros, centimetros;

                printf("Distancia em quilometros: ");
                scanf("%f", &quilometros);

                metros = quilometros * 1000;
                centimetros = quilometros * 100000;

                printf("Metros: %.2f\n", metros);
                printf("Centimetros: %.2f\n", centimetros);
                break;
            }

            // 6 - Calculadora de IVA
            case 6: {
                float preco, iva, precoFinal;

                printf("Preco sem IVA: ");
                scanf("%f", &preco);

                iva = preco * 0.23;
                precoFinal = preco + iva;

                printf("Valor do IVA: %.2f euros\n", iva);
                printf("Preco final: %.2f euros\n", precoFinal);
                break;
            }

            // 7 - Calculadora de Medias
            case 7: {
                float nota1, nota2, nota3, media;

                printf("Primeira nota: ");
                scanf("%f", &nota1);

                printf("Segunda nota: ");
                scanf("%f", &nota2);

                printf("Terceira nota: ");
                scanf("%f", &nota3);

                media = (nota1 + nota2 + nota3) / 3;

                printf("Media final: %.2f\n", media);
                break;
            }

            // 8 - Calculadora de Descontos
            case 8: {
                float precoOriginal, percentagem;
                float desconto, precoFinal;

                printf("Preco original: ");
                scanf("%f", &precoOriginal);

                printf("Desconto (%%): ");
                scanf("%f", &percentagem);

                desconto = precoOriginal * percentagem / 100;
                precoFinal = precoOriginal - desconto;

                printf("Valor do desconto: %.2f euros\n", desconto);
                printf("Preco final: %.2f euros\n", precoFinal);
                break;
            }

            // 9 - Calculadora de Consumo de Combustivel
            case 9: {
                float distancia, litros, consumo;

                printf("Distancia percorrida: ");
                scanf("%f", &distancia);

                printf("Combustivel consumido: ");
                scanf("%f", &litros);

                if(distancia > 0) {
                    consumo = (litros / distancia) * 100;
                    printf("Consumo medio: %.2f L/100 km\n", consumo);
                } else {
                    printf("A distancia tem de ser superior a zero!\n");
                }

                break;
            }

            // 10 - Calculadora de Salario
            case 10: {
                float valorHora, horas, salarioBruto;
                float desconto, salarioFinal;

                printf("Valor por hora: ");
                scanf("%f", &valorHora);

                printf("Horas trabalhadas: ");
                scanf("%f", &horas);

                salarioBruto = valorHora * horas;
                desconto = salarioBruto * 0.11;
                salarioFinal = salarioBruto - desconto;

                printf("Salario bruto: %.2f euros\n", salarioBruto);
                printf("Desconto Seguranca Social: %.2f euros\n", desconto);
                printf("Salario apos desconto: %.2f euros\n", salarioFinal);

                break;
            }

            // 11 - Calculadora de IMC
            case 11: {
                float peso, altura, imc;

                printf("Peso (kg): ");
                scanf("%f", &peso);

                printf("Altura (m): ");
                scanf("%f", &altura);

                if(altura > 0) {
                    imc = peso / (altura * altura);
                    printf("O seu IMC e: %.2f\n", imc);
                } else {
                    printf("A altura tem de ser superior a zero!\n");
                }

                break;
            }

            // 0 - Sair do programa
            case 0:
                printf("A sair do programa... Ate breve!\n");
                break;

            // Opcao invalida
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 0);

    return 0;
}

