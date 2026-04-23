#include <stdio.h>

int main(){

    char estado, estado2, codigo_carta[4], codigo_carta2[4], cidade[50], cidade2[50];
    int pontos_turistico, pontos_turistico2;
    float area, area2, pib, pib2, densidade_populacional, densidade_populacional2, pib_per_capita, pib_per_capita2, super_poder, super_poder2;
    unsigned long int populacao, populacao2;

    //cadastro da carta 1

    printf("Informe o estado carta 1: ");
    scanf(" %c", &estado);
    printf("Informe o código da carta 1: ");
    scanf("%s", codigo_carta);
    printf("Informe o nome da cidade da carta 1: ");
    scanf("%s", cidade);
    printf("Informe a população da carta 1: ");
    scanf("%lu", &populacao);
    printf("Informa a área da carta 1: ");
    scanf("%f", &area);
    printf("Informa o pib da carta 1: ");
    scanf("%f", &pib);
    printf("Informe os pontos turísticos da carta 1: ");
    scanf("%i", &pontos_turistico);

    // calculo densidade populacional e PIB per capita
    densidade_populacional = (float)populacao / area;
    pib_per_capita =  (pib*1e9) / (float)populacao;

    //impressão de dados carta 1
    printf("\n Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu Km² \n", populacao);
    printf("Área: %f \n", area);
    printf("Pib: %f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %i \n", pontos_turistico);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional);
    printf("PIB per Capita: %.2f reais \n \n", pib_per_capita);

    //cadastro da carta 2
    printf("Informe o estado carta 2: ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta 2: ");
    scanf("%s", codigo_carta2);
    printf("Informe o nome da cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Informe a população da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Informa a área da carta 2: ");
    scanf("%f", &area2);
    printf("Informa o pib da carta 2: ");
    scanf("%f", &pib2);
    printf("Informe os pontos turísticos da carta 2: ");
    scanf("%i", &pontos_turistico2);

    // calculo densidade populacional e PIB per capita
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2*1e9) / (float)populacao2;

    //impressão de dados carta 2
    printf("\n Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu Km² \n", populacao2);
    printf("Área: %f \n", area2);
    printf("Pib: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %i \n", pontos_turistico2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n \n", pib_per_capita2);

    // calculo super poder

    super_poder = ((float)populacao + area + pib + (float)pontos_turistico + pib_per_capita) - densidade_populacional;
    super_poder2 = ((float)populacao2 + area2 + pib2 + (float)pontos_turistico2 + pib_per_capita2) - densidade_populacional2;

    printf("Comparação de cartas (Atributo: População): \n");
    printf("Carta 1 - %s (%s): %lu \n", cidade, codigo_carta, populacao);
    printf("Carta 2 - %s (%s): %lu \n", cidade2, codigo_carta2, populacao2);

    // estrutura de decisão para determinar a carta vencedora

    if (populacao > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu! \n",cidade);
    } else if (populacao < populacao2)
    {
        printf("Resultado: Carta 2 (%s) venceu! \n",cidade2);
    } else{
        printf("Resultado: Empate");
    }
    
    


}