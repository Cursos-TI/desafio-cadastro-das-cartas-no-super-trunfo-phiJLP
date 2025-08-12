#include <stdio.h>
//NIVEL MESTRE
int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    double area1, pib1;
    int pontost1;
    double densidade1, pib_capital1, super_poder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    double area2, pib2;
    int pontost2;
    double densidade2, pib_capital2, super_poder2;

    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost1);

    densidade1 = (double)populacao1 / area1;
    pib_capital1 = pib1 / (double)populacao1;
    super_poder1 = (double)populacao1 + area1 + pib1 + pontost1 + pib_capital1 + (1.0 / densidade1);

    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost2);

    densidade2 = (double)populacao2 / area2;
    pib_capital2 = pib2 / (double)populacao2;
    super_poder2 = (double)populacao2 + area2 + pib2 + pontost2 + pib_capital2 + (1.0 / densidade2);

    printf("\nCadastro da Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2lf\n", area1);
    printf("PIB: %.2lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2lf\n", densidade1);
    printf("PIB Capital: %.2lf\n", pib_capital1);
    printf("Super Poder: %.2lf\n", super_poder1);

    printf("\nCadastro da Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2lf\n", area2);
    printf("PIB: %.2lf\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2lf\n", densidade2);
    printf("PIB Capital: %.2lf\n", pib_capital2);
    printf("Super Poder: %.2lf\n", super_poder2);

    printf("\nResultados das Comparações:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontost1 > pontost2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB Capital: %d\n", pib_capital1 > pib_capital2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}
