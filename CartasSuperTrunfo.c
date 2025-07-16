#include<stdio.h>
int main(){
    //Declaração de variáveis
    int carta1, carta2, populacaoCidade1, populacaoCidade2, numeroPontosTuristicosCidade1, numeroPontosTuristicosCidade2;
    char estadoCarta1[4], estadoCarta2[4], codigocarta1[10], codigocarta2[10], nomecidade1[15], nomecidade2[15] ;
    float  areaCidade1, areaCidade2, pibCidade1, pibCidade2, densidadePopulacionalCidade1, densidadePopulacionalCidade2, PIBperCapita1, PIBperCapita2;

    //Entrada de Dados do usuário : primeira carta
    printf("olá bem vido ao jogo Super Trunfo! \n" );
    printf("Vamos Começar pelos dados da sua primeira carta ok.\n\n");
    printf("Digite uma letra de A a H (essa letra representará um dos oito estados):");
    scanf("%s", estadoCarta1);
    printf("Digite Código da Carta (A letra do estado seguida de um número de 01 a 04. Ex: A01, B03):");
    scanf("%s", codigocarta1);
    printf("Digite o nome da cidade (Se for nome composto nao colocar expaço entre as palavras. Ex: SãoPaulo):");
    scanf("%s", nomecidade1);
    printf("Digite o número de habitantes da cidade:");
    scanf("%d", &populacaoCidade1);
    printf("Digite A área da cidade em quilômetros quadrados(Use ponto no lugar de vírgula):");
    scanf("%f", &areaCidade1);
    printf("Digite PIB (Produto Interno Bruto) da cidade (Use ponto no lugar de vírgula):");
    scanf("%f", &pibCidade1);
    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &numeroPontosTuristicosCidade1);

    //Entrada de Dados do usuário : segunda carta
    printf("Muito bem! Agora vamos digitar os dados da sua segunda carta ok. \n");
    printf("Digite uma letra de A a H (essa letra representará um dos oito estados):");
    scanf("%s", estadoCarta2);
    printf("Digite Código da Carta (A letra do estado seguida de um número de 01 a 04. Ex: A01, B03):");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade (Se for nome composto nao colocar expaço entre as palavras. Ex: SãoPaulo):");
    scanf("%s", nomecidade2);
    printf("Digite o número de habitantes da cidade:");
    scanf("%d", &populacaoCidade2);
    printf("Digite A área da cidade em quilômetros quadrados(Use ponto no lugar de vírgula):");
    scanf("%f", &areaCidade2);
    printf("Digite PIB (Produto Interno Bruto) da cidade (Use ponto no lugar de vírgula):");
    scanf("%f", &pibCidade2);
    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &numeroPontosTuristicosCidade2);

    //Calculo densidade Populacional: 
    densidadePopulacionalCidade1 = (float) populacaoCidade1/areaCidade1;
    densidadePopulacionalCidade2 = (float) populacaoCidade2/areaCidade2;

    //Calculo PIB per Capita: 
    PIBperCapita1 = (float) pibCidade1/populacaoCidade1;
    PIBperCapita2 = (float) pibCidade2/populacaoCidade2;
    
    
    //Saída de dados primeira e segunda carta

    printf("Dados: \n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estadoCarta1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d \n\n", numeroPontosTuristicosCidade1);
    printf("Densidade populacional da Cidade %s é: %.2f\n", nomecidade1, densidadePopulacionalCidade1);
    printf("PIB per Capita da Cidade %s é: %.2f\n", nomecidade1, PIBperCapita1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoCarta2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d \n\n", numeroPontosTuristicosCidade2);
    printf("Densidade populacional da Cidade %s é:  %.2f\n", nomecidade2, densidadePopulacionalCidade2);
    printf("PIB per Capita da Cidade %s é: %.2f\n", nomecidade2, PIBperCapita2);

     return 0;
  
}