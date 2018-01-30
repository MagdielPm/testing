#include <stdio.h>
#include  <math.h>
/*
Autor: Magdiel Pech 
Entrada: numeroIngresado (int)
Salidas: numerodeDecimales
Procedimiento General: 
Algoritmo que te da elnúmero de dígitos de un número 
entero mayor a 0 y menor a 10,000
*/

int main(int argc, char *argv[]) {
	
	/*
	Variable entera llamada: numeroIngresado
	Variable entera de salida: numerodeDecimales
	Variable entera de contador de ciclo for
	*/
	int numeroIngresado;
	int numerodeDecimales;
	int i=1;


	printf("Ingresa un numero:");
	scanf("%d",&numeroIngresado);
	
	/* Procedimiento */
	
	for(i; i<6 ; i++)
	{
		if(pow(10,i-1) <= numeroIngresado && numeroIngresado  <= pow(10,i)-1)
		{
			numerodeDecimales = i;
			
		}	
	}
	/* Salida de resultado */
    printf("El numero ingresado tiene: %d digitos \n",numerodeDecimales);
	
	return 0;
}
/*Usan una libreria no permitida <math.h>
  con el de entrada 0 no arroja los datos de salida correctos
  con la entrada 1000 no arroja los datos de salida correctos
  con todos los demas datos de entrada (1, 10, 100, 10000) funciona
  la introduccion debe ir antes de include
Hecho por Rigel Bustamante Lara Equipo Dinamita*/


