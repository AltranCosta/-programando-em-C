int main() {
    char estado1, estado2;
    char codigo_da_carta1[10], codigo_da_carta2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, numero_ponto_turisticos1, numero_ponto_turisticos2;
    float area1, area2, pib1, pib2;

    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);  // Corrigido com espaço antes do %c

    printf("Digite o Código da carta 1: ");
    scanf(" %s", codigo_da_carta1);

    printf("Digite o nome da Cidade da carta 1: ");
    scanf(" %s", nome_cidade1);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

     printf("Digite a área da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &numero_ponto_turisticos1);

    //coletando dados da carta 2

    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta 2: ");
    scanf(" %s", codigo_da_carta2);

    printf("Digite o nome da Cidade da carta 2: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &numero_ponto_turisticos2);


    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d Pessoas\n", populacao1);
    printf("Área: %.3f KM²\n", area1);
    printf("PIB: %.3f Bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", numero_ponto_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d Pessoas\n", populacao2);
    printf("Área: %.3f KM²\n", area2);
    printf("PIB: %.3f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", numero_ponto_turisticos2);

    return 0;
}
