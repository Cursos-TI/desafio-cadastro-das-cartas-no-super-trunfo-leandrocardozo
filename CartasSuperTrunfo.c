#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Aluno: Leandro Cardoso Braga

int main()
{

  // inicializando variáveis da cidade 1
  char letraEstado_1;
  char nomeCidade_1[20];
  char codigoCidade_1[5];
  int ptsTuristicosCidade_1;
  unsigned long int populacaoCidade_1;
  float areaCidade_1;
  float pibCidade_1;
  float superPoderCidade_1;

  // Banner título do jogo Super Trunfo
  printf("==================================\n");
  printf(">>> JOGO DE CARTA SUPER TRUNFO <<<\n");
  printf("------- Cadastro de cartas -------\n");
  printf("==================================\n");
  printf("* Carta número 1 *\n\n");

  // Capturando a entrada de dados do prompt

  // Ex: C
  printf("Digite a letra do Estado: ");
  scanf(" %c", &letraEstado_1);
  getchar();

  // Ex:Fortaleza
  printf("Digite o nome da cidade: ");
  fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
  nomeCidade_1[strcspn(nomeCidade_1, "\n")] = '\0';

  /*Ex: C01 (Importante: O código deve seguir um padrão começando
  pela letra do estado e indo de 01 até 04)*/
  printf("Digite o código da cidade: ");
  fgets(codigoCidade_1, sizeof(codigoCidade_1), stdin);
  codigoCidade_1[strcspn(codigoCidade_1, "\n")] = '\0';

  // Ex: 4
  printf("Qual a população da cidade: ");
  scanf("%lu", &populacaoCidade_1);

  // Ex: 18
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pibCidade_1);

  // Ex: 12
  printf("Digite quantos pontos turísticos a cidade possui: ");
  scanf("%d", &ptsTuristicosCidade_1);

  // Ex: 313
  printf("Digite a área em km² que cidade possui: ");
  scanf("%f", &areaCidade_1);
  getchar();

  // Exibição dos valores inseridos
  printf("\n");
  printf("--------------------------------------------------\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", letraEstado_1);
  printf("Código: %s\n", codigoCidade_1);
  printf("Nome da cidade: %s\n", nomeCidade_1);
  printf("População: %lu\n", populacaoCidade_1);
  printf("Área: %.2f km²\n", areaCidade_1);
  printf("PIB: %.2f bilhões de reais\n", pibCidade_1);
  printf("Números de pontos turísticos: %d\n", ptsTuristicosCidade_1);

  // Calcula a densidade populacional e a renda per capita
  float densidadePopulacional_1 = populacaoCidade_1 / areaCidade_1;
  float pibPercapita_1 = pibCidade_1 / populacaoCidade_1;

  // Exibe os valores de densidade populacional e renda per capita
  printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional_1);
  printf("PIB per Capita: %.2f reais\n", pibPercapita_1);

  // Mensagem de sucesso!
  printf("\n");
  printf("========================================\n");
  printf("*** Cidade 1 cadastrada com sucesso! ***\n");
  printf("========================================\n");

  // FAZENDO O MESMO PROCESSO PARA A SEGUNDA CARTA

  // inicializando variáveis da cidade 2
  char letraEstado_2;
  char nomeCidade_2[20];
  char codigoCidade_2[5];
  int ptsTuristicosCidade_2;
  unsigned long int populacaoCidade_2;
  float areaCidade_2;
  float pibCidade_2;
  float superPoderCidade_2;

  printf("* Carta número 2 *\n\n");

  // Capturando a entrada de dados do prompt
  printf("Digite a letra do Estado: ");
  scanf(" %c", &letraEstado_2);
  getchar();

  printf("Digite o nome da cidade: ");
  fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin);
  nomeCidade_2[strcspn(nomeCidade_2, "\n")] = '\0';

  printf("Digite o código da cidade: ");
  fgets(codigoCidade_2, sizeof(codigoCidade_2), stdin);
  codigoCidade_2[strcspn(codigoCidade_2, "\n")] = '\0';

  printf("Qual a população da cidade: ");
  scanf("%lu", &populacaoCidade_2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pibCidade_2);

  printf("Digite quantos pontos turísticos a cidade possui: ");
  scanf("%d", &ptsTuristicosCidade_2);

  printf("Digite a área em km² que cidade possui: ");
  scanf("%f", &areaCidade_2);

  // Exibição dos valores inseridos
  printf("\n");
  printf("--------------------------------------------------\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n", letraEstado_2);
  printf("Código: %s\n", codigoCidade_2);
  printf("Nome da cidade: %s\n", nomeCidade_2);
  printf("População: %lu\n", populacaoCidade_2);
  printf("Área: %.2f km²\n", areaCidade_2);
  printf("PIB: %.2f bilhões de reais\n", pibCidade_2);
  printf("Números de pontos turísticos: %d\n", ptsTuristicosCidade_2);

  // Calcula a densidade populacional e a renda per capita
  float densidadePopulacional_2 = populacaoCidade_2 / areaCidade_2;
  float pibPercapita_2 = pibCidade_2 / populacaoCidade_2;

  // Exibe os valores de densidade populacional e renda per capita
  printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional_2);
  printf("PIB per Capita: %.2f reais\n", pibPercapita_2);

  // Mensagem de sucesso!
  printf("\n");
  printf("========================================\n");
  printf("*** Cidade 2 cadastrada com sucesso! ***\n");
  printf("========================================\n");
  printf("\n");

  // COMPARAÇÃO DE CARTA E SUPER PODERES
  // AGORA USANDO O OPERADOR DE CONDICIONAL IF/ELSE

  // int ptsTuristicosVencedor = ptsTuristicosCidade_1 > ptsTuristicosCidade_2;
  // int populacaoCidadeVencedor = populacaoCidade_1 > populacaoCidade_2;
  // int areaCidadeVencedor = areaCidade_1 > areaCidade_2;
  // int pibCidadeVencedor = pibCidade_1 > pibCidade_2;
  // int pibPerCapitaVencedor = pibPercapita_1 > pibPercapita_2;
  // int menorDensidadeVencedor = densidadePopulacional_1 < densidadePopulacional_2;

  // Calculando o inverso da densidade populacional
  float inversoDensidadePopulacional_1 = 1 / densidadePopulacional_1;
  float inversoDensidadePopulacional_2 = 1 / densidadePopulacional_2;

  // Calculando o Super Poder para cada cidade
  superPoderCidade_1 = populacaoCidade_1 + areaCidade_1 + pibCidade_1 + ptsTuristicosCidade_1 + pibPercapita_1 + inversoDensidadePopulacional_1;
  superPoderCidade_2 = populacaoCidade_2 + areaCidade_2 + pibCidade_2 + ptsTuristicosCidade_2 + pibPercapita_2 + inversoDensidadePopulacional_2;

  // int superPoderVencedor = superPoderCidade_1 > superPoderCidade_2;
  // Exibindo os Super Poderes

  printf("############################################################\n");
  printf("------------------ BATALHA DE CARTAS -----------------------\n");
  printf("############################################################\n\n");

  // printf("(Poder: Pontos Turisticos), Resultado: [%d]\n", ptsTuristicosVencedor);
  // printf("(Poder: População da Cidade), Resultado: [%d]\n", populacaoCidadeVencedor);
  // printf("(Poder: Área da Cidade), Resultado: [%d]\n", areaCidadeVencedor);
  // printf("(Poder: PIB da Cidade), Resultado: [%d]\n", pibCidadeVencedor);
  // printf("(Poder: PIB Per Capita), Resultado: [%d]\n", pibPerCapitaVencedor);
  // printf("(Poder: Densidade Pupulacional), Resultado: [%d]\n", menorDensidadeVencedor);
  // printf("(Poder: Super Poder), Resultado: [%d]\n", superPoderVencedor);

  // Variável criada para armazenar a diferença de pts turísticos e super poderes.
  // Adicionei função fabs para ignorar o sinal negativo caso a carta 2 vença.
  int res = abs(ptsTuristicosCidade_1 - ptsTuristicosCidade_2);
  float resSup = fabs(superPoderCidade_1 - superPoderCidade_2);

  // Comparando atributo pontos turísticos
  // printf("** Batalha de Pontos Turísticos **\n");
  // printf("Pontos turísticos Carta 1 [%d] \n", ptsTuristicosCidade_1);
  // printf("Pontos turísticos Carta 2 [%d] \n", ptsTuristicosCidade_2);

  // Adicionei a biblioteca Math para usar a função fabs e ignorar
  // o sinal negativo caso a carta 2 vença.

  // Comparando atributo Super poder

  // Menu de opções de atributo/carta
  int opcaoMenu;

  printf("**** Escolha uma das Opções abaixo para a BATALHA ***\n\n");
  printf("[1] - PONTOS TURÍSTICOS\n");
  printf("[2] - POPULAÇÃO DA CIDADE\n");
  printf("[3] - ÁREA DA CIDADE\n");
  printf("[4] - PIB DA CIDADE\n");
  printf("[5] - PIB PER CAPITA\n");
  printf("[6] - DENSIDADE POPULACIONAL\n");
  printf("[7] - SUPER PODERES\n");
  scanf("%d", &opcaoMenu);

  printf("Opção escolhida: %d\n", opcaoMenu);
  

  switch (opcaoMenu){
    case 1:
      if (ptsTuristicosCidade_1 > ptsTuristicosCidade_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_1, ptsTuristicosCidade_1);
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_2, ptsTuristicosCidade_2);
        printf("--------------------------------------------------\n");
      }
      else if (ptsTuristicosCidade_2 > ptsTuristicosCidade_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_1, ptsTuristicosCidade_1);
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_2, ptsTuristicosCidade_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_1, ptsTuristicosCidade_1);
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_2, ptsTuristicosCidade_2);
        printf("--------------------------------------------------\n");
      }
      break;

    case 2:
      if (populacaoCidade_1 > populacaoCidade_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - População: [%lu]\n", nomeCidade_1, populacaoCidade_1);
        printf("%s - População: [%lu]\n", nomeCidade_2, populacaoCidade_2);
        printf("--------------------------------------------------\n");
      }
      else if (populacaoCidade_2 > populacaoCidade_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - População: [%lu]\n", nomeCidade_1, populacaoCidade_1);
        printf("%s - População: [%lu]\n", nomeCidade_2, populacaoCidade_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - População: [%lu]\n", nomeCidade_1, populacaoCidade_1);
        printf("%s - População: [%lu]\n", nomeCidade_2, populacaoCidade_2);
        printf("--------------------------------------------------\n");
      }
      break;

    case 3:
      if (areaCidade_1 > areaCidade_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - Área: [%.2f km²]\n", nomeCidade_1, areaCidade_1);
        printf("%s - Área: [%.2f km²]\n", nomeCidade_2, areaCidade_2);
        printf("--------------------------------------------------\n");
      }
      else if (areaCidade_2 > areaCidade_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - Área: [%.2f km²]\n", nomeCidade_1, areaCidade_1);
        printf("%s - Área: [%.2f km²]\n", nomeCidade_2, areaCidade_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - Área: [%.2f km²]\n", nomeCidade_1, areaCidade_1);
        printf("%s - Área: [%.2f km²]\n", nomeCidade_2, areaCidade_2);
        printf("--------------------------------------------------\n");
      }
      break;

    case 4:
      if (pibCidade_1 > pibCidade_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - PIB: [%.2f]\n", nomeCidade_1, pibCidade_1);
        printf("%s - PIB: [%.2f]\n", nomeCidade_2, pibCidade_2);
        printf("--------------------------------------------------\n");
      }
      else if (pibCidade_2 > pibCidade_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - PIB: [%.2f]\n", nomeCidade_1, pibCidade_1);
        printf("%s - PIB: [%.2f]\n", nomeCidade_2, pibCidade_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - PIB: [%.2f]\n", nomeCidade_1, pibCidade_1);
        printf("%s - PIB: [%.2f]\n", nomeCidade_2, pibCidade_2);
        printf("--------------------------------------------------\n");
      }
      break;

    case 5:
      if (pibPercapita_1 > pibPercapita_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_1, pibPercapita_1);
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_2, pibPercapita_2);
        printf("--------------------------------------------------\n");
      }
      else if (pibPercapita_2 > pibPercapita_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_1, pibPercapita_1);
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_2, pibPercapita_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_1, pibPercapita_1);
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_2, pibPercapita_2);
        printf("--------------------------------------------------\n");
      }
      break;

    case 6:
      if (densidadePopulacional_1 < densidadePopulacional_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - Densidade populacional: [%.2f hab/km²]\n", nomeCidade_1, densidadePopulacional_1);
        printf("%s - Densidade populacional: [%.2f hab/km²]\n", nomeCidade_2, densidadePopulacional_2);
        printf("--------------------------------------------------\n");
      }
      else if (densidadePopulacional_2 < densidadePopulacional_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - Densidade populacional: [%.2f hab/km²]\n", nomeCidade_1, densidadePopulacional_1);
        printf("%s - Densidade populacional: [%.2f hab/km²]\n", nomeCidade_2, densidadePopulacional_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - Densidade populacional: [%.2f hab/km²]\n", nomeCidade_1, densidadePopulacional_1);
        printf("%s - Densidade populacional: [%.2f hab/km²]\n", nomeCidade_2, densidadePopulacional_2);
        printf("--------------------------------------------------\n");
      }
      break;

    case 7:
      if (superPoderCidade_1 > superPoderCidade_2)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_1, superPoderCidade_1);
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_2, superPoderCidade_2);
        printf("--------------------------------------------------\n");
      }
      else if (superPoderCidade_2 > superPoderCidade_1)
      {
        printf("--------------------------------------------------\n");
        printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_1, superPoderCidade_1);
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_2, superPoderCidade_2);
        printf("--------------------------------------------------\n");
      } else {
        printf("--------------------------------------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_1, superPoderCidade_1);
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_2, superPoderCidade_2);
        printf("--------------------------------------------------\n");
      }
      break;

    default:
      printf("--------------------------------------------------\n");
      printf("Opção inválida!\n");
      printf("--------------------------------------------------\n");
      break;
}


  return 0;
}
