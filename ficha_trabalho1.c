#include <stdio.h>

int main() {
    
    int num1, num2, soma; // Declarar as variáveis

    printf("Introduza o primeiro numero: "); // Pedir o primeiro número ao utilizador
    scanf("%d", &num1); // Recebe os dados do utilizador

    printf("Introduza o segundo numero: "); // Pedir o segundo número ao utilizador
    scanf("%d", &num2);

    soma = num1 + num2; // Calcular a soma dos dois números

    printf("Resultado da soma: %d\n", soma);     // Apresentar o resultado

    return 0;
}
