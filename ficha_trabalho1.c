// Calculadora de soma

#include <stdio.h>

int main() { 
    
    int num1, num2, soma; // Declarar as variáveis

    printf("Introduza o primeiro numero: "); // Pedir o primeiro número ao utilizador
    scanf("%d", &num1); // Recebe os dados do utilizador %d - num inteiro

    printf("Introduza o segundo numero: "); // Pedir o segundo número ao utilizador
    scanf("%d", &num2);

    soma = num1 + num2; // Calcular a soma dos dois números

    printf("Resultado da soma: %d\n", soma);     // Apresentar o resultado

    return 0;
}

// Calculadora Aritmética
#include <stdio.h>

int main() {
    int numero1, numero2;     // Declarar as variáveis
    int soma, subtracao, multiplicacao;
    float divisao;  // float -  permite realizar a divisão utilizando um valor decimal

    printf("Primeiro numero: ");     // Pedir o primeiro número
    scanf("%d", &numero1);

    printf("Segundo numero: ");     // Pedir o segundo número
    scanf("%d", &numero2);

    // Realizar as operações matemáticas
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = (float) numero1 / numero2;    

    // Apresentar os resultados
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);     // %.2f  - apresenta resultado em duas casas decimais

    return 0;
}

// Calculadora de Áreas
#include <stdio.h>

int main() {
    float comprimento, largura, area;     // Declarar as variáveis

    printf("Comprimento: ");     // Pedir o comprimento
    scanf("%f", &comprimento);  // %f  - tipo o float

    printf("Largura: ");     // Pedir a largura
    scanf("%f", &largura);

    area = comprimento * largura;     // Cálculo da área do retângulo

    // Apresentar o resultado com duas casas decimais 
    printf("Area do retangulo: %.2f m2\n", area);

    return 0;
}

// Conversor de Temperaturas
#include <stdio.h>

int main() {
    float celsius, fahrenheit;     // Declarar as variáveis

    printf("Temperatura em Celsius: ");     // Pedir a temperatura em Celsius
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;     // Cálculo de converção Celsius para Fahrenheit

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);     // Apresentar o resultado

    return 0;
}

// Conversor de Distâncias
#include <stdio.h>

int main() { // Base: 1 km = 1 000 metros. 1 km = 100 000 centímetros.
    float quilometros, metros, centimetros;    // Declarar as variáveis

    printf("Distancia em quilometros: ");     // Pedir a distância em quilómetros
    scanf("%f", &quilometros);

    metros = quilometros * 1000;     // Converter quilómetros em metros e centímetros
    centimetros = quilometros * 100000;

    printf("Metros: %.2f\n", metros);     // Apresentar os resultados
    printf("Centimetros: %.2f\n", centimetros);

    return 0;
}

// Calculadora de IVA
#include <stdio.h>

int main() {
    float preco, iva, precoFinal;     // Declarar as variáveis

    printf("Preco sem IVA: ");     // Pedir o preço sem IVA
    scanf("%f", &preco);

    // Calcular o IVA de 23%
    iva = preco * 0.23;

    precoFinal = preco + iva;     // Calcular o preço final

    printf("Valor do IVA: %.2f euros\n", iva);     // Apresentar os resultados
    printf("Preco final: %.2f euros\n", precoFinal);

    return 0;
}

// Calculadora de Médias
#include <stdio.h>

int main() {
    // Declarar as variáveis
    float nota1, nota2, nota3, media;

    printf("Primeira nota: ");     // Pedir as três notas
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;     // Calcular a média

    printf("Media final: %.2f\n", media);     // Apresentar o resultado

    return 0;
}

// Calculadora de descontos
#include <stdio.h>

int main() {
    // Declarar as variáveis
    float precoOriginal, percentagem, desconto, precoFinal;

    printf("Preco original: ");     // Pedir o preço original
    scanf("%f", &precoOriginal);

    printf("Desconto (%%): ");     // Pedir a percentagem de desconto
    scanf("%f", &percentagem);

    desconto = precoOriginal * percentagem / 100;     // Calcular o valor do desconto
    precoFinal = precoOriginal - desconto;     // Calcular o preço final

    printf("Valor do desconto: %.2f euros\n", desconto);     // Apresentar os resultados
    printf("Preco final: %.2f euros\n", precoFinal);

    return 0;
}

// Calculadora de Consumo de Combustível
#include <stdio.h>

int main() {
    float distancia, litros, consumo;     // Declarar as variáveis

    printf("Distancia percorrida: ");     // Pedir a distância percorrida
    scanf("%f", &distancia);

    printf("Combustivel consumido: ");     // Pedir a quantidade de combustível consumida
    scanf("%f", &litros);

    consumo = (litros / distancia) * 100;     // Calcular o consumo médio

    printf("Consumo medio: %.2f L/100 km\n", consumo);    // Apresentar o resultado

    return 0;
}

// Calculadora de Salário
#include <stdio.h>

int main() {
    float valorHora, horas, salarioBruto;     // Declarar as variáveis
    float desconto, salarioFinal;

    printf("Valor por hora: ");    // Pedir o valor recebido por hora
    scanf("%f", &valorHora);

    printf("Horas trabalhadas: ");     // Pedir o número de horas trabalhadas
    scanf("%f", &horas);

    salarioBruto = valorHora * horas;    // Calcular o salário bruto
    desconto = salarioBruto * 0.11;    // Calcular o desconto de 11%
    salarioFinal = salarioBruto - desconto;    // Calcular o salário após o desconto

    printf("Salario bruto: %.2f euros\n", salarioBruto);     // Apresentar os resultados
    printf("Desconto Seguranca Social: %.2f euros\n", desconto);
    printf("Salario apos desconto: %.2f euros\n", salarioFinal);

    return 0;
}

// Desafio Adicional - Cálculo de IMC
#include <stdio.h>

int main() {
    float peso, altura, imc;    // Declarar as variáveis

    printf("Peso (kg): ");    // Pedir o peso
    scanf("%f", &peso);

    printf("Altura (m): ");    // Pedir a altura
    scanf("%f", &altura);

    imc = peso / (altura * altura);    // Calcular o IMC

    printf("O seu IMC e: %.2f\n", imc);    // Apresentar o resultado

    return 0;
}