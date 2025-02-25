#include <stdio.h>

int main() {
    char estado1[50];
    char codcarta1[5];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numtur1;

    char estado2[50];
    char codcarta2[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numtur2;


    printf("Este é o jogo Super Trunfo da Hera.\n");
    printf("Iremos começar pelas informações da primeira carta, levando em consideração que o jogo não aceita Cidades e Estados com nome composto.\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado1);

    printf("Digite o código da carta(use a letra inicial do Estado com uma terminação 01-04, ex: A01):\n");
    scanf("%s", &codcarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomecidade1);

    printf("Digite a população:\n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &numtur1);

    printf("Dados da primeira seleção:\nEstado: %s\nCódigo da Carta: %s\nNome da cidade: %s\nPopulação: %i\nÁrea da cidade: %.2f\nPIB da cidade: %.2f\nNúmero de pontos turísticos: %i\n", estado1, codcarta1, nomecidade1, populacao1, area1, pib1, numtur1);

    // Partindo para a seleção da segunda cidade

    printf("Agora iremos definir as informações da segunda cidade, levando em consideração que o jogo não aceita Cidades e Estados com nome composto.\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta(use a letra inicial do Estado com uma terminação 01-04, ex: A01):\n");
    scanf("%s", &codcarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomecidade2);

    printf("Digite a população:\n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%i", &numtur2);

    printf("Dados da segunda seleção:\nEstado: %s\nCódigo da Carta: %s\nNome da cidade: %s\nPopulação: %i\nÁrea da cidade: %.2f\nPIB da cidade: %.2f\nNúmero de pontos turísticos: %i\n", estado2, codcarta2, nomecidade2, populacao2, area2, pib2, numtur2);




}