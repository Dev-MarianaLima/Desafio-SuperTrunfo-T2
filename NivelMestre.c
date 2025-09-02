#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontos1;

    // Variáveis da Carta 2
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontos2;

    // --- Carta 1 ---
    
    printf("Carta 1\n" );
   
    printf("Digite o nome da cidade: \n");
    scanf("%s",&nome1);

    printf("Digite a população da cidade: \n");
    scanf("%d",&populacao1);

    printf("Digite a area da cidade (em km²): \n");
    scanf("%f",&area1);

    printf("Digite o PIB da cidade (em milhões): \n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&pontos1);


    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);

    // --- Carta 2 ---
    printf("\nCadastro da Carta 2:\n");
   
    printf("Carta2\n" );
   
    printf("Digite o nome da cidade: \n");
    scanf("%s",&nome2);

    printf("Digite a população da cidade: \n");
    scanf("%d",&populacao2);

    printf("Digite a area da cidade (em km²): \n");
    scanf("%f",&area2);

    printf("Digite o PIB da cidade (em milhões): \n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d",&pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // --- Comparação das Cartas ---
    printf("\n--- Comparação de Cartas ---\n");
    printf("\nPopulação: Carta %d venceu\n", (populacao1 > populacao2 ? 1 : 2));
    printf("Área: Carta %d venceu\n", (area1 > area2 ? 1 : 2));
    printf("PIB: Carta %d venceu\n", (pib1 > pib2 ? 1 : 2));
    printf("Pontos Turísticos: Carta %d venceu\n", (pontos1 > pontos2 ? 1 : 2));
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2 ? 1 : 2));
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2));
    printf("Super Poder: Carta %d venceu\n", (superPoder1 > superPoder2 ? 1 : 2));

    return 0;
}
