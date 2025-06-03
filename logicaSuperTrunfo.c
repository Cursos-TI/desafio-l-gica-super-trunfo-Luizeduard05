#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;
    float superPoder2;

    printf("===== Cadastro da Carta 1 =====\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    printf("\n=== Comparação de Cartas ===\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0); // menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
