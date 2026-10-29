// INICIO
#include <stdio.h> //Biblioteca com as funcionalidades básicas
int main(void) {   //INICIO
    printf("Olá Turma!\n");   //Apresenta uma mensagem no ecrã do utilizador!
                                // \n significa mudar para a linha seguinte.
    return 0;              // Indica que o programa terminou com sucesso.
}

#include <stdio.h>
int main(void) {
    int idade = 25;

    float altura = 1.75f;

    double alturaDouble = 1.75;

    char turma = 'A';

    printf("Idade %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Altura (double): %.2f metros\n", alturaDouble);
    printf("Turma: %c\n", turma);

    return 0;
}

#include <stdio.h>
int main(void) {
    const int LOTACAO_MAXIMA = 20;

    int inscritos = 15;

    printf("Lotação máxima: %d\n", LOTACAO_MAXIMA);
    printf("Inscritos: %d\n", inscritos);

    int lugaresDisponiveis = LOTACAO_MAXIMA - inscritos;

    printf("Lugares disponiveis: %d\n", lugaresDisponiveis);

    return 0;
}

//scanf

#include <stdio.h>
int main(void) {
    int idade;

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    printf("Tem %d anos de idade.\n", idade);

    return 0;
}

#include <stdio.h>
int main(void) {
    int idade;
    float altura;
    double peso;
    char turma;

    printf("Introduza a sua idade: ");
    scanf("%d", &idade);

    printf("Introduza a altura: ");
    scanf("%f", &altura);

    printf("Introduza o peso: ");
    scanf("%lf", &peso);

    printf("Introduza a letra da turma: ");
    scanf(" %c", &turma);

    printf("\n====== DADOS DO ALUNO =======\n");

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.2f kg\n", peso);
    printf("Turma: %c\n", turma);

    return 0;
}

#include <stdio.h>
int main(void) {
    int numero1 = 20;
    int numero2 = 6;

    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = (float)numero1 / numero2;
    int resto = numero1 % numero2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicação %d\n", multiplicacao);
    printf("Divisao %.2f\n", divisao);
    printf("Resto: %d\n", resto);

    return 0;
}

#include <stdio.h>
int main(void) {
    int resultado1 = 10 + 5 * 2;
    int resultado2 = (10 + 5 ) * 2;

    printf("O resultado 1: %d\n", resultado1);
    printf("O resultado2: %d\n", resultado2);
    return 0;
}

#include <stdio.h>
int main(void) {
    int numeroCliente;
    int numeroMeses;

    float mensalidade;
    float taxaInscricao;

    float totalMensalidades;
    float valorTotal;
    float custoMedio;

    printf("\n======== FITZONE ========\n");

    printf("Numero do cliente: ");
    scanf("%d", &numeroCliente);

    printf("\nValor da mensalidade: ");
    scanf("%f", &mensalidade);

    printf("\nNumero de meses: ");
    scanf("%d", &numeroMeses);

    printf("\nTaxa de inscrição: ");
    scanf("%f", &taxaInscricao);

    totalMensalidades = mensalidade * numeroMeses;

    valorTotal = totalMensalidades + taxaInscricao;

    custoMedio = valorTotal / numeroMeses;

    printf("\n======== RESULTADOS ========\n");

    printf("Cliente: %d\n", numeroCliente);
    printf("Total das mensalidades: %.2f EUR\n", totalMensalidades);
    printf("Taxa de Inscrição: %.2f EUR\n", taxaInscricao);
    printf("Valor Total: %.2f EUR\n", valorTotal);
    printf("Custo Médio mensal: %.2f EUR\n", custoMedio);

    return 0;
}