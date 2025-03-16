#include <stdio.h>

int main()
{

    // Váriavel menu inicial 

    int opcao;

    // Menu de introdução

    printf("[SEJA BEM-VINDO AO SUPER TRUNFO]\n\n");

    printf("Escolha uma opção\n");

    printf("1.Jogar\n");
    printf("2.Regras\n");
    printf("3.Sair\n\n");

    scanf("%d", &opcao);

    switch (opcao){
    case 1:
    // Jogo SUPER TRUNFO

        // Váriaveis cartas
        char estado1, estado2;
        char cidade1[100], cidade2[100];
        char codigo1[4], codigo2[4];
        int população1, população2;
        int pontosturisticos1, pontosturisticos2;
        float area1, area2;
        float pib1, pib2;

    // Entrada de dados da primeira carta

    printf("\n\nConstrua sua primeira carta:\n\n");

    getchar();

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Letra do estado: ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf(" %s", codigo1);

    printf("População (N): ");
    scanf("%d", &população1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n\n[CARTA REGISTRADA COM SUCESSO]\n\n");

    getchar(); // Limpar buffer antes de usar fgets()

    // Entrada de dados da segunda carta

    printf("Construa sua segunda carta:\n\n");

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Letra do estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf(" %s", codigo2);

    printf("População (N): ");
    scanf("%d", &população2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n\n[CARTA REGISTRADA COM SUCESSO]\n\n");

    // Cálculos

    float densidade1 = população1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / população1;
    float densidade2 = população2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / população2;

    // Comparações

    printf("\n[COMPARAÇÃO DE ATRIBUTOS]\n\n");
    
    // Váriavel menu interativo

        int escolha1, escolha2;
        float valor1_a, valor1_b, valor2_a, valor2_b;
        float resultado1, resultado2;
    
    // Menu interativo para comparação de atributos
        
        // Primeiro atributo a ser comparado
        printf("Escolha um atributo para comparação:\n\n");

        printf("1.População\n");
        printf("2.Área\n");
        printf("3.Densidade demográfica\n");
        printf("4.Pib\n");
        printf("5.Pib per capita\n");
        printf("6.Pontos turísticos\n");

        scanf("%d", &escolha1);

        // Segundo atributo a ser comparado

        printf("Escolha um segundo atributo diferente para comparação:\n\n");

        printf("1.População\n");
        printf("2.Área\n");
        printf("3.Densidade demográfica\n");
        printf("4.Pib\n");
        printf("5.Pib per capita\n");
        printf("6.Pontos turísticos\n");

        scanf("%d", &escolha2);
        
        // Primeira escolha de atributos

        switch (escolha1)
        {
        case 1:
        
        printf("[POPULAÇÃO]\n%s%d\n%s%d\n\n", cidade1, população1, cidade2, população2);

        if (população1 == população2){
            printf("EMPATE!\n\n");
        } else if (população1 > população2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor1_a = população1;
        valor1_b = população2;
        
        break;
        case 2:

        printf("[ÁREA]\n%s%.2f\n%s%.2f\n\n", cidade1, area1, cidade2, area2);

        if (area1 == area2){
            printf("EMPATE!\n\n");
        } else if (area1 > area2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor1_a = area1;
        valor1_b = area2;

        break;
        case 3:

        printf("[DENSIDADE DEMOGRÁFICA]\n%s%.2f\n%s%.2f\n\n", cidade1, densidade1, cidade2, densidade2);

        if (densidade1 == densidade2){
            printf("EMPATE!\n\n");
        } else if (densidade1 < densidade2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor1_a = densidade1;
        valor1_b = densidade2;

        break;
        case 4:

        printf("[PIB]\n%s%.2f\n%s%.2f\n\n", cidade1, pib1, cidade2, pib2);

        if (pib1== pib2){
            printf("EMPATE!\n\n");
        } else if (pib1 > pib2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor1_a = pib1;
        valor1_b = pib2;

        break;
        case 5:

        printf("[PIB PER CAPITA]\n%s%.2f\n%s%.2f\n\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);

        if (pib_per_capita1 == pib_per_capita2){
            printf("EMPATE!\n\n");
        } else if (pib_per_capita1 > pib_per_capita2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor1_a = pib_per_capita1;
        valor1_b = pib_per_capita2;

        break;
        case 6:

        printf("[PONTOS TURÍSTICOS]\n%s%d\n%s%d\n\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);

        if (pontosturisticos1 == pontosturisticos2){
            printf("EMPATE!\n\n");
        } else if (pontosturisticos1 > pontosturisticos2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor1_a = pontosturisticos1;
        valor1_b = pontosturisticos2;
            
        break;
        default:
        printf("Opção inválida!");
        break;
        }

        // Segunda escolha de atributos

        switch (escolha2)
        {
        case 1:
        
        printf("[POPULAÇÃO]\n%s%d\n%s%d\n\n", cidade1, população1, cidade2, população2);

        if (população1 == população2){
            printf("EMPATE!\n\n");
        } else if (população1 > população2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor2_a = população1;
        valor2_b = população2;
        
        break;
        case 2:

        printf("[ÁREA]\n%s%.2f\n%s%.2f\n\n", cidade1, area1, cidade2, area2);

        if (area1 == area2){
            printf("EMPATE!\n\n");
        } else if (area1 > area2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor2_a = area1;
        valor2_b = area2;

        break;
        case 3:

        printf("[DENSIDADE DEMOGRÁFICA]\n%s%.2f\n%s%.2f\n\n", cidade1, densidade1, cidade2, densidade2);

        if (densidade1 == densidade2){
            printf("EMPATE!\n\n");
        } else if (densidade1 < densidade2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor2_a = densidade1;
        valor2_b = densidade2;

        break;
        case 4:

        printf("[PIB]\n%s%.2f\n%s%.2f\n\n", cidade1, pib1, cidade2, pib2);

        if (pib1== pib2){
            printf("EMPATE!\n\n");
        } else if (pib1 > pib2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor2_a = pib1;
        valor2_b = pib2;

        break;
        case 5:

        printf("[PIB PER CAPITA]\n%s%.2f\n%s%.2f\n\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);

        if (pib_per_capita1 == pib_per_capita2){
            printf("EMPATE!\n\n");
        } else if (pib_per_capita1 > pib_per_capita2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor2_a = pib_per_capita1;
        valor2_b = pib_per_capita2;

        break;
        case 6:

        printf("[PONTOS TURÍSTICOS]\n%s%d\n%s%d\n\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);

        if (pontosturisticos1 == pontosturisticos2){
            printf("EMPATE!\n\n");
        } else if (pontosturisticos1 > pontosturisticos2){
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }

        valor2_a = pontosturisticos1;
        valor2_b = pontosturisticos2;
            
        break;
        default:
        printf("Opção inválida!");
        break;
        }

        // Cálculos soma de atributos

        resultado1 = valor1_a + valor2_a;
        resultado2 = valor1_b + valor2_b;

        printf("[SOMA DE ATRIBUTOS]\n\n");

        printf("%s%.2f\n\n%s%.2f\n\n", cidade1, resultado1, cidade2, resultado2);

        if (resultado1 == resultado2){
            printf("EMPATE");
        } else if (resultado1 > resultado2){
            printf("VENCEDOR: %s", cidade1);
        } else {
            printf("VENCEDOR: %s", cidade2);
        }


    break;
    case 2:
    //Introdução as regras do jogo

    printf("[Super Trunfo é um jogo que consiste em fazer comparações de diferentes atributos de cartas\naonde obtemos um vencedor mediante o valor comparado, sendo esse maior ou menor]\n\n");

    printf("Como jogar:\n\nO usuário deverá começar cadastrando duas cartas, que deverá possuir os seguintes atributos:\n\n");
    
    printf("Estado (A-H): A\n");
    printf("Código da carta (01-04): A01\n");
    printf("Nome da cidade (Sem caracteres especiais): Sao Paulo\n");
    printf("População (Dentro dos números inteiros positivos): 12320000\n");
    printf("Área(em km²): 1511.11\n");
    printf("Densidade demográfica: 8152.94\n");
    printf("PIB (em bilhões): 699.28\n");
    printf("PIB per capita: 56759.74\n");
    printf("Número de pontos turísticos: 50\n\n");

    printf("Como vencer:\n\nA carta vencedora será a carta que ganhar no maior número de atributos.\n\nBom jogo!");
    
    break;
    case 3:
    //Saída do jogo

    printf("Aguarde, saindo do jogo...");

    break;
    default:
    //Caso o usuário não escolha uma opção disponível

    printf("Opção inválida!");

    break;
    }
  
    return 0;
}
