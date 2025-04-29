#include <stdio.h>

int main(){
// Declaração das variáveis para armazenar os dados das cartas
char estado1, estado2;
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2, pib1, pib2;
int pontos1, pontos2;
float densidade1, densidade2;
float pibPercapita1, pibPercapita2;

//// Leitura dos dados da primeira carta
printf("Informe os dados da Carta 1:\n");

printf("Estado (A a H): ");
scanf(" %c", &estado1);

printf("Codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf(" %[^\n]", cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (em km²): ");
scanf("%f", &area1);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Números de pontos Turísticos: ");
scanf("%d", &pontos1);


//// Leitura dos dados da Segunda carta
printf("\nInforme os dados da Carta 2:\n");

printf("Estado (A a H): ");
scanf(" %c", &estado2);

printf("Codigo da carta (ex: B03): ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf(" %[^\n]", cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Números de pontos Turísticos: ");
scanf("%d", &pontos2);

//Cálculo da densidade populacional e PIB per Capita

densidade1 = populacao1 / area1;
pibPercapita1 = (pib1 * 1000000000) / populacao1; //Convertendo PIB de bilhoes para reais

densidade2 = populacao2 / area2;
pibPercapita2 = (pib1 * 1000000000) / populacao2;




 //// Exibição das cartas cadastradas
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado1);
 printf("Código: %s\n",codigo1);
 printf("Nome da Cidade: %s\n",cidade1);
 printf("População: %d\n",populacao1);
 printf("Área: %.2f bilhões de reais\n",area1);
 printf("PIB: %.2f bilhões de reais\n", pib1);
 printf("Número de Pontos Turísticos: %d\n",pontos1);
 printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
 printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
 
 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da Cidade: %s\n", cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", pontos2);
 printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
 printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

 return 0;


}
