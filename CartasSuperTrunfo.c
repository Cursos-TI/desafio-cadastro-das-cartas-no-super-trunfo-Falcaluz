#include <stdio.h>

int  main()
{
    // Desafio Super Trunfo - Países
//  Cadastro das Cartas

printf("   \n"); 

    char estado1[02], estado2[02];  //Estado representado por uma letra(A a H):
    char codigo1[05], codigo2[05];  // Código da carta, composto pela letra do estado + número:
    char nome1[50], nome2[50];  //Nome da cidade:
    int populacao1, populacao2;  //População da cidade:
    float area1, area2;  //Área   da cidade em km²:
    float pib1, pib2;     // PIB da cidade
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos
    float densidade_populacao1, densidade_populacao2;
    float pib_percapita1, pib_percapita2;
        
  // Cadrasto da primeira Carta
printf("Boas-vindas ao Super Trunfo! Aqui, cada carta é uma chance de vitória.\n");
printf("Mostre sua habilidade e derrote seus adversários!\n");
printf("Que comecem os jogos!\n");

    printf("\nVamos começar cadastrando as cartas que iremos jogar:\n");

    printf("Cadastro da Carta 01:\n");

    printf("Digite a letra do estado (A a H):\n");
    scanf(" %s", estado1);

    printf("Digite o código da carta (letra do estado seguida de número, ex: A01):\n");
    scanf("%s", codigo1);


    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome1);
   

    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos1);

    //Detalhes da Primeira Carta:
    printf("   \n");

    printf("\nDetalhes da Carta01:\n");

    printf("Digite a letra do Estado (A a H): %s\n", estado1);
    printf("Digite o código da Carta: %s\n", codigo1);
    printf("Digite o Nome da Cidade: %s\n", nome1);
    printf("Digite a População da Cidade: %i habitantes\n", populacao1);
    printf("Digite a Área da Cidade: %.2f bilhoões de reais km²\n", area1);
    printf("Digite o PIB: R$ %.2f\n", pib1);
    printf("Digite o Número de pontos turísticos: %i\n", pontos_turisticos1);
    printf("---------------------------------\n");
    densidade_populacao1 = populacao1 / area1;
    printf("A densidade populacional é: %.2f hab/km²\n", densidade_populacao1);
    pib_percapita1 = pib1/populacao1;
    printf("O PIB per capital da população é: %.2f \n", pib_percapita1);


    // Cadrasto da segunda Carta 
    printf("   \n");

    printf("\nCadastro da Carta 02:\n");

    printf("Digite a letra do estado (A a H): \n");
    scanf(" %s", &estado2); 

    printf("Digite o código da carta (letra do estado seguida de número, ex: A01):\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome2);
  
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i",&pontos_turisticos2);
     
    //Detalhes da Segunda Carta:      

    printf("\nDetalhes da Carta02:\n");

    printf("Digite a letra do Estado (A a H): %s\n", estado2);
    printf("Digite o código da Carta: %s\n", codigo2);
    printf("Digite o Nome da Cidade: %s\n", nome2);
    printf("Digite a População da Cidade: %d habitantes\n", populacao2);
    printf("Digite a Área da Cidade: %.2f km²\n", area2);
    printf("Digite o PIB: R$ %.2f bilhoões de reais\n", pib2);
    printf("Digite o Número de pontos turísticos: %i\n", pontos_turisticos2);
    printf("---------------------------------\n");
    densidade_populacao2 = populacao2 / area2;
    printf("A densidade populacional é: %.2f hab/km²\n", densidade_populacao2);
    pib_percapita2 = pib2/populacao2;
    printf("O PIB per capital da população é: %.2f\n", pib_percapita2);

    return 0; //retorna verdadeiro 

}
