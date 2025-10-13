#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {

    // Declaracoes de variaveis para Ananindeua:
    int populacaoAnanindeua, areaAnanindeua, pibAnanindeua, pontTuristicoAnanindeua, densiDemograficaAnanindeua, pibCapitaAnanindeua;
    int resultado1Ananindeua, resultado2Ananindeua;
    
    // Declaracoes de variaveis para Belem:
    int populacaoBelem, areaBelem, pibBelem, pontTuristicoBelem, densiDemograficaBelem, pibCapitaBelem;
    int resultado1Belem, resultado2Belem;

    // Declaracoes e variaveis em gerais
    int comparar1, comparar2;
    char primeiroAtributo, segundoAtributo;
    char *atributo1, *atributo2;
    char populacao[20] = "População", area[50] = "Área", pib[20] = "PIB", pontTuristico[50] = "Pontos Turísticos",
    densiDemografica[50] = "Densidade Demográfica", pibCapita[50] = "PIB Per Capita";

    srand (time(0));

    // Tornando os valores aleatorios de cada atributo:
    populacaoAnanindeua = rand() % 100 + 1;
    populacaoBelem = rand() % 100 + 1;
    areaAnanindeua = rand() % 100 + 1;
    areaBelem = rand() % 100 + 1;
    pibAnanindeua = rand() % 100 + 1;
    pibBelem = rand() % 100 + 1;
    pontTuristicoAnanindeua = rand() % 100 + 1;
    pontTuristicoBelem = rand() % 100 + 1;
    densiDemograficaAnanindeua = rand() % 100 + 1;
    densiDemograficaBelem = rand() % 100 + 1;
    pibCapitaAnanindeua = rand() % 100 + 1;
    pibCapitaBelem = rand() % 100 + 1;

    // Exibicao do Primeiro manu de escolha para o usuario:
    printf("**Escolha o atributo para comparar**\n");

    printf("P. Populacao\n");
    printf("A. Area\n");
    printf("B. PIB\n");
    printf("N. Num.Pontos Turisticos\n");
    printf("D. Densidade Demografica\n");
    printf("C. PIB Per Capita\n");
    printf("Escolha seu primeiro atributo:");
    scanf("%c", &primeiroAtributo);

    // Switch do Primeiro menu de escolha:
    switch (primeiroAtributo) {
        case 'P':
        case 'p':
            printf("\nVocê escolheu a População como seu primeiro Atributo\n");
            comparar1 = populacaoAnanindeua > populacaoBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
            resultado1Ananindeua = populacaoAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
            resultado1Belem = populacaoBelem; // Declaracao para imprimir o resultado aleatorio Belem
            atributo1 = populacao; // Declaracao para especificar o atributo escolhido
        break;
        case 'A':
        case 'a':
            printf("\nVocê escolheu a Área como seu primeiro Atributo\n");
            comparar1 = areaAnanindeua > areaBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
            resultado1Ananindeua = areaAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
            resultado1Belem = areaBelem; // Declaracao para imprimir o resultado aleatorio Belem
            atributo1 = area; // Declaracao para especificar o atributo escolhido
        break;
        case 'B':
        case 'b':
            printf("\nVocê escolheu o PIB como seu primeiro Atributo\n");
            comparar1 = pibAnanindeua > pibBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
            resultado1Ananindeua = pibAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
            resultado1Belem = pibBelem; // Declaracao para imprimir o resultado aleatorio Belem
            atributo1 = pib; // Declaracao para especificar o atributo escolhido
        break;
        case 'N':
        case 'n':
            printf("\nVocê escolheu os Pontos Turísticos como seu primeiro Atributo\n");
            comparar1 = pontTuristicoAnanindeua > pontTuristicoBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
            resultado1Ananindeua = pontTuristicoAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
            resultado1Belem = pontTuristicoBelem; // Declaracao para imprimir o resultado aleatorio Belem
            atributo1 = pontTuristico; // Declaracao para especificar o atributo escolhido
        break;
        case 'D':
        case 'd':
            printf("\nVocê escolheu a Densidade Demográfica como seu primeiro Atributo\n");
            comparar1 = densiDemograficaAnanindeua < densiDemograficaBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
            resultado1Ananindeua = densiDemograficaAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
            resultado1Belem = densiDemograficaBelem; // Declaracao para imprimir o resultado aleatorio Belem
            atributo1 = densiDemografica; // Declaracao para especificar o atributo escolhido
        break;
        case 'C':
        case 'c':
            printf("\nVocê escolheu PIB Per Capita como seu primeiro Atributo\n");
            comparar1 = pibCapitaAnanindeua > pibCapitaBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
            resultado1Ananindeua = pibCapitaAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
            resultado1Belem = pibCapitaBelem; // Declaracao para imprimir o resultado aleatorio Belem
            atributo1 = pibCapita; // Declaracao para especificar o atributo escolhido
        break;
        default:
            printf("\n##Você escolheu uma opcao invalida!!##\n");

            return 0;
        break;
    }

    // Exibicao de Segundo menu de escolha para o usuario:
    printf("\n**Escolha o seu segundo atributo**\n");
    printf("**Escolha um atributo diferente do primeiro!**\n");

    printf("P. Populacao\n");
    printf("A. Area\n");
    printf("B. PIB\n");
    printf("N. Num.Ponos Turisticos\n");
    printf("D. Densidade Demografica\n");
    printf("C. PIB Per Capita\n");
    printf("Escolha seu segundo atributo:");
    scanf(" %c", &segundoAtributo);

    // Sistema de seguranca para nao ocorrer a mesma escolha:
    if (toupper(segundoAtributo) == toupper(primeiroAtributo)) { // Identifiquei o erro de que se o usuario escolhesse "A"(Maiusculo) na primeira escolha e "a"(Minuscula) na segunda escolha,
        printf("\n##Voce escolheu o mesmo atributo!!##");        // o sistema encarava como opcoes destintas. Foi ai que descobri a biblioteca "<ctype.h>" e o "toupper" para evitar esse erro.

        return 0;
    }
    else {
        // Switch do Segundo menu de escolha:
        switch (segundoAtributo) {
            case 'P':
            case 'p':
                printf("\nVocê escolheu Populacao como seu segundo Atributo\n");
                comparar2 = populacaoAnanindeua > populacaoBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
                resultado2Ananindeua = populacaoAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
                resultado2Belem = populacaoBelem; // Declaracao para imprimir o resultado aleatorio Belem
                atributo2 = populacao;
            break;
            case 'A':
            case 'a':
                printf("\nVocê escolheu Area como seu segundo Atributo\n");
                comparar2 = areaAnanindeua > areaBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
                resultado2Ananindeua = areaAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
                resultado2Belem = areaBelem; // Declaracao para imprimir o resultado aleatorio Belem
                atributo2 = area; // Declaracao para especificar o atributo escolhido
            break;
            case 'B':
            case 'b':
                printf("\nVocê escolheu PIB como seu segundo Atributo\n");
                comparar2 = pibAnanindeua > pibBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
                resultado2Ananindeua = pibAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
                resultado2Belem = pibBelem; // Declaracao para imprimir o resultado aleatorio Belem
                atributo2 = pib; // Declaracao para especificar o atributo escolhido
            break;
            case 'N':
            case 'n':
                printf("\nVocê escolheu Pontos Turisticos como seu segundo Atributo\n");
                comparar2 = pontTuristicoAnanindeua > pontTuristicoBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
                resultado2Ananindeua = pontTuristicoAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
                resultado2Belem = pontTuristicoBelem; // Declaracao para imprimir o resultado aleatorio Belem
                atributo2 = pontTuristico; // Declaracao para especificar o atributo escolhido
            break;
            case 'D':
            case 'd':
                printf("\nVocê escolheu Densidade Demografica como seu segundo Atributo\n");
                comparar2 = densiDemograficaAnanindeua < densiDemograficaBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
                resultado2Ananindeua = densiDemograficaAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
                resultado2Belem = densiDemograficaBelem; // Declaracao para imprimir o resultado aleatorio Belem
                atributo2 = densiDemografica; // Declaracao para especificar o atributo escolhido
            break;
            case 'C':
            case 'c':
                printf("\nVocê escolheu PIB Per Capita como seu segundo Atributo\n");
                comparar2 = pibCapitaAnanindeua > pibCapitaBelem ? 1 : 0; // Operador ternario para decidir qual cidade ganhou nos atributos
                resultado2Ananindeua = pibCapitaAnanindeua; // Declaracao para imprimir o resultado aleatorio de Ananindeua
                resultado2Belem = pibCapitaBelem; // Declaracao para imprimir o resultado aleatorio Belem
                atributo2 = pibCapita; // Declaracao para especificar o atributo escolhido
            break;
            default:
                printf("\n##Você escolheu uma opcao invalida!!##\n");

                return 0;
            break;
        }
    }

    // Exibicao do resultado da Primeira comparacao entre as cidades:
    printf("\n---------------------------------------------->\n");
    printf("Resultado da primeira ecolha de Atributo (%s):\n", atributo1);
    printf("Ananindeua(Você): %d (%d)\n", resultado1Ananindeua, comparar1 == 1 ? 1 : 0);
    printf("Belém: %d (%d)\n", resultado1Belem, comparar1 == 1 ? 0 : 1);

    // Exibicao do resultado da Segunda comparacao entre as cidades:
    printf("\nResultado da Segunda escolha de Atributo (%s):\n", atributo2);
    printf("Ananindeua(Você): %d (%d)\n", resultado2Ananindeua, comparar2 == 1 ? 1 : 0);
    printf("Belém: %d (%d)\n", resultado2Belem, comparar2 == 1 ? 0 : 1);

    // If-Else que determina a cidade vencedora ou se houve empate:
    if (comparar1 && comparar2) {
        printf("\n**Ananindeua(Você) venceu!!**");
    }
    else if (comparar1 != comparar2) {
        printf("\n##Houve um empate entre Ananindeua(Você) e Belém!!##");
    }
    else {
        printf("\n**Belém venceu!!**");
    }

    return 0;
}