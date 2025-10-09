#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Variaveis gerais
    int escolhaBelem, escolhaAnanindeua;
    int ataqueBelem, ataqueAnanindeua;
    int densidadeDemograficaBelem;
    int densidadeDemograficaAnanindeua;
    int valorBelem, valorAnanindeua;
    
    srand (time(0));

    // Menu de escolha do atributo para ataque
    printf("**Escolha um atributo de ataque**\n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Numero de pontos turisticos \n");
    printf("5. Densidade demografica \n");
    printf("6. PIB per capita \n");
    printf("Escolha: ");
    
    if (scanf("%d", &escolhaBelem) != 1 || escolhaBelem < 1 || escolhaBelem > 6) {
        printf("\n##Escolha Invalida! Programa encerrado.##\n");
        return 0;
    }
    
    // Variaval densidade demográfica
    densidadeDemograficaBelem = rand() % 987654321 + 1;
    densidadeDemograficaAnanindeua = rand() % 987654321 + 1;
    
    // Variavel ataque
    ataqueBelem = rand() % 987654321 + 1;
    ataqueAnanindeua = rand() % 987654321 + 1;


    // Exibicaoo dos atributos de Belem
    switch (escolhaBelem) {
        case 1:
            printf("\nAtributo de ataque: Populacao - Belém: %d Habitantes \n", ataqueBelem);
            valorBelem = ataqueBelem;
        break;
        case 2:
            printf("\nAtributo de ataque: Area - Belém: %d km² \n", ataqueBelem);
            valorBelem = ataqueBelem;
        break;
        case 3:
            printf("\nAtributo de ataque: PIB - Belém: %d Bilhões de reais \n", ataqueBelem);
            valorBelem = ataqueBelem;
        break;
        case 4:
            printf("\nAtributo de ataque: Pontos Turisticos - Belém: %d \n", ataqueBelem);
            valorBelem = ataqueBelem;
        break;
        case 5:
            printf("\nAtributo de ataque: Densidade Demografica - Belém: %d Hab/KM² \n", densidadeDemograficaBelem);
            valorBelem = densidadeDemograficaBelem; 
        break;
        case 6:
            printf("\nAtributo de ataque: PIB per Capita - Belém: R$%d \n", ataqueBelem);
            valorBelem = ataqueBelem;
        break;
    }

    // Exibição dos atributos de Ananindeua
    escolhaAnanindeua = escolhaBelem;

    switch (escolhaAnanindeua) {
        case 1:
            printf("Atributo de ataque: Populacao - Ananindeua: %d Habitantes \n", ataqueAnanindeua);
            valorAnanindeua = ataqueAnanindeua;
        break;
        case 2:
            printf("Atributo de ataque: Area - Ananindeua: %d km² \n", ataqueAnanindeua);
            valorAnanindeua = ataqueAnanindeua;
        break;
        case 3:
            printf("Atributo de ataque: PIB - Ananindeua: %d Bilhões de reais \n", ataqueAnanindeua);
            valorAnanindeua = ataqueAnanindeua;
        break;
        case 4:
            printf("Atributo de ataque: Pontos Turisticos - Ananindeua: %d \n", ataqueAnanindeua);
            valorAnanindeua = ataqueAnanindeua;
        break;
        case 5:
            printf("Atributo de ataque: Densidade Demografica - Ananindeua: %d Hab/KM² \n", densidadeDemograficaAnanindeua);
            valorAnanindeua = densidadeDemograficaAnanindeua;
        break;
        case 6:
            printf("Atributo de ataque: PIB per Capita - Ananindeua: R$%d \n", ataqueAnanindeua);
            valorAnanindeua = ataqueAnanindeua;
        break;
    }


    // Ressultado da vitória
    printf("\n###Resultado do Duelo###");
    
    // Vencedor densidade demográfica
    if (escolhaBelem == 5) {
        if (valorBelem < valorAnanindeua) {
            printf("***Belém venceu!! (Menor densidade)***\n");
        }
        else if (valorAnanindeua < valorBelem) {
            printf("\n***Ananindeua venceu!! (Menor densidade)***\n");
        }
        else {
            printf("\n##Houve um empate entre as duas cidades!!##\n");
        }
    }
    
    // Vencedor dos os outros atributos
    else {
        if (valorBelem > valorAnanindeua) {
            printf("\n***Belém venceu!! (Maior valor)***\n");
        }
        else if (valorAnanindeua > valorBelem) {
            printf("\n***Ananindeua venceu!! (Maior valor)***\n");
        }
        else {
            printf("\n##Houve um empate entre as duas cidades!!##\n");
        }
    }

    return 0;
}