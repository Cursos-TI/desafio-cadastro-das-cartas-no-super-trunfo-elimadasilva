#include<stdio.h>
int main(){
    //Declaração de variáveis
    int carta1, carta2,numeroPontosTuristicosCidade1, numeroPontosTuristicosCidade2;
    char estadoCarta1[4], estadoCarta2[4], codigocarta1[10], codigocarta2[10], nomecidade1[15], nomecidade2[15] ;
    float  areaCidade1, areaCidade2, pibCidade1, pibCidade2, inversoDensidadePopulacionalCidade1, inversoDensidadePopulacionalCidade2;
    float densidadePopulacionalCidade1, densidadePopulacionalCidade2, PIBperCapita1, PIBperCapita2, superPoderCarta1, superPoderCarta2;
    unsigned long int  populacaoCidade1, populacaoCidade2;
    
    //Entrada de Dados primeira carta
    printf("olá bem vido ao jogo Super Trunfo! \n" );
    printf("Vamos Começar pelos dados da sua primeira carta ok.\n\n");
    printf("Digite uma letra de A a H (essa letra representará um dos oito estados):");
    scanf("%s", &estadoCarta1);
    printf("Digite Código da Carta (A letra do estado seguida de um número de 01 a 04. Ex: A01, B03):");
    scanf("%s", &codigocarta1);
    printf("Digite o nome da cidade (Se for nome composto nao colocar expaço entre as palavras. Ex: SãoPaulo):");
    scanf("%s", &nomecidade1);
    printf("Digite o número de habitantes da cidade:");
    scanf("%lu", &populacaoCidade1);
    printf("Digite A área da cidade em quilômetros quadrados(Use ponto no lugar de vírgula):");
    scanf("%f", &areaCidade1);
    printf("Digite PIB (Produto Interno Bruto) da cidade (Use ponto no lugar de vírgula):");
    scanf("%f", &pibCidade1);
    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &numeroPontosTuristicosCidade1);

    //Entrada de Dados segunda carta
    printf("Muito bem! Agora vamos digitar os dados da sua segunda carta ok. \n");
    printf("Digite uma letra de A a H (essa letra representará um dos oito estados):");
    scanf("%s", &estadoCarta2);
    printf("Digite Código da Carta (A letra do estado seguida de um número de 01 a 04. Ex: A01, B03):");
    scanf("%s", &codigocarta2);
    printf("Digite o nome da cidade (Se for nome composto nao colocar expaço entre as palavras. Ex: SãoPaulo):");
    scanf("%s", &nomecidade2);
    printf("Digite o número de habitantes da cidade:");
    scanf("%lu", &populacaoCidade2);
    printf("Digite A área da cidade em quilômetros quadrados(Use ponto no lugar de vírgula):");
    scanf("%f", &areaCidade2);
    printf("Digite PIB (Produto Interno Bruto) da cidade (Use ponto no lugar de vírgula):");
    scanf("%f", &pibCidade2);
    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &numeroPontosTuristicosCidade2);

    //Calculo Densidade Populacional: 
    densidadePopulacionalCidade1 = (float) populacaoCidade1/areaCidade1;
    densidadePopulacionalCidade2 = (float) populacaoCidade2/areaCidade2;

    //Calculo inverso da densidade populaional:
    inversoDensidadePopulacionalCidade1 = 1/densidadePopulacionalCidade1;
    inversoDensidadePopulacionalCidade2  = 1/densidadePopulacionalCidade2;

    //Calculo PIB per Capita: 
    PIBperCapita1 = (float) pibCidade1/populacaoCidade1;
    PIBperCapita2 = (float) pibCidade2/populacaoCidade2;

    // Calculo Super Poder
    //é a soma dos atributos: população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional 
    superPoderCarta1 = (float) (populacaoCidade1 + areaCidade1 + pibCidade1 + numeroPontosTuristicosCidade1 + PIBperCapita1 + inversoDensidadePopulacionalCidade1);
    superPoderCarta2 = (float) (populacaoCidade2 + areaCidade2 + pibCidade2 + numeroPontosTuristicosCidade2 + PIBperCapita2 + inversoDensidadePopulacionalCidade2);
   
    /*Comparar as Cartas: Compare as duas cartas atributo por atributo 
    (exceto estado, código e nome), incluindo o Super Poder. 
    Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos 
    (incluindo Super Poder), a carta com o maior valor vence.
 */

    //Saída de dados
    printf("Dados: \n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estadoCarta1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d \n\n", numeroPontosTuristicosCidade1);
    printf("Densidade populacional da Cidade %s é: %.2f\n", nomecidade1, densidadePopulacionalCidade1);
    printf("PIB per Capita da Cidade %s é: %.2f\n", nomecidade1, PIBperCapita1);
    printf("Inverso da Densidade populacional da Cidade %s é: %.15f\n", nomecidade1, inversoDensidadePopulacionalCidade1);
    printf("Super Poder Carta 1: %.2f\n\n",superPoderCarta1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estadoCarta2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d \n\n", numeroPontosTuristicosCidade2);
    printf("Densidade populacional da Cidade: %s é:  %.2f\n", nomecidade2, densidadePopulacionalCidade2);
    printf("PIB per Capita da Cidade: %s é: %.2f\n", nomecidade2, PIBperCapita2);
    printf("Inverso da Densidade populacional da Cidade %s é: %.15f\n", nomecidade2, inversoDensidadePopulacionalCidade2);
    printf("Super Poder Carta 2: %.2f\n",superPoderCarta2);

    //Comparando os atributos das cartas
    printf("Comparação de Cartas:\n");
     if (populacaoCidade1 > populacaoCidade2) {
    printf("População: Carta 1 venceu (1)\n");
     } else {
    printf("População: Carta 2 venceu (0)\n");
    }

    if (areaCidade1 > areaCidade2) {
    printf("Área: Carta 1 venceu (1)\n");
    } else {
    printf("Área: Carta 2 venceu (0)\n");
    }

    if (pibCidade1 > pibCidade2) {
    printf("PIB: Carta 1 venceu (1)\n");
    } else {
    printf("PIB: Carta 2 venceu (0)\n");
    }

    if (numeroPontosTuristicosCidade1 > numeroPontosTuristicosCidade2) {
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densidadePopulacionalCidade1 > numeroPontosTuristicosCidade2) {
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (PIBperCapita1 > PIBperCapita2) {
    printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
    printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (superPoderCarta1 > superPoderCarta2) {
    printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
    printf("Super Poder: Carta 2 venceu (0)\n");
    }

     return 0;
  
}