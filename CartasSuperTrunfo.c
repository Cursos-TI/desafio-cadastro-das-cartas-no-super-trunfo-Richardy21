#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada - Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição
    printf("\n--- Comparação de Atributos ---\n");

    printf("População: ");
    if (populacao1 > populacao2)
        printf("Carta 1 ganhou\n");
    else
        printf("Carta 2 ganhou\n");

    printf("Área: ");
    if (area1 > area2)
        printf("Carta 1 ganhou\n");
    else
        printf("Carta 2 ganhou\n");

    printf("PIB: ");
    if (pib1 > pib2)
        printf("Carta 1 ganhou\n");
    else
        printf("Carta 2 ganhou\n");

    printf("Pontos turísticos: ");
    if (pontos1 > pontos2)
        printf("Carta 1 ganhou\n");
    else
        printf("Carta 2 ganhou\n");

    printf("Densidade populacional: ");
    if (densidade1 < densidade2)
        printf("Carta 1 ganhou\n");
    else
        printf("Carta 2 ganhou\n");

    printf("PIB per capita: ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 ganhou\n");
    else
        printf("Carta 2 ganhou\n");

    return 0;
}
