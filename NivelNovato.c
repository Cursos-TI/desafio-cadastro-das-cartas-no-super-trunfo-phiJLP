#include <stdio.h>
//NIVEL NOVATO
int main() {
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontost1;

char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontost2;

printf("Cadastro da Carta 1\n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Código: ");
scanf(" %s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontost1);

printf("\nCadastro da Carta 2\n");
printf("Estado: ");
scanf(" %c", &estado2);

printf("Código: ");
scanf(" %s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontost2);

printf("\nCadastro da Carta 1\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontost1);

printf("\nCadastro da Carta 2\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontost2);

return 0;
}
