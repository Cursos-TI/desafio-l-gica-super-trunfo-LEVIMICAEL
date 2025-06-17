#include <stdio.h>

int main(){

char estado1[50], codigo1[10],nomecidade1[100];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ;
char estado2[50], codigo2[10], nomecidade2[100];
int populacao1, populacao2;
float area1, area2, pib1, pib2;                          
int pontosturisticos1, pontosturisticos2;

//CARTA 1//

printf("insira os dados da carta 1 : \n");
printf("o estado (a-h) é : \n");
scanf("%s", estado1);                                                                                                                                                                                                                                                                                                  
printf("o codico é : \n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
scanf("%s", codigo1);
printf("a cidade é : \n");
scanf("%s", nomecidade1);
printf("a populacao é : \n");
scanf("%d", &populacao1);
printf("a area em (km) é : \n");
scanf("%f", &area1 );
printf("o pib é : \n");
scanf("%f", &pib1);
printf("o numero de pontos turisticos é : \n");
scanf("%d", &pontosturisticos1);

//CARTA 2//

printf("insira os dados da carta 2 : \n");
printf("o estado (a-h) é : \n");
scanf("%s", estado2);
printf("o codico é : \n");
scanf("%s", codigo2);
printf("a cidade é : \n");
scanf("%s", nomecidade2);
printf("a populacao é : \n");
scanf("%d", &populacao2);
printf("a area em (km) é : \n");
scanf("%f", &area2 );
printf("o pib é : \n");
scanf("%f", &pib2);
printf("o numero de pontos turisticos é : \n");
scanf("%d", &pontosturisticos2);


//DESIDADE POPULACIONAL E PIB PER CAPITA//

float densidade1 = (float) populacao1 / area1;
float densidade2 = (float) populacao2 / area2;
float pibpercapita1 = pib1 / populacao1;
float pibpercapita2 = pib2 / populacao2;

//EXIBCAO DE DADOS DAS CARTAS//

printf("\ncarta1 - %s (%s):\n", nomecidade1, estado1);
printf("populacao : %d \n", populacao1);
printf("area em km : %.2f \n", area1);
printf("pib : %.2f \n", pib1);
printf("densidade populacional : %.2f \n", densidade1);
printf("pib per capita : %.2f \n", pibpercapita1);


printf("\ncarta2 : %s(%s)\n", nomecidade2, estado2);
printf("populacao : %d \n", populacao2);
printf("area em km : %.2f \n", area2);
printf("pib : %.2f \n", pib2);
printf("densidade populacional : %.2f \n", densidade2);
printf("pib per capita : %.2f \n", pibpercapita2);


//comparando cartas - populacao//

printf("\nCOMPARACAO DE CARTAS (ATRIBUTO: POPULACAO):\n");
printf("CARTA 1-%s (%s):%d\n", nomecidade1, estado1, populacao1);
printf("CARTA 2-%s (%s):%d\n", nomecidade2, estado2, populacao2);


if (populacao1 > populacao2)
{
    printf("RESULTADO: CARTA 1 (%s) VENCEU!\n", nomecidade1);
}else if (populacao2 > populacao1)
{
 printf("RESULTADO: CARTA 2 (%s) VENCEU\n", nomecidade2);
}else{
    printf("RESULTADO: EMPATE!\n");
}



return 0;

}