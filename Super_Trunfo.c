#include <stdio.h>
 
int main() {
    char estado [2];
    char código[10];
    char nome[30];
    int população;
    float área;
    float PIB;
    int pontos; //pontos turísticos da cidade

    printf("Jogo Super Trunfo iniciando...\n");
    printf("Por favor, digite abaixo as informações neccessárias para a primeira carta.\n");

    printf("Qual seu estado (representado por uma letra de A a H)?\n");
    fgets(estado, 2, stdin);

    printf("Qual seu código (representado pela letra e um número de 01 a 04)?\n");
    getchar();
    fgets(código, 10, stdin);

    printf("Qual o nome da sua cidade?\n");
    fgets(nome, 30, stdin);

    printf("Qual a população da sua cidade?\n");
    scanf(" %d", &população);

    printf("Qual a área da sua cidade?\n");
    scanf(" %f", &área);

    printf("Qual o PIB da sua cidade?\n");
    scanf(" %f", &PIB);

    printf("Quais os pontos turísticos da sua cidade?\n");
    scanf(" %d", &pontos);

    printf("Perfeito! Aqui estão as informações da primeira carta:\n"); 
    printf("Nome: %s", nome);
    printf("Estado: %s\n", estado);
    printf("Código: %s", código);
    printf("População: %d\n", população);
    printf("Área: %.2f\n", área);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos: %d\n", pontos);

    printf("Excelente! Agora vamos para as informações da segunda carta!\n");

    char Estado[2];
    char Codigo[10];
    char Nome[30];
    int Populacao;
    float Area;
    float pib;
    int Pontos; // pontos turísticos da cidade

    printf("Qual seu estado (representado por uma letra de A a H)?\n");
    getchar();
    fgets(Estado, 2, stdin);

    printf("Qual seu código (representado pela letra e um número de 01 a 04)?\n");
    getchar();
    fgets(Codigo, 10, stdin);

    printf("Qual o nome da sua cidade?\n");
    getchar();
    fgets(Nome, 30, stdin);

    printf("Qual a população da sua cidade?\n");
    scanf(" %d", &Populacao);

    printf("Qual a área da sua cidade?\n");
    scanf(" %f", &Area);

    printf("Qual o PIB da sua cidade?\n");
    scanf(" %f", &pib);

    printf("Quais os pontos turísticos da sua cidade?\n");
    scanf(" %d", &Pontos);

    printf("Perfeito! Aqui estão as informações da segunda carta:\n");
    printf("Nome: %s", Nome);
    printf("Estado: %s\n", Estado);
    printf("Código: %s", Codigo);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f\n", Area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos: %d\n", Pontos);

    return 0;
}