//Estructura para los datos de un corredor 

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{

	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];

}corredor;

int main(){
	
	char categoria[20];
		
	printf("Digite su nombre: ");
    scanf("%s",&corredor.nombre);
 
    printf("Digite su edad: ");
    scanf("%d", &corredor.edad);
    
    printf("Digite su sexo: ");
    scanf("%s",&corredor.sexo);
    
    printf("Digete su club: ");
    scanf("%s",corredor.club);
    
    if(corredor.edad <=18)
	{
	strcpy(categoria,"Juvenil");
	}
	else if(corredor.edad <=40)
	{
	strcpy(categoria,"Senior");
	}
    else if(corredor.edad>40)
	{
	strcpy(categoria,"Veterano");
	}

    printf("\nDatos del corredor: \n");
    printf("\nNombre: %s",corredor.nombre);
    printf("\nEdad: %d", corredor.edad);
    printf("\nSexo: %s", corredor.sexo);
    printf("\nClub: %s", corredor.club);
    printf("\nCategoria de competicion: %s", categoria);
    
return 0;
}
