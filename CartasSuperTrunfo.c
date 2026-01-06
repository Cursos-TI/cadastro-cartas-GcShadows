#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1,estado2;
  char cod_carta1[4];
  char nome_cid1[50];
  int num_populacao1;
  float area1;
  float pib1;
  int num_pontos_turisticos1; 
  char cod_carta2[4];
  char nome_cid2[50];
  int num_populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;
    // Área para entrada de dados
    printf("========== Bem vindo ao Super Trunfo de Paises ! ========== \n");
      printf(" ----> por favor insira as informações abaixo para cadastrar a 1ª carta <---- \n");
    printf("Digite uma letra para representar o Estado (entre A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da carta (ex: A01): ");
     scanf("%s",&cod_carta1);
    printf("Digite o Nome da cidade: "); 
     scanf(" %[^\n]",nome_cid1);
    printf("Digite o numero da Populacao: ");
     scanf("%f", &num_populacao1); 
    printf("Digite a Area (km²): ");
     scanf("%f", &area1); 
    printf("Digite oPIB (em bilhões): ");
     scanf("%f", &pib1); 
    printf("Numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos1); 

    printf(" ----> por favor insira as informações abaixo para cadastrar a 2ª carta <---- \n");
    printf("Digite uma letra para representar o Estado (entre A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da carta (ex: A01): ");
     scanf("%s",&cod_carta2);
    printf("Digite o Nome da cidade: "); 
     scanf(" %[^\n]",nome_cid2);
    printf("Digite o numero da Populacao: ");
     scanf("%f", &num_populacao2); 
    printf("Digite a Area (km²): ");
     scanf("%f", &area2); 
    printf("Digite oPIB (em bilhões): ");
     scanf("%f", &pib2); 
    printf("Numero de pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos2);       

  // Área para exibição dos dados da cidade

  printf("-----> Cartas cadastradas com sucesso <----- \n");
  printf("abaixo as informações cadastradas \n\n");
  printf("----------Carta 01------------ \n\n");
  printf("Letra do Estado: %c\n",estado1);
  printf("Codigo do Estado:  %s\n",cod_carta1);
  printf("Nome da Cidade: %s\n",nome_cid1);
  printf("População: %d\n",num_populacao1);
  printf("Area total: %.2f km²\n",area1);
  printf("PIB:  %.2f bilhoes de reais\n",pib1);
  printf("Numero de Pontos Turisticos:  %d\n",num_pontos_turisticos1); 
  printf("--------------------------------------------------------\n\n");

  printf("----------Carta 02------------ \n\n");
 
  printf("Letra do Estado: %c\n",estado2);
  printf("Codigo do Estado:  %s\n",cod_carta2);
  printf("Nome da Cidade: %s\n",nome_cid2);
  printf("População: %d\n",num_populacao2);
  printf("Area total: %.2f km²\n",area2);
  printf("PIB:  %.2f bilhoes de reais\n",pib2);
  printf("Numero de Pontos Turisticos:  %d\n",num_pontos_turisticos2); 
  printf("--------------------------------------------------------\n\n"); 






return 0;
} 
