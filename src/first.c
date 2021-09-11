#include <stdio.h>
#include <string.h>
#include "lib/headers/hello_fn.h"
#include "lib/headers/structures.h"




/*Declaration des signatures de méthode*/
void swip(int *a, int *b);
void initialize_personne(Personne *p);


/* argc: nombres arguments.....argv tableau des arguments. argv[0] nom du programme argv[1] 1er argument, etc...*/
int main(int argc, char ** argv){

	Coordonnees c;
	c.x = 45;
	int z= c.x;
	printf("%d est x\n",z);

	Personne p;
	initialize_personne(&p);

	printf("age: %d et le nom %s\n",p.age,p.nom);

	FILE * P_FILE; /* pointer sur un fichier*/
	/*char NOM_FICHIER[50];*/
	char NOM_PERSONNE[50];
	char P[50];
	int age;
	int a=10;
	int b=20;
	int count=10;
 
/*printf("Entrez le nom du fichier à créer pour enregistrement :: ");
	scanf("%s", NOM_FICHIER);*/

	P_FILE = fopen(argv[1], "a");/* on créer le fichier*/ printf("Entrez identty: ");
        scanf("%s %s %i", NOM_PERSONNE, P, &age);

	for(int i=0;i<count;i++){
	 fprintf(P_FILE,"%s,%s,%i\n",NOM_PERSONNE,P,age);
	}

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


void initialize_personne(Personne *p){
	p->age=48;
	strcpy(p->nom,"DUPOND");
}
