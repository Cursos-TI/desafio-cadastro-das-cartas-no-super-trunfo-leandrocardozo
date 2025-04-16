#include <stdio.h>
#include <string.h>


// Aluno: Leandro Cardoso Braga

int main()
{

    // inicializando variáveis da cidade 1
    char letraEstado_1[2];
    char nomeCidade_1[20];
    char codigoCidade_1[5];
    int ptsTuristicosCidade_1;
    float populacaoCidade_1;
    float areaCidade_1;
    float pibCidade_1;

    //Banner título do jogo Super Trunfo
    printf("==================================\n");
    printf(">>> JOGO DE CARTA SUPER TRUNFO <<<\n");
    printf("------- Cadastro de cartas -------\n");
    printf("==================================\n");
    printf("* Carta número 1 *\n\n");


    //Capturando a entrada de dados do prompt
    printf("Digite a letra do Estado: ");
    scanf("%c", letraEstado_1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade_1, sizeof(nomeCidade_1), stdin);
    nomeCidade_1[strcspn(nomeCidade_1, "\n")] = '\0';

    printf("Digite o código da cidade: ");
    fgets(codigoCidade_1, sizeof(codigoCidade_1), stdin);
    codigoCidade_1[strcspn(codigoCidade_1, "\n")] = '\0';

    printf("Qual a população da cidade: ");
    scanf("%f", &populacaoCidade_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibCidade_1);

    printf("Digite quantos pontos turísticos a cidade possue: ");
    scanf("%d", &ptsTuristicosCidade_1);

    printf("Digite a área em m2 que cidade possue: ");
    scanf("%f", &areaCidade_1);


   
    //Exibição dos valores inseridos
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", letraEstado_1);
    printf("Código: %s\n", codigoCidade_1);
    printf("Nome da cidade: %s\n", nomeCidade_1);
    printf("População: %.6f\n", populacaoCidade_1);
    printf("Área: %.6f\n", areaCidade_1);
    printf("PIB: %.6f\n", pibCidade_1);
    printf("Números de pontos turísticos: %d\n", ptsTuristicosCidade_1);


    //Mensagem de sucesso!
    printf("\n");
    printf("========================================\n");
    printf("*** Cidade 1 cadastrada com sucesso! ***\n");
    printf("========================================\n");

    return 0;
}
