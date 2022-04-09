// Estructura para el atleta que ha ganado mayor numero de medallas

#include<iostream>
#include<conio.h>
using namespace std;

struct atleta{
	
	char nombre[20];
	char pais[20];
	int n_medallas;
	
}atleta[50];

int main(){
	
	int n_atletas;
	int mayor=0, medM=0;
	
	printf("Digite el numero de atletas: ");
	scanf("%d",&n_atletas);

	for(int i=0;i<n_atletas;i++){
		
		fflush(stdin);
		printf("\nDigite su nombre: ");
		scanf("%s", &atleta[i].nombre,20,'\n');
		
		printf("Digite su pais: "); 
		scanf("%s", &atleta[i].pais);
		
		printf("Digite su numero de medallas: ");
		scanf ("%d", &atleta[i].n_medallas);


		if(atleta[i].n_medallas > mayor)
		{
			mayor = atleta[i].n_medallas;
			medM = i;
		}
	}
	
	printf("\nAtleta que gano el mayor numero de medallas: \n");
	printf("Nombre: %s \n", atleta[medM].nombre);
	printf("Pais: %s", atleta[medM].pais);
	
	return 0;
}
