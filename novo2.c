#include<stdio.h>
int main(void) {

    int numero;

    printf("Introduza um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero é positivo!\n");
    }

    printf("Fim do programa\n");

    return 0;
}

#include<stdio.h>
int main(void) {
    float nota;

    printf("Introduza a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 10) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}

#include<stdio.h>
int main(void) {
    float nota;

    printf("Introduza a nota do aluno com um valor compreendido entre 0 e 20: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 20) {
        printf("Nota invalida\n");
    } else if (nota < 10) {
        printf("Insuficiente\n");
    } else if ( nota < 14) {
        printf("Suficiente\n");
    } else if (nota < 18) {
        printf("Bom.\n");
    } else {
        printf("Excelente");
    }

    return 0;
}
