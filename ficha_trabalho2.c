int opcao;
do {

    printf("\n====================================\n");
    printf("       Escolher um cálculo\n");
    printf("====================================\n");

    printf("\n1  - Calculadora de Soma");
    printf("\n2  - Calculadora Aritmetica");
    printf("\n3  - Calculadora de Areas");
    printf("\n4  - Conversor de Temperaturas");
    printf("\n5  - Conversor de Distancias");
    printf("\n6  - Calculadora de IVA");
    printf("\n7  - Calculadora de Medias");
    printf("\n8  - Calculadora de Descontos");
    printf("\n9  - Calculadora de Combustivel");
    printf("\n10 - Calculadora de Salario");
    printf("\n11 - Calculadora de IMC");

    printf("\n\n0  - Sair");

    printf("\n\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {