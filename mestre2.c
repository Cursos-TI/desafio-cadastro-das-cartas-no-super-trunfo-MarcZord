#include <stdio.h>

int main()
{

    // Menu de introdução
    int opcao;

    printf("[SEJA BEM-VINDO AO SUPER TRUNFO]\n\n");

    printf("Escolha uma opção\n");

    printf("1.Jogar\n");
    printf("2.Regras\n");
    printf("3.Sair\n\n");

    scanf("%d", &opcao);

    switch (opcao){
    case 1:
    //Jogo SUPER TRUNFO

        // Váriaveis cartas
        char estado1, estado2;
        char cidade1[100], cidade2[100];
        char codigo1[4], codigo2[4];
        int população1, população2;
        int pontosturisticos1, pontosturisticos2;
        float area1, area2;
        float pib1, pib2;

    //Entrada de dados da primeira carta

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
    
    //Váriaveis menu interativo

        int escolha1, escolha2;
        float valor1, valor2;
        char atributo1[20], atributo2[20];
    
    //Menu interativo para comparação de atributos
        
        //Menu primeira carta
        printf("Escolha um atributo da primeira carta: %s\n\n", cidade1);

        printf("1.População\n");
        printf("2.Área\n");
        printf("3.Densidade demográfica\n");
        printf("4.Pib\n");
        printf("5.Pib per capita\n");
        printf("6.Pontos turísticos\n");

        scanf("%d", &escolha1);

      switch (escolha1)
      {
      case 1: valor1 = população1;

      printf("[POPULAÇÃO]\n%s%d\n\n", cidade1, população1);
      
      break;
      case 2: valor1 = area1;

      printf("[ÁREA]\n%s%.2f\n\n", cidade1, area1);
      
      break;
      case 3: valor1 = densidade1;

      printf("[DENSIDADE DEMOGRÁFICA]\n%s%.2f\n\n", cidade1, densidade1);

      break;
      case 4: valor1 = pib1;

      printf("[PIB]\n%s%.2f\n\n", cidade1, pib1);

      break;
      case 5: valor1 = pib_per_capita1;

      printf("[PIB PER CAPITA]\n%s%.2f\n\n", cidade1, pib_per_capita1);

      break;
      case 6: valor1 = pontosturisticos1;

      printf("[PONTOS TURÍSTICOS]\n%s%.2f\n\n", cidade1, pontosturisticos1);

      break;
      default: printf("OPÇÃO INVÁLIDA!!!");

      break;
      }
      
        
      //Menu segunda carta
      printf("\nEscolha um atributo da segunda carta: %s\n\n", cidade2);

      printf("1.População\n");
      printf("2.Área\n");
      printf("3.Densidade demográfica\n");
      printf("4.Pib\n");
      printf("5.Pib per capita\n");
      printf("6.Pontos turísticos\n");

      scanf("%d", &escolha2);

      switch (escolha2)
      {
      case 1: valor2 = população2; 

      printf("[POPULAÇÃO]\n%s%d\n\n", cidade2, população2);

      break;
      case 2: valor2 = area2;

      printf("[ÁREA]\n%s%.2f\n\n", cidade2, area2);

      break;
      case 3: valor2 = densidade2;

      printf("[DENSIDADE DEMOGRÁFICA]\n%s%.2f\n\n", cidade2, densidade2);

      break;
      case 4: valor2 = pib2;

      printf("[PIB]\n%s%.2f\n\n", cidade2, pib2);

      break;
      case 5: valor2 = pib_per_capita2;

      printf("[PIB PER CAPITA]\n%s%.2f\n\n", cidade2, pib_per_capita2);

      break;
      case 6: valor2 = pontosturisticos2;
      
      printf("[PONTOS TURÍSTICOS]\n%s%.2f\n\n", cidade2, pontosturisticos2);

      break;
      default: printf("OPÇÃO INVÁLIDA!!!");

      break;
      }

      //Comparações

      if (escolha1 == 3){
        if (valor1 == valor2){
            printf("EMPATE");
        } else if (valor1 < valor2) {
            printf("Vencedor: %s\n", cidade1);
        } else {
            printf("Vencedor: %s\n", cidade2);
        }
      } else if (escolha2 == 3){
        if (valor1 == valor2){
            printf("EMPATE");
        } else if (valor1 > valor2) {
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("Vencedor: %s\n", cidade1);
        }
      } else {
        if (valor1 > valor2){ 
            printf("Vencedor: %s\n", cidade1);
        } else if (valor1 < valor2){
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("EMPATE\n");
        }
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