#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Declaração das variáveis para a primeira carta
    char estado[10], codigocarta[50], nomecidade[50];
    int pontosturisticos;
    unsigned long int populacao;
    float area, pib;
    int super_poder;

    // Declaração das variáveis para a segunda carta
    char estado2[10], codigocarta2[50], nomecidade2[50];
    int pontosturisticos2;
    unsigned long int populacao2;
    float area2, pib2;
    int super_poder2;

    // Entrada de dados para a primeira carta
    printf("Registro de dados da Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao);
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    printf("\n");

    // Cálculo da densidade populacional e PIB per capita
    float densidade_populacional = (float) populacao / area;
    float pib_capita = (float) pib / populacao;

    // Entrada de dados para a segunda carta
    printf("Registro de dados da Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da densidade populacional e PIB per capita da segunda carta
    float densidade_populacional2 = (float) populacao2 / area2;
    float pib_capita2 = (float) pib2 / populacao2;

    // Exibição dos dados da primeira carta
    printf("\nDados da Carta 1:");
    printf("\nEstado: %s", estado);
    printf("\nCodigo da Carta: %s", codigocarta);
    printf("\nNome da Cidade: %s", nomecidade);
    printf("\nPopulacao: %lu", populacao);
    printf("\nArea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nPontos Turisticos: %d", pontosturisticos);
    printf("\nDensidade Populacional: %.2f Hab/KM²", densidade_populacional);
    printf("\nPIB per Capita: %.2f Reais\n", pib_capita);
    
    // Exibição dos dados da segunda carta 
    printf("\nDados da Carta 2:");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo da Carta: %s", codigocarta2);
    printf("\nNome da Cidade: %s", nomecidade2);
    printf("\nPopulacao: %lu", populacao2);
    printf("\nArea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nPontos Turisticos: %d", pontosturisticos2);
    printf("\nDensidade Populacional: %.2f Hab/KM²", densidade_populacional2);
    printf("\nPIB per Capita: %.2f Reais\n", pib_capita2);

    // Comparacao de cartas:
    char cartavencedora[30] = "carta 1", cartavencedora2[30] = "carta 2";
    float densidade_populacional_menor = densidade_populacional < densidade_populacional2 ? densidade_populacional : densidade_populacional2;

    super_poder = (unsigned long)populacao + area + pib + pontosturisticos + pib_capita + densidade_populacional_menor;
    super_poder2 = (unsigned long)populacao2 + area2 + pib2 + pontosturisticos2 + pib_capita2 + densidade_populacional_menor;

    printf("\nComparacao de Cartas:\n");
    printf("populacao: %s venceu (%d) \n", populacao > populacao2 ? cartavencedora : cartavencedora2, populacao > populacao2);
    printf("area: %s venceu (%d) \n", area > area2 ? cartavencedora : cartavencedora2, area > area2);
    printf("pib: %s venceu (%d) \n", pib > pib2 ? cartavencedora : cartavencedora2, pib > pib2);
    printf("pontosturisticos: %s venceu (%d) \n", pontosturisticos > pontosturisticos2 ? cartavencedora : cartavencedora2, pontosturisticos > pontosturisticos2);
    printf("densidade populacional: %s venceu (%d) \n", densidade_populacional < densidade_populacional2 ? cartavencedora : cartavencedora2, densidade_populacional < densidade_populacional2);
    printf("pib per capita: %s venceu (%d) \n", pib_capita > pib_capita2 ? cartavencedora : cartavencedora2, pib_capita > pib_capita2);

    //Super Poder Vencedor:
    printf("\nSuper Poder: %s venceu (%d) \n", super_poder > super_poder2 ? cartavencedora : cartavencedora2, super_poder > super_poder2);

    //Comparacao de atributo:
    printf("\nCarta vencedora (Atributo: Populacao): \n");
    printf("Carta 1 - %s (%s): %lu \n", nomecidade, estado, populacao);
    printf("Carta 2 - %s (%s): %lu \n", nomecidade2, estado2, populacao2);

    //Condicao para escolher a Carta com atributo vencedor:
    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!", nomecidade);
    }
    else {
        printf("Resultado: Carta 2 (%s) venceu!", nomecidade2);
    }

    return 0;
}
