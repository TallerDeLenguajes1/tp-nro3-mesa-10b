#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum TRaza{Orco, Humano, Mago, Enano, Elfo};
char Nombres[6][10]={"nini", "tali", "bili", "chipa", "torcaza"};
char Apellidos[6][10]={"Caram", "Godoy", "Decima", "Langa", "Gonzales"};

typedef struct {
	TRaza Raza; //nota 1
	char *ApellidoNombre; //nota 2
	int edad; //entre 0 a 300
	double Salud; //100
}TDatos;

typedef struct{
	int velocidad;// 1 a 10
	int destreza; //1 a 5
	int fuerza;//1 a 10
	int nivel; //1 a 10
	int armadura; //1 a 10
}TCaracteristicas;

typedef struct{
	TDatos * DatosPersonales;
	TCaracteristicas * Caracteristicas;
}TPersonaje;

void cargaCaracteristicas(TPersonaje *personajes, int a);

int main(){
	TPersonaje *personajes;
	int num;

	/*datos = (TDatos*)malloc(sizeof(TDatos));
	caracteristicas = (TCaracteristicas*)malloc(sizeof(TCaracteristicas));*/
	personajes = (TPersonaje*)malloc(sizeof(TPersonaje));
	printf("Elija un personaje: ");
	scanf("%d",num);

	if (num != 0 && num < 6)
	{
		printf("Personaje elegido: %s %s\n", Nombres[num][num], Apellidos[num][num]);
		cargaCaracteristicas(personajes,1);
	}

}

void cargaCaracteristicas(TPersonaje *personajes, int a){
	for (int i = 0; i < a; ++i)
	{	
		(personajes+i)->Caracteristicas = (TCaracteristicas*)malloc(sizeof(TCaracteristicas));

		(personajes+i)->Caracteristicas->velocidad = random(10);
		(personajes+i)->Caracteristicas->destreza = random(5);
		(personajes+i)->Caracteristicas->fuerza = random(10);
		(personajes+i)->Caracteristicas->nivel = random(10);
		(personajes+i)->Caracteristicas->armadura = random(10);

		printf("Velocidad: %d \n", (personajes+i)->Caracteristicas->velocidad);
		printf("Destreza: %d \n", (personajes+i)->Caracteristicas->destreza);
		printf("Fuerza: %d \n", (personajes+i)->Caracteristicas->fuerza);
		printf("Nivel: %d \n", (personajes+i)->Caracteristicas->nivel);
		printf("Armadura: %d \n", (personajes+i)->Caracteristicas->armadura);
	}

}