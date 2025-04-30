#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações
    int vitoriaPopulacao = populacao1 > populacao2;
    int vitoriaArea = area1 > area2;
    int vitoriaPib = pib1 > pib2;
    int vitoriaPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int vitoriaDensidade = densidade1 < densidade2;
    int vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int vitoriaSuperPoder = superPoder1 > superPoder2;

    // Resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vitoriaPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", vitoriaArea);
    printf("PIB: Carta 1 venceu (%d)\n", vitoriaPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vitoriaPontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vitoriaDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vitoriaPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vitoriaSuperPoder);

    return 0;
}
