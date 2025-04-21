#include <stdio.h>
int main (){
    /*Variáveis carta um*/
    int npt1 /*Número de pontos turísticos*/, população1;
    float area1, PIB1;
    char  nc1[50]/*Nome da Cidade*/, cdc1 [50] /*Código da carta*/, estado1 /*Uma letra de "A" a "H"*/;

    /*Variáveis carta dois*/
    int npt2 /*Número de pontos turísticos*/, população2;
    float area2, PIB2;
    char  nc2 [50]/*Nome da Cidade*/, cdc2 [50] /*Código da carta*/, estado2 /*Uma letra de "A" a "H"*/;
        
        printf("Seja bem vindo ao Super Trunfo!\n");
        printf("Para começar insira os dados de duas cartas...\n");  
        printf("Em sua primeira carta insira uma letra de A a H que represente um dos oito estados:\n");
        /*Estado*/
        scanf(" %c", &estado1);
        printf("Agora para a segunda carta:\n");
        scanf(" %c", &estado2);
        /*Código da carta*/
        printf("Insira o código para a primeira carta (Escolha entre as opções 01-02-03-04):\n");
        scanf(" %s", &cdc1);
        printf("Faça o mesmo para a segunda carta (Escolha entre as opções 01-02-03-04):\n");
        scanf(" %s", &cdc2);
        /*Nome da cidade*/
        printf("Insira o nome da cidade:\n");
        scanf(" %s", &nc1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %s", &nc2);
        /*População*/
        printf("Insira a população:\n");
        scanf(" %d", &população1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %d", &população2);
        /*Área*/
        printf("Insira a área em KM²:\n");
        scanf(" %f", &area1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %f", &area2);
        /*PIB*/
        printf("Insira PIB:\n");
        scanf(" %s", &PIB1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %s", &PIB2);
        /*Pontos turísticos*/
        printf("Insira número de pontos turísticos:\n");
        scanf(" %d", &npt1);
        printf("Faça o mesmo para a segunda carta:\n");
        scanf(" %d", &npt2);
        //Saída de dados carta 1
        printf("_________________________________________________________ \n");
        printf("Carta 1\n");
        printf("Estado: %c \n", estado1);
        printf("Código: %c%s \n", estado1, cdc1);
        printf("Nome da cidade: %s \n", nc1);
        printf("População: %d \n", população1);
        printf("Área: %.2fKM²\n", area1);
        printf("PIB: %f \n", PIB1);
        printf("Pontos turísticos: %d \n", npt1);
         //Saída de dados carta 2
         printf("_________________________________________________________ \n");
         printf("Carta 2\n");
         printf("Estado: %c \n", estado2);
         printf("Código: %c%s \n", estado2, cdc2);
         printf("Nome da cidade: %s \n", nc2);
         printf("População: %d \n", população2);
         printf("Área: %.2fKM²\n", area2);
         printf("PIB: %f \n", PIB2);
         printf("Pontos turísticos: %d \n", npt2);


        

        
      return 0;


}
