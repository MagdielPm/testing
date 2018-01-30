#include <stdio.h>
/*
Autor: C�sar Gonz�lez
Entradas: numeroIngresado
Salidas: decimales
Procedimiento general: dividir el entero ingresado entre 10 hasta que no se pueda dividir m�s
*/
int main(int argc, char *argv[]) {
	/*Entrada
	numeroIngresado variable de entrada
	numeroIngresado=!0 como condici�n
	decimales acumulador
	*/
	printf("Escribe un numero: ");
	int numeroIngresado, decimales=0;
	scanf("%d",&numeroIngresado);
	/*procedimiento*/
	do{
		decimales=decimales+1;
		numeroIngresado=numeroIngresado/10;
	} while(numeroIngresado!=0);
	/*Salida*/
	printf("El n�mero ingresado tiene %d decimales\n",decimales);
	return 0;
	
}
/* El programa funciona con todos los datos de entrada que probamos (0, 1, 10 ,100, 1000, 10000) 
   ya que arrojaron datos de salida correctos
  La introduccion debe ir antes de include
   Hecho por Rigel Bustamente Lara Equipo Dinamita*/

