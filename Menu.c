#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>
#include <string.h>

int main()
{ 
    ENERGIA dato[17];
	CADENAS cadenas[5];
	FECHAS fechas[25];

    Lee_Fichero(dato, cadenas, fechas);
    Red_Info();
    MenuPrincipal();

    return 0;
}
