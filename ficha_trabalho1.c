#include <stdio.h>

// Calculadora de soma
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
    float divisao;

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
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
