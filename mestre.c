#include <stdio.h>

int main (){
    
    // Váriaveis
    char estado1, estado2;
    char cidade1[100], cidade2[100];
    char codigo1[4], codigo2[4];
    int população1, população2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    
    //Instruções para o usuário

    printf("[SEJA BEM-VINDO AO SUPER TRUNFO]\n\n");

    printf("Exemplo de uma carta:\n\n");

    printf("Estado (A-H): A\n");
    printf("Código da carta (01-04): A01\n");
    printf("Nome da cidade (Sem caracteres especiais): Sao Paulo\n");
    printf("População (Dentro dos números naturais): 12320000\n");
    printf("Área(em km²): 1511.11\n");
    printf("Densidade demográfica: 8152.94\n");
    printf("PIB (em bilhões): 699.28\n");
    printf("PIB per capita: 56759.74\n");
    printf("Número de pontos turísticos: 50\n");

    // Entrada de dados da primeira carta

    printf("\n\nConstrua sua primeira carta:\n\n");

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Letra do estado: ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

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

    //Entrada de dados da segunda carta

    printf("Construa sua segunda carta:\n\n");

    printf("Nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Letra do estado: ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

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

    // Saída de dados da primeira carta

    printf("[PRIMEIRA CARTA]\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c%.2s\n", estado1 , codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2fkm²\n", area1);
    printf("Densidade demográfica: %.2fhab/km²\n", densidade1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);

    // Saída de dados da segunda carta

    printf("\n[SEGUNDA CARTA]\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c%.2s\n", estado2, codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2fkm²\n", area2);
    printf("Densidade demográfica: %.2fhab/km²\n", densidade2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);

    // Comparações

    printf("\n[RESULTADO DA COMPARACAO]\n\n");
    
    printf("População: %s\n", (população1 > população2) ? cidade1 : cidade2);
    printf("Área: %s\n", (area1 > area2) ? cidade1 : cidade2);
    printf("Densidade demográfica: %s\n", (densidade1 > densidade2) ? cidade1 : cidade2);
    printf("PIB: %s\n", (pib1 > pib2) ? cidade1 : cidade2);
    printf("PIB per capita: %s\n", (pib_per_capita1 > pib_per_capita2) ? cidade1 : cidade2);
    printf("Número de pontos turísticos: %s\n", (pontosturisticos1 > pontosturisticos2) ? cidade1 : cidade2);

    return 0;
}