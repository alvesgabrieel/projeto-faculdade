#include <stdio.h>

//funções para calculos
float calculaDensidadePopulacional(float populacao, float area) {
    return populacao/area;
};

float calculaPIBPerCapita(float PIB, float populacao) {
    return PIB/populacao;
};

float calculaSuperPoder(
    unsigned long int populacao, 
    float area, 
    float PIB, 
    int pontosTuristicos, 
    float PIBPerCapita, 
    float densidadePopulacional
) {
    return (float)populacao + area + PIB + (float)pontosTuristicos + PIBPerCapita + (1/densidadePopulacional);
};


int main() {
    //dados carta1
    char estado1, codigoCarta1[4], nomeCidade1[20], estado2, codigoCarta2[4], nomeCidade2[20];
    float areaCidade1, PIB1, areaCidade2, PIB2, densidadePop1, densidadePop2, PIBPerCapita1, PIBPerCapita2, superPoder1, superPoder2;
    int numeroPontosTuristicos1, numeroPontosTuristicos2;
    unsigned long int numeroHabitantes1, numeroHabitantes2;
    const char* vencedor[2] = {
        "Carta 2 venceu",
        "Carta 1 venceu"
    };

    printf("\n ======== Bem-vindo ao sistema de super trufo de cidades! ======== \n");
    printf("\n ==== Vamos cadastrar 2 cartas, agora digite os dados da carta 1 ====\n");

    //Estado
    printf("Digite o Estado da carta (letra):\n");
    scanf(" %c", &estado1);

    //código carta - poderia ser gerado automaticamente, o usuário pode digitar errado.
    printf("Digite o Código da carta (3 caracteres):\n");
    scanf("%s", codigoCarta1);

    //nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade1);

    //numero habitantes
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &numeroHabitantes1);

    //area da cidade
    printf("Digite o área (km²) da cidade:\n");
    scanf("%f", &areaCidade1);

    //PIB
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &numeroPontosTuristicos1);

    //carta 2
    printf("\n ==== Carta 1 cadastra com sucesso! ==== \n");

    printf("\n ==== Agora digite os dados da carta 2 ==== \n");

    //Estado
    printf("Digite o Estado da carta (letra):\n");
    scanf(" %c", &estado2);

    //código carta
    printf("Digite o Código da carta (3 caracteres):\n");
    scanf("%s", codigoCarta2);

    //nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade2);

    //numero habitantes
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &numeroHabitantes2);

    //area da cidade
    printf("Digite o área (km²) da cidade:\n");
    scanf("%f", &areaCidade2);

    //PIB
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &numeroPontosTuristicos2);

    //calculos da densidade populacional
    densidadePop1 = calculaDensidadePopulacional(numeroHabitantes1, areaCidade1);
    densidadePop2 = calculaDensidadePopulacional(numeroHabitantes2, areaCidade2);

    //calculos do PIB per Capita
    PIBPerCapita1 = calculaPIBPerCapita(PIB1, numeroHabitantes1);
    PIBPerCapita2 = calculaPIBPerCapita(PIB2, numeroHabitantes2);

    //Calculo do superpoder
    superPoder1 = calculaSuperPoder(numeroHabitantes1, areaCidade1, PIB1, numeroPontosTuristicos1, PIBPerCapita1, densidadePop1);
    superPoder2 = calculaSuperPoder(numeroHabitantes2, areaCidade2, PIB2, numeroPontosTuristicos2, PIBPerCapita2, densidadePop2);

    // >> Saída de dados:
    printf(
        "\n ======== Carta 1: =======\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %lu\n"
        "Área: %.3f km²\n"
        "PIB: %.3f\n"
        "Número de pontos turísticos: %d\n"
        "Densidade Populacional: %.3f hab/km²\n"
        "PIB per Capita: %.3f reais\n",
        estado1, codigoCarta1, nomeCidade1, numeroHabitantes1, areaCidade1, PIB1, numeroPontosTuristicos1, densidadePop1, PIBPerCapita1
    );
    printf(
        "\n ======= Carta 2: =======\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %lu\n"
        "Área: %.3f km²\n"
        "PIB: %.3f\n"
        "Número de pontos turísticos: %d\n"
        "Densidade Populacional: %.3f hab/km²\n"
        "PIB per Capita: %.3f reais\n",
        estado2, codigoCarta2, nomeCidade2, numeroHabitantes2, areaCidade2, PIB2, numeroPontosTuristicos2, densidadePop2, PIBPerCapita2
    );

    printf("\n ===== Duelo entre Carta 1 (%s) e carta 2: (%s) ====== \n", nomeCidade1, nomeCidade2);
    printf("\n Comparação das Cartas:\n");
    // - sem if/else é osso kkk
    printf("Populaçao: %s (%d)\n",
        vencedor[numeroHabitantes1 > numeroHabitantes2],
        numeroHabitantes1 > numeroHabitantes2
    );
    printf("Área: %s (%d)\n",
        vencedor[areaCidade1 > areaCidade2],
        areaCidade1 > areaCidade2
    );
    printf("PIB: %s (%d)\n",
       vencedor[PIB1 > PIB2],
       PIB1 > PIB2
    );
    printf("Pontos Turísticos: %s (%d)\n",
       vencedor[numeroPontosTuristicos1 > numeroPontosTuristicos2],
       numeroPontosTuristicos1 > numeroPontosTuristicos2
    );
    printf("Densidade: %s (%d)\n",
       vencedor[densidadePop1 < densidadePop2],
       densidadePop1 < densidadePop2
    );
    printf("PIB per Capita: %s (%d)\n",
       vencedor[PIBPerCapita1 > PIBPerCapita2],
       PIBPerCapita1 > PIBPerCapita2
    );
    printf("Super Poder: %s (%d)\n",
       vencedor[superPoder1 > superPoder2],
       superPoder1 > superPoder2);
}