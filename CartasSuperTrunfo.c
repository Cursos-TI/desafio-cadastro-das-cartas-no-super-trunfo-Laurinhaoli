#include <stdio.h>

int main() {
    char nome[50];
    float populacao;
    float area;
    float pib;
    float idh;

    printf("=== Cadastro de Carta - Super Trunfo: Países ===\n");

    printf("Nome do país: ");
    scanf(" %[^\n]", nome);  // 

    printf("População (em milhões): ");
    scanf("%f", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &pib);

    printf("IDH (de 0 a 1): ");
    scanf("%f", &idh);

    printf("\n=== Carta Cadastrada ===\n");
    printf("País: %s\n", nome);
    printf("População: %.2f milhões\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f trilhões de dólares\n", pib);
    printf("IDH: %.2f\n", idh);

    return 0;
}