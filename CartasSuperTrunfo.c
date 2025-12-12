#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char cod_carta1[4];
  char nome_cid1[50];
  int num_populacao1;
  float area1;
  float pib1;
  int num_pontos_turisticos1; 
  char estado2;
  char cod_carta2[4];
  char nome_cid2[50];
  int num_populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;
    // Área para entrada de dados
    printf("Bem vindo ao Super Trunfo de Paises ! \n");
      printf("por favor insira as informações abaixo para cadastrar a 1ª carta : \n");
    printf("Digite uma letra para representar o estadoEstado (entre A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da carta (ex: A01): ");
     scanf("%s",&cod_carta1);
    printf("Digite o Nome da cidade: "); 
     scanf("%s",nome_cid1);
    printf("Digite o numero da Populacao: ");
     scanf("%d", &num_populacao1); 
    printf("Digite a Area (km²): ");
     scanf("%f", &area1); 
    printf("Digite oPIB (em bilhões): ");
     scanf("%f", &pib1); 
    printf("Numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos1); 




      

  // Área para exibição dos dados da cidade

return 0;
} 
