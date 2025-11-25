#include <stdio.h>

int main() {
    //dados carta1
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[20];
    float numeroHabitantes1;
    float areaCidade1;
    float PIB1;
    int numeroPontosTuristicos1;

    //dados carta2
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[20];
    float numeroHabitantes2;
    float areaCidade2;
    float PIB2;
    int numeroPontosTuristicos2;

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
    scanf("%f", &numeroHabitantes1);

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
    scanf("%f", &numeroHabitantes2);

    //area da cidade
    printf("Digite o área (km²) da cidade:\n");
    scanf("%f", &areaCidade2);

    //PIB
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &numeroPontosTuristicos2);

    // >> Saída de dados:
    printf(
        "\n ======== Carta 1: =======\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %.3f\n"
        "Área: %.3f km²\n"
        "PIB: %.3f\n"
        "Número de pontos turísticos: %d\n",
        estado1, codigoCarta1, nomeCidade1, numeroHabitantes1, areaCidade1, PIB1, numeroPontosTuristicos1
    );
    printf(
        "\n ======= Carta 2: =======\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %.3f\n"
        "Área: %.3f km²\n"
        "PIB: %.3f\n"
        "Número de pontos turísticos: %d\n",
        estado2, codigoCarta2, nomeCidade2, numeroHabitantes2, areaCidade2, PIB2, numeroPontosTuristicos2
    );
}