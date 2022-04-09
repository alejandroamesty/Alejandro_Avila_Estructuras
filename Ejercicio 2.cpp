//Estructura para el mejor promedio entre tres alumnos

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct alumno{
	
	char nombre[20];
	int edad;
	int promedio;
	
}alumno[3];

int main(){

	for(int i=0;i<3;i++){

	fflush(stdin);
	printf("Digite el nombre del alumno: ");
	scanf("%s",&alumno[i].nombre);
		
	printf("Digite la edad del alumno: ");
	scanf("%d",&alumno[i].edad);
	
	printf("Digite el promedio del alumno: ");
	scanf("%d",&alumno[i].promedio);

	printf("\n");
	
}

	int mejor = 0, pro=0;
	
	for(int i=0;i<3;i++){
		
	if(alumno[i].promedio > mejor)
	{
		mejor = alumno[i].promedio;
		pro = i;
	}
	}

	printf("Alumno con el mejor promedio: ");
	printf("\nNombre: %s", alumno[pro].nombre);
	printf("\nEdad: %d", alumno[pro].edad);
	printf("\nPromedio: %d", alumno[pro].promedio);
	
	return 0;
}
