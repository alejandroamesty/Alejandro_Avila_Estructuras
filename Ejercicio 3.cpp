// Estructura para los datos del empleado con menor y mayor salario

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct empleados{

	char nombre[20];
	int salario;	
	
}empleados[100];

int main(){
	
	int n_empleados, mayor=0, menor=100, sam, sm;
	
	printf("Digite el numero de empleados: ");
	scanf("%d", &n_empleados);
	
	for(int i=0;i<n_empleados;i++){
		
		fflush(stdin);
		printf("\nDigite su nombre: ");
		scanf("%s",&empleados[i].nombre);
		
		printf("Digite su salario: ");
		scanf ("%d",&empleados[i].salario);
		
		if(empleados[i].salario > mayor)
		{
			mayor = empleados[i].salario;
			sam = i;
		}

		if(empleados[i].salario < menor)
		{
			menor = empleados[i].salario;
			sm = i;
		}		
	}
	
	printf("\nEmpleado de la empresa con mayor salario: ");
	printf("\nNombre: %s", empleados[sam].nombre);
	printf("\nSalario: %d \n", empleados[sam].salario);
	
	printf("\nEmpleado de la empresa con menor salario: ");
	printf("\nNombre: %s", empleados[sm].nombre);
	printf("\nSalario: %d", empleados[sm].salario);
	
	return 0;
}	
