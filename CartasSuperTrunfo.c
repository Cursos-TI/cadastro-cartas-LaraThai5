#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1;
  char codigo1[5];
  char cidade1[40];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;


  // Carta 2
  char estado2; 
  char codigo2[5]; 
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  float pontosturisticos2; 

  // Área para entrada de dados

  // Carta1

  printf("Digite o estado da carta1: ");
  scanf("%c", &estado1);

  printf("Digite o codigo da carta1: ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade da carta1: ");
  scanf("%s", cidade1);

  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade; ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontosturisticos1);

  // Carta 2

  printf("Digite o estado da carta2: ");
  scanf("%c", &estado2);

  printf("Digite o codigo da carta2: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade da carta2: ");
  scanf("%s", cidade2);

  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a area da ciadade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade :");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turistiscos: ");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade 

  // Carta1
 
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turisticos: %d\n", pontosturisticos1);

  // Carta 2

  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turisticos: %d\n", pontosturisticos2);

return 0;
} 
