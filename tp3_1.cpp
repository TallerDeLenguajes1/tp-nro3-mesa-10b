#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
	TRaza Raza; //nota 1
	Char *ApellidoNombre; //nota 2
	int edad; //entre 0 a 300
	double Salud=100: //100
}TDatos;

typedef struct{
	int velocidad;// 1 a 10
	int destreza; //1 a 5
	int fuerza;//1 a 10
	int Nivel; //1 a 10
	int Armadura; //1 a 10
}TCaracteristicas;

typedef struct{
	TDatos * DatosPersonales
	TCaracteristicas * Caracteristicas
}TPersonaje;

int main(){
	TDatos *datos;
	TCaracteristicas *caracteristicas;
	TPersonaje *personajes;

	datos = (TDatos*)malloc(sizeof(TDatos));
	caracteristicas = (TCaracteristicas*)malloc(sizeof(TCaracteristicas));
	personajes = (TPersonaje*)malloc(sizeof(TPersonaje));
	
	enum TRaza{Orco, Humano, Mago, Enano, Elfo}
	char Nombres[6][10]={“ale”, “b”, “c”, “d”, “e”}
	char Apellidos[6][10]={“f”, “g”, “hormiga”, “i”, “j”}


}