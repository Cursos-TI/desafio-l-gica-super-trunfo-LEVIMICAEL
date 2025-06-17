#include <stdio.h>

int main(){

char codigo1[4], codigo2[4];
char estado1, estado2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ;
char nomecidade1[50], nomecidade2[50];
int populacao1, populacao2;
float area1, area2;                            
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;

//CARTA 1//

printf("insira os dados da carta 1 : \n");
printf("o estado (a-h) é : \n");
scanf("%c", &estado1);                                                                                                                                                                                                                                                                                                  
printf("o codico é : \n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
scanf("%s", &codigo1);
printf("a cidade é : \n");
scanf("%s", &nomecidade1);
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
scanf("%c", &estado2);
printf("o codico é : \n");
scanf("%s", &codigo2);
printf("a cidade é : \n");
scanf("%s", &nomecidade2);
printf("a populacao é : \n");
scanf("%d", &populacao2);
printf("a area em (km) é : \n");
scanf("%f", &area2 );
printf("o pib é : \n");
scanf("%f", &pib2);
printf("o numero de pontos turisticos é : \n");
scanf("%d", &pontosturisticos2);


printf("\ncarta1 : \n");
printf("estado : %C \n", estado1);
printf("codigo : %s \n", codigo1);
printf("cidade : %s \n", nomecidade1);
printf("populacao : %d \n", populacao1);
printf("numero de pontos turisticos : %d \n", pontosturisticos1);
printf("area em km : %f \n", area1);
printf("pib : %f \n", pib1);


printf("\ncarta2 : \n");
printf("estado : %C \n", estado2);
printf("codigo : %s \n", codigo2);
printf("cidade : %s \n", nomecidade2);
printf("populacao : %d \n", populacao2);
printf("numero de pontos turisticos : %d \n", pontosturisticos2);
printf("area em km : %f \n", area2);
printf("pib : %f \n", pib2);

return 0;

}
