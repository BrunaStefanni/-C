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

int main() {
    float quilometros, metros, centimetros;    // Declarar as variáveis

    printf("Distancia em quilometros: ");     // Pedir a distância em quilómetros
    scanf("%f", &quilometros);

    metros = quilometros * 1000;     // Converter quilómetros em metros e centímetros
    centimetros = quilometros * 100000;

    printf("Metros: %.2f\n", metros);     // Apresentar os resultados
    printf("Centimetros: %.2f\n", centimetros);

    return 0;
}


