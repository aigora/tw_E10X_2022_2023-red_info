#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>
#include <string.h>

int main()
{ 
	float max, min;

    Lee_Fichero(dato, cadenas, fechas);
    Red_Info();
    MenuPrincipal();
    
    system("pause");

    max = calcularMaximo(dato);
    printf("El Maximo valor encontrado es: %f Gwh\n", max);
    
    
    
    return 0;
}
