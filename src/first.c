#include <stdio.h>
#include <string.h>
#include "lib/headers/hello_fn.h"

void swip(int *a, int *b);

int main(void){

FILE * P_FILE; /* pointer sur un fichier*/
char NOM_FICHIER[50];
char NOM_PERSONNE[50];
char P[50];
int age;
int a=10;
int b=20;
 
printf("Entrez le nom du fichier à créer pour enregistrement: ");
scanf("%s", NOM_FICHIER);

P_FILE = fopen(NOM_FICHIER, "a");/* on créer le fichier*/ printf("Entrez identty: ");
 scanf("%s %s %i", NOM_PERSONNE, P, &age);
 fprintf(P_FILE,"%s,%s,%i\n",NOM_PERSONNE,P,age);



 fclose(P_FILE); /* fermeture du pointer*/

printf("AVANT a vaut %d et b vaut %d\n",a,b);
swip(&a,&b);
printf("APRES a vaut %d et b vaut %d\n",a,b);

 return 0;
}

void swip(int *a, int *b){
*a = *a + *b;
*b = *a - *b;
*a = *a -*b;
}
