#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Aluno: Leandro Cardoso Braga
//Curso ADS

int main()
{

  // inicializando variáveis da cidade 1
  char letraEstado_1 = 'C';
  char nomeCidade_1[20] = "RIO DE JANEIRO";
  char codigoCidade_1[5] = "C01";
  int ptsTuristicosCidade_1 = 12;
  unsigned long int populacaoCidade_1 = 17000;
  float areaCidade_1 = 3700;
  float pibCidade_1 = 200000;
  float superPoderCidade_1 = 472;

  // Banner título do jogo Super Trunfo
  printf("==================================\n");
  printf(">>> JOGO DE CARTA SUPER TRUNFO <<<\n");
  printf("------- Cadastro de cartas -------\n");
  printf("==================================\n");
  printf("* Carta número 1 *\n\n");

  // Capturando a entrada de dados do prompt

  //-----------------------INICIO DA ENTRADA DE DADOS---------------------------------
  // printf("Digite a letra do Estado: ");
  // scanf(" %c", &letraEstado_1);
  // getchar();

  // printf("Digite o nome da cidade: ");
  // fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
  // nomeCidade_1[strcspn(nomeCidade_1, "\n")] = '\0';

  // printf("Digite o código da cidade: ");
  // fgets(codigoCidade_1, sizeof(codigoCidade_1), stdin);
  // codigoCidade_1[strcspn(codigoCidade_1, "\n")] = '\0';

  // printf("Qual a população da cidade: ");
  // scanf("%lu", &populacaoCidade_1);

  // printf("Digite o PIB da cidade: ");
  // scanf("%f", &pibCidade_1);

  // printf("Digite quantos pontos turísticos a cidade possui: ");
  // scanf("%d", &ptsTuristicosCidade_1);

  // printf("Digite a área em km² que cidade possui: ");
  // scanf("%f", &areaCidade_1);
  // getchar();
  //-----------------------FIM DA ENTRADA DE DADOS---------------------------------

  // Exibição dos valores inseridos
  printf("\n");
  printf("--------------------DADOS CADASTRADOS--------------------\n");
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
  char letraEstado_2 = 'F';
  char nomeCidade_2[20] = "FORTALEZA";
  char codigoCidade_2[5] = "F03";
  int ptsTuristicosCidade_2 = 12;
  unsigned long int populacaoCidade_2 = 23000;
  float areaCidade_2 = 3700;
  float pibCidade_2 = 150000;
  float superPoderCidade_2 = 485;

  printf("* Carta número 2 *\n\n");

  // Capturando a entrada de dados do prompt

  //-----------------------INICIO DA ENTRADA DE DADOS---------------------------------
  // printf("Digite a letra do Estado: ");
  // scanf(" %c", &letraEstado_2);
  // getchar();

  // printf("Digite o nome da cidade: ");
  // fgets(nomeCidade_2, sizeof(nomeCidade_2), stdin);
  // nomeCidade_2[strcspn(nomeCidade_2, "\n")] = '\0';

  // printf("Digite o código da cidade: ");
  // fgets(codigoCidade_2, sizeof(codigoCidade_2), stdin);
  // codigoCidade_2[strcspn(codigoCidade_2, "\n")] = '\0';

  // printf("Qual a população da cidade: ");
  // scanf("%lu", &populacaoCidade_2);

  // printf("Digite o PIB da cidade: ");
  // scanf("%f", &pibCidade_2);

  // printf("Digite quantos pontos turísticos a cidade possui: ");
  // scanf("%d", &ptsTuristicosCidade_2);

  // printf("Digite a área em km² que cidade possui: ");
  // scanf("%f", &areaCidade_2);
  // getchar();
  //-----------------------FIM DA ENTRADA DE DADOS---------------------------------

  // Exibição dos valores inseridos
  printf("\n");
  printf("--------------------DADOS CADASTRADOS--------------------\n");
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
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

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
  superPoderCidade_1 = populacaoCidade_1 + areaCidade_1 + pibCidade_1 + ptsTuristicosCidade_1 + pibPercapita_1 + densidadePopulacional_1;
  superPoderCidade_2 = populacaoCidade_2 + areaCidade_2 + pibCidade_2 + ptsTuristicosCidade_2 + pibPercapita_2 + densidadePopulacional_2;

  // int superPoderVencedor = superPoderCidade_1 > superPoderCidade_2;
  // Exibindo os Super Poderes
  printf("Obs: Valores de cartas gerados automaticamente logo acima.\n\n");
  printf("############################################################\n");
  printf("------------------ BATALHA DE CARTAS -----------------------\n");
  printf("############################################################\n\n");
  //============================================================================//
  printf("================ PRIMEIRA RODADA ==================\n\n");
  //============================================================================//

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
  int opcaoMenuRodada1;

  printf("**** Escolha uma das Opções abaixo para a BATALHA ***\n\n");
  printf("[1] - PONTOS TURÍSTICOS\n");
  printf("[2] - POPULAÇÃO DA CIDADE\n");
  printf("[3] - ÁREA DA CIDADE\n");
  printf("[4] - PIB DA CIDADE\n");
  printf("[5] - PIB PER CAPITA\n");
  printf("[6] - DENSIDADE POPULACIONAL\n");
  printf("[7] - SUPER PODERES\n\n");

  printf("Digite aqui sua opção: => ");
  scanf("%d", &opcaoMenuRodada1);

  printf("Opção: %d confirmada!\n\n", opcaoMenuRodada1);

  // variável responsável por guardar o valor total dos atributos das duas batalhas
  float somaTotalAtributosCarta_1 = 0;
  float somaTotalAtributosCarta_2 = 0;
  int vitoriaCarta_1 = 0;
  int vitoriaCarta_2 = 0;
  int empate = 0;

  int respostaRodada1;
  switch (opcaoMenuRodada1)
  {

  case 1:

    somaTotalAtributosCarta_1 += ptsTuristicosCidade_1;
    somaTotalAtributosCarta_2 += ptsTuristicosCidade_2;

    respostaRodada1 = ptsTuristicosCidade_1 > ptsTuristicosCidade_2 ? 1 : (ptsTuristicosCidade_2 > ptsTuristicosCidade_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - Pontos turísticos: [%d]\n", nomeCidade_1, ptsTuristicosCidade_1);
    printf("%s - Pontos turísticos: [%d]\n", nomeCidade_2, ptsTuristicosCidade_2);
    printf("--------------------------------------------------\n");
    break;

  case 2:

    somaTotalAtributosCarta_1 += populacaoCidade_1;
    somaTotalAtributosCarta_2 += populacaoCidade_2;

    respostaRodada1 = populacaoCidade_1 > populacaoCidade_2 ? 1 : (populacaoCidade_2 > populacaoCidade_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - População: [%lu]\n", nomeCidade_1, populacaoCidade_1);
    printf("%s - População: [%lu]\n", nomeCidade_2, populacaoCidade_2);
    printf("--------------------------------------------------\n");
    break;

  case 3:

    somaTotalAtributosCarta_1 += areaCidade_1;
    somaTotalAtributosCarta_2 += areaCidade_2;

    respostaRodada1 = areaCidade_1 > areaCidade_2 ? 1 : (areaCidade_2 > areaCidade_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - Área: [%.2f km²]\n", nomeCidade_1, areaCidade_1);
    printf("%s - Área: [%.2f km²]\n", nomeCidade_2, areaCidade_2);
    printf("--------------------------------------------------\n");
    break;

  case 4:

    somaTotalAtributosCarta_1 += pibCidade_1;
    somaTotalAtributosCarta_2 += pibCidade_2;

    respostaRodada1 = pibCidade_1 > pibCidade_2 ? 1 : (pibCidade_2 > pibCidade_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - PIB: [%.2f]\n", nomeCidade_1, pibCidade_1);
    printf("%s - PIB: [%.2f]\n", nomeCidade_2, pibCidade_2);
    printf("--------------------------------------------------\n");
    break;

  case 5:

    somaTotalAtributosCarta_1 += pibPercapita_1;
    somaTotalAtributosCarta_2 += pibPercapita_2;

    respostaRodada1 = pibPercapita_1 > pibPercapita_2 ? 1 : (pibPercapita_2 > pibPercapita_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - PIB per capita: [%.2f]\n", nomeCidade_1, pibPercapita_1);
    printf("%s - PIB per capita: [%.2f]\n", nomeCidade_2, pibPercapita_2);
    printf("--------------------------------------------------\n");
    break;

  case 6:

    somaTotalAtributosCarta_1 += densidadePopulacional_1;
    somaTotalAtributosCarta_2 += densidadePopulacional_2;

    respostaRodada1 = inversoDensidadePopulacional_1 < inversoDensidadePopulacional_2 ? 1 : (inversoDensidadePopulacional_2 < inversoDensidadePopulacional_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - Densidade populacional: [%.3f km²/hab]\n", nomeCidade_1, inversoDensidadePopulacional_1);
    printf("%s - Densidade populacional: [%.3f km²/hab]\n", nomeCidade_2, inversoDensidadePopulacional_2);
    printf("--------------------------------------------------\n");
    break;

  case 7:

    somaTotalAtributosCarta_1 += superPoderCidade_1;
    somaTotalAtributosCarta_2 += superPoderCidade_2;

    respostaRodada1 = superPoderCidade_1 > superPoderCidade_2 ? 1 : (superPoderCidade_2 > superPoderCidade_1 ? 0 : -1);

    if (respostaRodada1 == 1)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
      vitoriaCarta_1++;
    }
    else if (respostaRodada1 == 0)
    {
      printf("--------------------------------------------------\n");
      printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
      vitoriaCarta_2++;
    }
    else
    {
      printf("--------------------------------------------------\n");
      printf("------------------- EMPATE -----------------------\n");
      empate++;
    }
    printf("%s - Super Poder: [%.2f]\n", nomeCidade_1, superPoderCidade_1);
    printf("%s - Super Poder: [%.2f]\n", nomeCidade_2, superPoderCidade_2);
    printf("--------------------------------------------------\n");
    break;

  default:
    printf("--------------------------------------------------\n");
    printf("Opção inválida!\n");
    printf("--------------------------------------------------\n");
    break;
  }
  printf("\n\n\n\n\n\n\n\n");

  // Menu de escolha de nova rodada
  int continuar;

  printf("DESEJA FAZER UMA NOVA RODADA? \n");
  printf("============\n");
  printf("[1] - SIM   \n");
  printf("[2] - NÃO   \n");
  printf("============\n");

  printf("DICA IMPORTANTE:\n\n");
  printf("'Escolha a opção certa, pois só terá uma chance. Boa sorte!'\n");
  printf("Digite aqui sua opção: => ");
  scanf("%d", &continuar);
  getchar();

  int opcaoMenuRodada2;
  // Condicional para nova rodada
  if (continuar == 1)
  {

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //============================================================================//
    printf("================ SEGUNDA RODADA ==================\n\n");
    //============================================================================//

    printf("**** Escolha uma das Opções abaixo para a BATALHA ***\n\n");
    printf("[1] - PONTOS TURÍSTICOS\n");
    printf("[2] - POPULAÇÃO DA CIDADE\n");
    printf("[3] - ÁREA DA CIDADE\n");
    printf("[4] - PIB DA CIDADE\n");
    printf("[5] - PIB PER CAPITA\n");
    printf("[6] - DENSIDADE POPULACIONAL\n");
    printf("[7] - SUPER PODERES\n\n");

    printf("ATENÇÃO!!! OPÇÃO MENU [%d] JÁ ESCOLHIDO ANTERIORMENTE!\n", opcaoMenuRodada1);
    printf("Digite aqui sua opção: => ");
    scanf("%d", &opcaoMenuRodada2);

    printf("Opção: %d confirmada!\n\n", opcaoMenuRodada2);

    // PRIMEIRA TENTATIVA DA 2ª RODADA
    if (opcaoMenuRodada2 != opcaoMenuRodada1)
    {

      int respostaRodada2;
      switch (opcaoMenuRodada2)
      {

      case 1:

        somaTotalAtributosCarta_1 += ptsTuristicosCidade_1;
        somaTotalAtributosCarta_2 += ptsTuristicosCidade_2;

        respostaRodada2 = ptsTuristicosCidade_1 > ptsTuristicosCidade_2 ? 1 : (ptsTuristicosCidade_2 > ptsTuristicosCidade_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_1, ptsTuristicosCidade_1);
        printf("%s - Pontos turísticos: [%d]\n", nomeCidade_2, ptsTuristicosCidade_2);
        printf("--------------------------------------------------\n");
        break;

      case 2:

        somaTotalAtributosCarta_1 += populacaoCidade_1;
        somaTotalAtributosCarta_2 += populacaoCidade_2;

        respostaRodada2 = populacaoCidade_1 > populacaoCidade_2 ? 1 : (populacaoCidade_2 > populacaoCidade_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - População: [%lu]\n", nomeCidade_1, populacaoCidade_1);
        printf("%s - População: [%lu]\n", nomeCidade_2, populacaoCidade_2);
        printf("--------------------------------------------------\n");
        break;

      case 3:

        somaTotalAtributosCarta_1 += areaCidade_1;
        somaTotalAtributosCarta_2 += areaCidade_2;

        respostaRodada2 = areaCidade_1 > areaCidade_2 ? 1 : (areaCidade_2 > areaCidade_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - Área: [%.2f km²]\n", nomeCidade_1, areaCidade_1);
        printf("%s - Área: [%.2f km²]\n", nomeCidade_2, areaCidade_2);
        printf("--------------------------------------------------\n");
        break;

      case 4:

        somaTotalAtributosCarta_1 += pibCidade_1;
        somaTotalAtributosCarta_2 += pibCidade_2;

        respostaRodada2 = pibCidade_1 > pibCidade_2 ? 1 : (pibCidade_2 > pibCidade_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - PIB: [%.2f]\n", nomeCidade_1, pibCidade_1);
        printf("%s - PIB: [%.2f]\n", nomeCidade_2, pibCidade_2);
        printf("--------------------------------------------------\n");
        break;

      case 5:

        somaTotalAtributosCarta_1 += pibPercapita_1;
        somaTotalAtributosCarta_2 += pibPercapita_2;

        respostaRodada2 = pibPercapita_1 > pibPercapita_2 ? 1 : (pibPercapita_2 > pibPercapita_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_1, pibPercapita_1);
        printf("%s - PIB per capita: [%.2f]\n", nomeCidade_2, pibPercapita_2);
        printf("--------------------------------------------------\n");
        break;

      case 6:

        somaTotalAtributosCarta_1 += densidadePopulacional_1;
        somaTotalAtributosCarta_2 += densidadePopulacional_2;

        respostaRodada2 = inversoDensidadePopulacional_1 < inversoDensidadePopulacional_2 ? 1 : (inversoDensidadePopulacional_2 < inversoDensidadePopulacional_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - Densidade populacional: [%.3f km²/hab]\n", nomeCidade_1, inversoDensidadePopulacional_1);
        printf("%s - Densidade populacional: [%.3f km²/hab]\n", nomeCidade_2, inversoDensidadePopulacional_2);
        printf("--------------------------------------------------\n");
        break;

      case 7:

        somaTotalAtributosCarta_1 += superPoderCidade_1;
        somaTotalAtributosCarta_2 += superPoderCidade_2;

        respostaRodada2 = superPoderCidade_1 > superPoderCidade_2 ? 1 : (superPoderCidade_2 > superPoderCidade_1 ? 0 : -1);

        if (respostaRodada2 == 1)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
          vitoriaCarta_1++;
        }
        else if (respostaRodada2 == 0)
        {
          printf("--------------------------------------------------\n");
          printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
          vitoriaCarta_2++;
        }
        else
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          empate++;
        }
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_1, superPoderCidade_1);
        printf("%s - Super Poder: [%.2f]\n", nomeCidade_2, superPoderCidade_2);
        printf("--------------------------------------------------\n");
        break;

      default:
        printf("--------------------------------------------------\n");
        printf("Opção inválida!\n");
        printf("--------------------------------------------------\n");
        break;
      }

      // BLOCO DE IF/ELSE PARA COMPARAR QUEM VENCEU A BATALHA DA SOMA DOS DOIS ATRIBUTOS ESCOLHIDOS.

      //======================================================================================================//
      //=========================================BATALHA FINAL================================================//
      //======================================================================================================//

      if (somaTotalAtributosCarta_1 > somaTotalAtributosCarta_2)
      {
        printf("|========== RANKING [1] ==========|\n\n");
        printf("1º LUGAR: CARTA 1 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_1, somaTotalAtributosCarta_1);
        printf("2º LUGAR: CARTA 2 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_2, somaTotalAtributosCarta_2);
        printf("%d vitória(s) no total para CARTA 1 (%s).\n", vitoriaCarta_1, nomeCidade_1);
        printf("%d vitória(s) no total para CARTA 2 (%s).\n", vitoriaCarta_2, nomeCidade_2);
        printf("%d empate(s) no total.\n", empate);
      }
      else if (somaTotalAtributosCarta_2 > somaTotalAtributosCarta_1)
      {
        printf("|========== RANKING [1] ==========|\n\n");
        printf("1º LUGAR: CARTA 2 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_2, somaTotalAtributosCarta_2);
        printf("2º LUGAR: CARTA 1 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_1, somaTotalAtributosCarta_1);
        printf("%d vitória(s) no total para CARTA 2 (%s).\n", vitoriaCarta_2, nomeCidade_2);
        printf("%d vitória(s) no total para CARTA 1 (%s).\n", vitoriaCarta_1, nomeCidade_1);
        printf("%d empate(s) no total.\n", empate);
      }
      else
      {
        printf("----------------RESULTADO FINAL-------------------\n");
        printf("------------------- EMPATE -----------------------\n");
        printf("--------------------------------------------------\n");
        printf("--------------------------------------------------\n");
        printf("--------------------------------------------------\n");
      }

    } // FIM DA PRIMEIRA VERIFICAÇÃO (opcaoMenuRodada2 != opcaoMenuRodada1) É DIFERENTE! A SEGUNDA RODADA ACONTECEU! TUDO OK...

    else if (opcaoMenuRodada1 == opcaoMenuRodada2)
    {
      // fechamento da condicional de atributos diferentes, assim o jogo continua.
      printf("ATRIBUTO JÁ ESCOLHIDO! ÚLTIMA CHANCE: => ");
      scanf("%d", &opcaoMenuRodada2);
      printf("Opção escolhida: %d\n", opcaoMenuRodada2);

      /*lendo novamente a entrada de dados da opção menu rodada 2,
      apesar do usuário já ter repetido uma vez, agora ele terá a ultima chance
      para seguir com o jogo.*/

      if (opcaoMenuRodada2 != opcaoMenuRodada1)
      {

        int respostaRodada2_1;

        switch (opcaoMenuRodada2)
        {

        case 1:

          somaTotalAtributosCarta_1 += ptsTuristicosCidade_1;
          somaTotalAtributosCarta_2 += ptsTuristicosCidade_2;

          respostaRodada2_1 = ptsTuristicosCidade_1 > ptsTuristicosCidade_2 ? 1 : (ptsTuristicosCidade_2 > ptsTuristicosCidade_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - Pontos turísticos: [%d]\n", nomeCidade_1, ptsTuristicosCidade_1);
          printf("%s - Pontos turísticos: [%d]\n", nomeCidade_2, ptsTuristicosCidade_2);
          printf("--------------------------------------------------\n");
          break;

        case 2:

          somaTotalAtributosCarta_1 += populacaoCidade_1;
          somaTotalAtributosCarta_2 += populacaoCidade_2;

          respostaRodada2_1 = populacaoCidade_1 > populacaoCidade_2 ? 1 : (populacaoCidade_2 > populacaoCidade_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - População: [%lu]\n", nomeCidade_1, populacaoCidade_1);
          printf("%s - População: [%lu]\n", nomeCidade_2, populacaoCidade_2);
          printf("--------------------------------------------------\n");
          break;

        case 3:

          somaTotalAtributosCarta_1 += areaCidade_1;
          somaTotalAtributosCarta_2 += areaCidade_2;

          respostaRodada2_1 = areaCidade_1 > areaCidade_2 ? 1 : (areaCidade_2 > areaCidade_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - Área: [%.2f km²]\n", nomeCidade_1, areaCidade_1);
          printf("%s - Área: [%.2f km²]\n", nomeCidade_2, areaCidade_2);
          printf("--------------------------------------------------\n");
          break;

        case 4:

          somaTotalAtributosCarta_1 += pibCidade_1;
          somaTotalAtributosCarta_2 += pibCidade_2;

          respostaRodada2_1 = pibCidade_1 > pibCidade_2 ? 1 : (pibCidade_2 > pibCidade_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - PIB: [%.2f]\n", nomeCidade_1, pibCidade_1);
          printf("%s - PIB: [%.2f]\n", nomeCidade_2, pibCidade_2);
          printf("--------------------------------------------------\n");
          break;

        case 5:

          somaTotalAtributosCarta_1 += pibPercapita_1;
          somaTotalAtributosCarta_2 += pibPercapita_2;

          respostaRodada2_1 = pibPercapita_1 > pibPercapita_2 ? 1 : (pibPercapita_2 > pibPercapita_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - PIB per capita: [%.2f]\n", nomeCidade_1, pibPercapita_1);
          printf("%s - PIB per capita: [%.2f]\n", nomeCidade_2, pibPercapita_2);
          printf("--------------------------------------------------\n");
          break;

        case 6:

          somaTotalAtributosCarta_1 += densidadePopulacional_1;
          somaTotalAtributosCarta_2 += densidadePopulacional_2;

          respostaRodada2_1 = inversoDensidadePopulacional_1 < inversoDensidadePopulacional_2 ? 1 : (inversoDensidadePopulacional_2 < inversoDensidadePopulacional_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - Densidade populacional: [%.3f km²/hab]\n", nomeCidade_1, inversoDensidadePopulacional_1);
          printf("%s - Densidade populacional: [%.3f km²/hab]\n", nomeCidade_2, inversoDensidadePopulacional_2);
          printf("--------------------------------------------------\n");
          break;

        case 7:

          somaTotalAtributosCarta_1 += superPoderCidade_1;
          somaTotalAtributosCarta_2 += superPoderCidade_2;

          respostaRodada2_1 = superPoderCidade_1 > superPoderCidade_2 ? 1 : (superPoderCidade_2 > superPoderCidade_1 ? 0 : -1);

          if (respostaRodada2_1 == 1)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 1 venceu! Cidade: %s\n", nomeCidade_1);
            vitoriaCarta_1++;
          }
          else if (respostaRodada2_1 == 0)
          {
            printf("--------------------------------------------------\n");
            printf("Carta 2 venceu! Cidade: %s\n", nomeCidade_2);
            vitoriaCarta_2++;
          }
          else
          {
            printf("--------------------------------------------------\n");
            printf("------------------- EMPATE -----------------------\n");
            empate++;
          }
          printf("%s - Super Poder: [%.2f]\n", nomeCidade_1, superPoderCidade_1);
          printf("%s - Super Poder: [%.2f]\n", nomeCidade_2, superPoderCidade_2);
          printf("--------------------------------------------------\n");
          break;

        default:
          printf("--------------------------------------------------\n");
          printf("Opção inválida!\n");
          printf("--------------------------------------------------\n");
          break;

        } // apertou continuar = 1 pra batalhar novamente

        // BLOCO DE IF/ELSE PARA COMPARAR QUEM VENCEU A BATALHA DA SOMA DOS DOIS ATRIBUTOS ESCOLHIDOS.

        //======================================================================================================//
        //=========================================BATALHA FINAL================================================//
        //======================================================================================================//

        
        if (somaTotalAtributosCarta_1 > somaTotalAtributosCarta_2)
        {
          printf("|========== RANKING [1] ==========|\n\n");
          printf("1º LUGAR: CARTA 1 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_1, somaTotalAtributosCarta_1);
          printf("2º LUGAR: CARTA 2 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_2, somaTotalAtributosCarta_2);
          printf("%d vitória(s) no total para CARTA 1 (%s).\n", vitoriaCarta_1, nomeCidade_1);
          printf("%d vitória(s) no total para CARTA 2 (%s).\n", vitoriaCarta_2, nomeCidade_2);
          printf("%d empate(s) no total.\n", empate);
          printf("--------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n");
        } 
        else if (somaTotalAtributosCarta_2 > somaTotalAtributosCarta_1)
        {
          printf("|========== RANKING [1] ==========|\n\n");
          printf("1º LUGAR: CARTA 2 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_2, somaTotalAtributosCarta_2);
          printf("2º LUGAR: CARTA 1 (%s) - PLACAR NO AGREGADO: %.2f\n", nomeCidade_1, somaTotalAtributosCarta_1);
          printf("%d vitória(s) no total para CARTA 2 (%s).\n", vitoriaCarta_2, nomeCidade_2);
          printf("%d vitória(s) no total para CARTA 1 (%s).\n", vitoriaCarta_1, nomeCidade_1);
          printf("%d empate(s) no total.\n", empate);
          printf("--------------------------------------------------\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        else 
        {
          printf("--------------------------------------------------\n");
          printf("------------------- EMPATE -----------------------\n");
          printf("--------------------------------------------------\n");
          printf("--------------------------------------------------\n");
          printf("--------------------------------------------------\n");
        }

      } // SE A OPÇÃO FOR DIFERENTE, ULTIMA TENTATIVA
      else if (opcaoMenuRodada2 == opcaoMenuRodada1)
      {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("[ERROR 404] MESMO ATRIBUTO ESCOLHIDO!\n");
        printf("======================== GAME OVER ========================");
      }
      else
      {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("OPÇÃO INVÁLIDA!\n");
        printf("======================== GAME OVER ========================");
      }

    } // FIM DA PRIMEIRA VERIFICAÇÃO (opcaoMenuRodada2 == opcaoMenuRodada1) IGUAIS

  } // OPTOU POR CONTINUAR = 1 E FIM DA SEGUNDA RODADA

  else if (continuar == 2)

  {

    printf("\n\n");
    if (vitoriaCarta_1 > vitoriaCarta_2)
    {
      printf("BATALHA INCOMPLETA 1/2\n");
      printf("VITÓRIA DA CARTA [1] - (%s)\n\n", nomeCidade_1);
      printf("%d empate(s) no total.\n", empate);
    }
    else if (vitoriaCarta_2 > vitoriaCarta_1)
    {
      printf("BATALHA INCOMPLETA 1/2\n");
      printf("VITÓRIA DA CARTA [2] - (%s)\n", nomeCidade_2);
      printf("%d empate(s) no total.\n", empate);
    }
    else
    {
      printf("BATALHA INCOMPLETA 1/2\n");
      printf("O JOGO ACABOU EM EMPATE!\n");
    }
    printf("\n");
    printf("********************\n");
    printf("* JOGO FINALIZADO! *\n");
    printf("********************\n");


  }
  else
  {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("OPÇÃO INVÁLIDA!\n");
    printf("======================== GAME OVER ========================");
  }

  return 0;
}
