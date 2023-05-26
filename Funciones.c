#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>
#include <string.h>

void MenuPrincipal()
{
    int tecla;

    Red_Info();
    Hora();
    //Funcion del menu principal, con un do while para elegir una opcion de estas 4.
    printf("\n");
    printf("Bienvenido a la red de C%clculos El%cctricos de Espana, seleccione la opci%cn que desea consultar:\n",160,130,162);
    printf("\n");
    printf("1. Energ%cas renovables\n",161);
    printf("\n");
    printf("2. Energ%cas NO renovables\n",161);
    printf("\n");
    printf("3. Energ%ca Total\n",161);
    printf("\n");
    printf("4. Informaci%cn breve y descripci%cn de las energ%cas\n",162,162,161);
    printf("\n");

    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i", &tecla);
    }
    while(tecla != 1 && tecla != 2 && tecla != 3 && tecla != 4);

    switch(tecla)
    {
        case 1:
        //Funcion energias no renovables
            system("cls");
            EnergiasRenovables();
        break;

        case 2:
        //Funcion para las energias no renovables
            system("cls");
            EnergiasNoRenovables();
        break;

        case 3:
        //Funcion para la energia total
            system("cls");
            EnergiaTotal();
        break;

        case 4:
        //Funcion de informacion que te lleva a una breve descripcion de todas las energias
            system("cls");
            informacion();
        break;
    }

}


///ENERGIA  RENOVABLE
///FUNCION PARA CONSULTAR LS DIVERDAS ENERGIAS  RENOVABLES DEL TRABJO
EnergiasRenovables()
{
    int renovables;
    E_Renovables();

    printf("\n");
    printf("1. Energ%ca hidr%culica\n",161,160);
    printf("\n");
    printf("2. Hidroe%clica\n",162);
    printf("\n");
    printf("3. E%clica\n",162);
    printf("\n");
    printf("4. Solar fotovoltica\n");
    printf("\n");
    printf("5. Solar t%crmica\n",130);
    printf("\n");
    printf("6. Residuos renovables\n");
    printf("\n");
    printf("7. Otras energ%cas renovables\n",161);
    printf("\n");
    printf("0. Volver al men%c principal\n",163);
    printf("\n");

    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i", &renovables);
    }
    while(renovables < 0 || renovables > 7);

    switch(renovables)
    {
        case 1:
            system("cls");
            printf("\n");
            printf("Energ%ca hidr%culica, que desea consultar\n",161,160);
            analisis1();
        break;

        case 2:
            system("cls");
            printf("\n");
            printf("Energ%ca hidroe%clica, que desea consultar\n",161,162);
            analisis1();
        break;

        case 3:
            system("cls");
            printf("\n");
            printf("Energ%ca e%clica, que desea consultar\n",161,162);
            analisis1();
        break;

        case 4:
            system("cls");
            printf("\n");
            printf("Energ%ca solar fotovoltaica, que desea consultar\n",161);
            analisis1();
        break;

        case 5:
            system("cls");
            printf("\n");
            printf("Energ%ca solar t%crmica, que desea consultar\n",161,130);
            analisis1();
        break;

        case 6:
            system("cls");
            printf("\n");
            printf("Residuos renovables, que desea consultar\n");
            analisis1();
        break;

        case 7:
            system("cls");
            printf("\n");
            printf("Otras energ%cas renovables, que desea consultar\n",161);
            analisis1();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
    }
}


///ENERGIA NO RENOVABLE
///FUNCION PARA CONSULTAR LS DIVERDAS ENERGIAS NO RENOVABLES DEL TRABJO
void EnergiasNoRenovables()
{
    int norenovables;
    E_NoRenovables();

    printf("\n");
    printf("1. Turbinaci%cn de bombeo\n",162);
    printf("\n");
    printf("2. Nuclear\n");
    printf("\n");
    printf("3. Carb%cn\n",162);
    printf("\n");
    printf("4. Motores diesel\n");
    printf("\n");
    printf("5. Turbina de gas\n");
    printf("\n");
    printf("6. Turbina de vapor\n");
    printf("\n");
    printf("7. Ciclo combinado\n");
    printf("\n");
    printf("8. Cogeneraci%cn\n",162);
    printf("\n");
    printf("9. Residuos no renovables\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");

    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i",&norenovables);
    }
    while(norenovables < 0 || norenovables > 10);
    switch(norenovables)
    {
        case 1:
            system("cls");
            printf("\n");
            printf("Turbina de bombeo, que desea consultar\n");
            analisis2();
        break;

        case 2:
            system("cls");
            printf("\n");
            printf("Energ%ca nuclear, que desea consultar\n",161);
            analisis2();
        break;

        case 3:
            system("cls");
            printf("\n");
            printf("Carb%cn, que desea consultar\n",162);
            analisis2();
        break;

        case 4:
            system("cls");
            printf("\n");
            printf("Motor diesel, que desea consultar\n");
            analisis2();
        break;

        case 5:
            system("cls");
            printf("\n");
            printf("Turbina de gas, que desea consultar\n");
            analisis2();
        break;

        case 6:
            system("cls");
            printf("\n");
            printf("Turbina de vapor, que desea consultar\n");
            analisis2();
        break;

        case 7:
            system("cls");
            printf("\n");
            printf("Ciclo combinado, que desea consultar\n");
            analisis2();
        break;

        case 8:
            system("cls");
            printf("\n");
            printf("Cogeneraci%cn, que desea consultar\n",162);
            analisis2();
        break;

        case 9:
            system("cls");
            printf("\n");
            printf("Residuos no renovables, que desea consultar\n");
            analisis2();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
}
}


///ENERGIA TOTAL
///FUNCION PARA CONSULTAR EL APARTADO DE ENERGIA TOTAL

void EnergiaTotal()
{
    E_Total();

    printf("\n");
    printf("1. Consultar una fecha\n");
    printf("\n");
    printf("2. Consultar todas las fechas\n");
    printf("\n");
    printf("3. C%clculos\n",160);
    printf("\n");
    printf("0. Volver al men%c principal\n",163);
    printf("\n");

    analisis3();
}


///ENERGIA  RENOVABLES
///FUCNION DE CONSULTAS PARA LA ENERGIA  RENOVABLES
void analisis1()
{
    int consulta, ano, mes;
    char Fecha_elegida[8], opcion;
    float magnitud_encontrada;

        printf("\n");
        printf("1. Consultar informaci%cn de una fecha\n",162);
        printf("\n");
        printf("2. Consultar informaci%cn de todas las fechas\n",162);
        printf("\n");
        printf("3. C%clculos\n",160);
        printf("\n");
        printf("4. Volver al men%c de energ%cas renovables\n",163,161);
        printf("\n");
        printf("0. Volver al men%c principal\n",163);
        printf("\n");
    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i", &consulta);
    }
    while(consulta < 0 || consulta > 4);
    switch(consulta)
    {
        case 1:
            system("cls");
            printf("Que fecha quiere consultar, seleccionando primero el anno y seguidamente el mes\n");
            printf("\n");

            do
            {
                printf("Seleccione un anno valido (2021/2022)\n");
                scanf("%i", &ano);
            }
            while(ano!=2021 && ano!=2022);

            do
            {
                printf("Seleccione un mes valido\n");
                scanf("%i", &mes);
            }
            while(mes < 1 || mes > 12);

            printf("\n");

            sprintf(Fecha_elegida, "%i-%i", mes, ano);

            printf("\n");
            printf("La fecha seleccionada es: %s \n", Fecha_elegida);

            magnitud_encontrada=Buscar_por_fecha(dato,fechas, Fecha_elegida);
            printf("La magnitud encontrada en la fecha %s es: %f Gwh \n",Fecha_elegida, magnitud_encontrada);

            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                EnergiasRenovables();
            }
        break;

        case 2:
            system("cls");
            printf("Imprimir todas la fechas\n");
	    Imprime_Magnitudes_Energia(dato,fecha);
        break;

        case 3:
            system("cls");
            printf("Que c%clculos desea realizar\n",160);
            printf("\n");
            calculos1();
        break;

        case 4:
            system("cls");
            EnergiasRenovables();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;

    }
}


///ENERGIA NO RENOVABLES
///FUCNION DE CONSULTAS PARA LA ENERGIA NO RENOVABLES
void analisis2()
{
    int consulta, ano, mes;
    char Fecha_elegida[8], opcion;
    float magnitud_encontrada;

        printf("\n");
        printf("1. Consultar informaci%cn de una fecha\n",162);
        printf("\n");
        printf("2. Consultar informaci%cn de todas las fechas\n",162);
        printf("\n");
        printf("3. C%clculos\n",160);
        printf("\n");
        printf("4. Volver al men%c de energ%cas no renovables\n",163,161);
        printf("\n");
        printf("0. Volver al men%c principal\n",163);
        printf("\n");
    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i", &consulta);
    }
    while(consulta < 0 || consulta > 4);
    switch(consulta)
    {
        case 1:
            system("cls");
            printf("Que fecha quiere consultar, seleccionando primero el anno y seguidamente el mes\n");
            printf("\n");

            do
            {
                printf("Seleccione un anno valido (2021/2022)\n");
                scanf("%i", &ano);
            }
            while(ano!=2021 && ano!=2022);

            do
            {
                printf("Seleccione un mes valido\n");
                scanf("%i", &mes);
            }
            while(mes < 1 || mes > 12);

            printf("\n");

            sprintf(Fecha_elegida, "%i-%i", mes, ano);

            printf("\n");
            printf("La fecha seleccionada es: %s \n", Fecha_elegida);

            magnitud_encontrada=Buscar_por_fecha(dato,fechas, Fecha_elegida);
            printf("La magnitud encontrada en la fecha %s es: %f Gwh \n",Fecha_elegida, magnitud_encontrada);

            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                EnergiasNoRenovables();
            }
        break;

        case 2:
            system("cls");
            printf("Imprimir todas la fechas\n");
            Imprime_Magnitudes_Energia(dato,fecha);
        break;

        case 3:
            system("cls");
            printf("Que c%clculos desea realizar\n",160);
            printf("\n");
            calculos2();
        break;

        case 4:
            system("cls");
            EnergiasNoRenovables();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;
    }
}

///ENERGIA TOTAL
///FUCNION DE CONSULTAS PARA LA ENERGIA TOTAL
void analisis3()
{
    int consulta, ano, mes;
    char Fecha_elegida[8], opcion;
    float magnitud_encontrada;

    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i", &consulta);
    }
    while(consulta != 1 && consulta != 2 && consulta != 3 && consulta !=0);

    switch(consulta)
    {
        case 1:
            system("cls");
            printf("Que fecha quiere consultar, seleccionando primero el anno y seguidamente el mes\n");
            printf("\n");

            do
            {
                printf("Seleccione un anno valido (2021/2022)\n");
                scanf("%i", &ano);
            }
            while(ano!=2021 && ano!=2022);

            do
            {
                printf("Seleccione un mes valido\n");
                scanf("%i", &mes);
            }
            while(mes < 1 || mes > 12);

            printf("\n");

            sprintf(Fecha_elegida, "%i-%i", mes, ano);

            printf("\n");
            printf("La fecha seleccionada es: %s \n", Fecha_elegida);

            magnitud_encontrada=Buscar_por_fecha(dato,fechas, Fecha_elegida);
            printf("La magnitud encontrada en la fecha %s es: %f Gwh \n",Fecha_elegida, magnitud_encontrada);

            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                EnergiaTotal();
            }
        break;

        case 2:
            system("cls");
            printf("Imprimir todas la fechas\n");
            Imprime_Magnitudes_Energia(dato,fecha);
        break;

        case 3:
            system("cls");
            printf("Que c%clculos desea realizar\n",160);
            printf("\n");
            calculos3();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;
    }
}


///ENERGIA  RENOVABLE
///FUNCION CALCULOS DE ENERGIA  RENOVABLEvoid
calculos1()
{
    int operaciones;
    float max1, min1;
    char opcion;

    printf("1. M%cximo\n",160);
    printf("\n");
    printf("2. M%cnimo\n",161);
    printf("\n");
    printf("3. Media\n");
    printf("\n");
    printf("4. Comparaci%cn\n",162);
    printf("\n");
    printf("5. Imprimir por pantalla tabla de datos\n");
    printf("\n");
    printf("6. Volver al men%c anterior\n",163);
    printf("\n");
    printf("0. Volver al men%c principal\n",163);
    printf("\n");
    do
    {
        printf("Seleccione una opci%cn valida\n",162);
        scanf("%i", &operaciones);
    }
    while(operaciones != 1 && operaciones != 2 && operaciones != 3 && operaciones != 4 && operaciones != 5 && operaciones != 6 && operaciones != 0);
    switch(operaciones)
    {
        case 1:
            system("cls");
            max1=calcularMaximo(dato);
            printf("El M%cximo valor encontrado es: %f Gwh\n",160, max1);
            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                calculos1();
            }

        break;

        case 2:
            system("cls");
            min1=calcularMinimo(dato);
            printf("El M%cnimo valor encontrado es: %f Gwh\n",161 ,min1);
            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                calculos1();
            }

        break;

        case 3:
            system("cls");

        break;

        case 4:
            system("cls");

        break;

        case 5:
            system("cls");
            Escribe_Fichero(dato,cadenas,fechas);

        break;

        case 6:
            system("cls");
            analisis1();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;
    }

}

///ENERGIA NO RENOVABLE
///FUNCION CALCULOS DE ENERGIA NO RENOVABLE
void calculos2()
{
    int operaciones;
    float max2, min2;
    char opcion;

    printf("1. M%cximo\n",160);
    printf("\n");
    printf("2. M%cnimo\n",161);
    printf("\n");
    printf("3. Media\n");
    printf("\n");
    printf("4. Comparaci%cn\n",162);
    printf("\n");
    printf("5. Imprimir por pantalla tablade datos\n");
    printf("\n");
    printf("6. Volver al men%c anterior\n",163);
    printf("\n");
    printf("0. Volver al men%c principal\n",163);
    printf("\n");
    do
    {
        printf("Seleccione una opci%cn valida\n",162);
        scanf("%i", &operaciones);
    }
    while(operaciones != 1 && operaciones != 2 && operaciones != 3 && operaciones != 4 && operaciones != 5 && operaciones != 6 && operaciones != 0);
    switch(operaciones)
    {
        case 1:
            system("cls");
            max2=calcularMaximo(dato);
            printf("El M%cximo valor encontrado es: %f Gwh\n",160 ,max2);
            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                calculos2();
            }
        break;

        case 2:
            system("cls");
            min2=calcularMinimo(dato);
            printf("El M%cnimo valor encontrado es: %fGwh\n",161 ,min2);
            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                calculos2();
            }
        break;

        case 3:
            system("cls");

        break;

        case 4:
            system("cls");

        break;

        case 5:
            system("cls");
            Escribe_Fichero(dato,cadenas,fechas);

        break;

        case 6:
            system("cls");
            analisis2();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;
    }

}


///ENERGIA TOTAL
///FUNCION CALCULOS DE ENERGIA TOTAL
void calculos3()
{
    int operaciones;
    float max3, min3;
    char opcion;

    printf("1. M%cximo\n",160);
    printf("\n");
    printf("2. M%cnimo\n",161);
    printf("\n");
    printf("3. Media\n");
    printf("\n");
    printf("4. Comparaci%cn\n",162);
    printf("\n");
    printf("5. Imprimir por pantalla tabla de datos\n");
    printf("\n");
    printf("6. Volver al men%c anterior\n",163);
    printf("\n");
    printf("0. Volver al men%c principal\n",163);
    printf("\n");
    do
    {
        printf("Seleccione una opci%cn valida\n",162);
        scanf("%i", &operaciones);
    }
    while(operaciones != 1 && operaciones != 2 && operaciones != 3 && operaciones != 4 && operaciones != 5 && operaciones != 6 && operaciones != 0);
    switch(operaciones)
    {
        case 1:
            system("cls");
            max3=calcularMaximo(dato);
            printf("El M%cximo valor encontrado es: %f Gwh\n",160 ,max3);
            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                calculos3();
            }

        break;

        case 2:
            system("cls");
            min3=calcularMinimo(dato);
            printf("El M%cnimo valor encontrado es: %fGwh\n",161 ,min3);
            printf("\nDesea volver al men%c anterior? (S/N)\n",163);
            scanf("%s", &opcion);

            if(opcion=='S' || opcion=='s')
            {
                system("cls");
                calculos3();
            }
        break;

        case 3:
            system("cls");

        break;

        case 4:
            system("cls");

        break;

        case 5:
            system("cls");
            Escribe_Fichero(dato,cadenas,fechas);

        break;

        case 6:
            system("cls");
            EnergiaTotal();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;

    }

}
void informacion()
{

///FUNCION DE INFORMACION DE ENERGIAS, DANDO UNA BREVE DESCRIPCION GENERAL DE QUE ES LA ENERGIA
///Y DEJANDO UN MENU DE OPCIONES PARA LA INFORMACION DE CADA UNA DE ELLAS A ELEGIR POR EL USUARIO
    int info;
    printf("Energ%ca se refiere a la capacidad inherente que tienen los cuerpos para llevar a cabo un \ntrabajo, movimiento o cambio que conlleva a la transformaci%cn de algo. Existen muchos\nprocesos para la obtenci%cn de energ%ca, y en estos procesos, podemos diferenciar dos ramas:\n",161,162,162,161);
    printf("\n\t-> La obtenci%cn de energ%ca por procesos renovables.\n",162,161);
    printf("\n");
    printf("1. Energ%ca hidr%culica\n",161,160);
    printf("\n");
    printf("2. Hidroe%clica\n",162);
    printf("\n");
    printf("3. E%clica\n",162);
    printf("\n");
    printf("4. Solar fotovoltaica\n");
    printf("\n");
    printf("5. Solar t%crmica\n",130);
    printf("\n");
    printf("6. Residuos renovables\n");
    printf("\n");
    printf("\t->La obtenci%cn de energ%ca por procesos NO renovables.\n",162,161);
    printf("\n");
    printf("7. Turbinaci%cn de bombeo\n",162);
    printf("\n");
    printf("8. Nuclear\n");
    printf("\n");
    printf("9. Carb%cn\n",162);
    printf("\n");
    printf("10. Fuel mas gas\n");
    printf("\n");
    printf("11. Motores diesel\n");
    printf("\n");
    printf("12. Turbina de gas\n");
    printf("\n");
    printf("13. Turbina de vapor\n");
    printf("\n");
    printf("14. Ciclo combinado\n");
    printf("\n");
    printf("15. Cogeneraci%cn\n",162);
    printf("\n");
    printf("16. Residuos no renovables\n");
    printf("\n");
    printf("\t->Pulsa 0 si desea volver al men%c principal.\n",163);
    printf("\n");
    do
    {
        printf("Elija una opci%cn valida\n",162);
        scanf("%i", &info);
    }
    while(info < 0 || info > 16);
    switch(info)
    {
        case 1:
            system("cls");
            printf("\n");
            printf("La energia hidraulica es aquella forma de energia renovable en la que la electricidad\nse genera aprovechando el movimiento del agua de los rios y corrientes de agua dulce. ");
            printf("\n");
            printf("La energia cinetica de los saltos de agua y de las corrientes provoca el movimiento de\nuna turbina que esta conectada a un transformador, que convierte el movimiento\nobtenido a partir del agua en energia electrica. Por el ciclo del agua, esta\nenergia se considera inagotable");
            printf("\n");
            VolverAlMenu();
        break;

        case 2:
            system("cls");
            printf("\n");
            printf("La central hidroeolica de El Hierro es la primera central de produccion de electricidad\nque auna cinco aerogeneradores, dos depositos de agua a diferente altura, una estacion de\nbombeo y una central hidroelectrica de turbinado.");
            printf("\n");
            VolverAlMenu();
        break;

        case 3:
            system("cls");
            printf("\n");
            printf("La energia eolica es aquella cuya fuente es el viento. Asi, se trata de una energia\nrenovable que se fundamenta en el movimiento del viento dentro de la atmosfera. Asi, a traves\nde turbinas eolicas, se usa la energia mecanica que aporta el movimiento de las aspas de\nlos molinos para asi transformarse en energia electrica. Es decir, la generacion de electricidad\nse consigue con la fuerza del viento, que hace mover las aspas de los molinos de los famosos\nparques eolicos.");
            printf("\n");
            VolverAlMenu();
        break;

        case 4:
            system("cls");
            printf("\n");
            printf("La energia solar fotovoltaica es una fuente de energia que produce electricidad\nde origen renovable, obtenida directamente de la radiacion solar mediante un dispositivo\nsemiconductor denominado celula fotovoltaica, o bien mediante una deposicion\nde metales sobre un sustrato denominada celula solar de pelicula fina.");
            printf("\n");
            VolverAlMenu();
        break;

        case 5:
            system("cls");
            printf("\n");
            printf("La energia solar termica o energia termosolar consiste en el aprovechamiento de\nla energia del Sol para producir calor que puede aprovecharse para cocinar alimentos o para\nla produccion de agua caliente destinada al consumo de agua domestico, ya sea agua\ncaliente sanitaria, calefaccion o para produccion de energia mecanica y, a partir de ella, de\nenergia electrica.");
            printf("\n");
            VolverAlMenu();
        break;

        case 6:
            system("cls");
            printf("\n");
            printf("A esto se le conoce como energia de la biomasa es la produccion o generacion de \nenergia a partir del aprovechamiento de residuos como son los desechos vegetales y animales.");
            printf("\n");
            VolverAlMenu();
        break;

        case 7:
            system("cls");
            printf("\n");
            printf("El uso de bombas como turbinas ,es una tecnologia ampliamente utilizada desde hace\ndecadas para produccion de energia electrica a pequeña escala. Basicamente consiste\nen invertir la direccion del fluido haciendo que la bomba gire en direccion opuesta\nconvirtiendose de esta forma en una turbina.");
            printf("\n");
            VolverAlMenu();
        break;

        case 8:
            system("cls");
            printf("\n");
            printf("La energia nuclear es una forma de energia que se libera desde el nucleo o parte\ncentral de los atomos, que consta de protones y neutrones. Esta fuente de energia puede producirse\nde dos maneras: mediante fision (cuando los nucleos de los atomos se dividen en varias partes) \no mediante fusion (cuando estos se fusionan).");
            printf("\n");
            VolverAlMenu();
        break;

        case 9:
            system("cls");
            printf("\n");
            printf("El carbon se usa de forma masiva para generar electricidad. Hoy en dia, supone el 25 por ciento\nde la energia mundial. Al ser altamente contaminante, es uno de los principales elementos de\ncontaminacion de todo el mundo. De hecho, el impacto ambiental de la energia de\ncarbon es visible en todo el mundo.");
            printf("\n");
            VolverAlMenu();
        break;

        case 10:
            system("cls");
            printf("\n");
            printf("Es el combustible mas pesado de los que se pueden destilar a presion atmosferica. \nEsta compuesto por moleculas con mas de 20 atomos de carbono , y su color es negro. \nEl fuel + gas se usa como combustible para plantas de energia electrica, calderas y hornos .");
            printf("\n");
            VolverAlMenu();
        break;

        case 11:
            system("cls");
            printf("\n");
            printf("El motor diesel es un motor termico de combustion interna cuyo principio de funcionamiento \nes la autoignicion del combustible, debido a altas temperaturas derivadas de la alta relacion de compresion que \ntiene, segun el principio del ciclo diesel.");
            printf("\n");
            VolverAlMenu();
        break;

        case 12:
            system("cls");
            printf("\n");
            printf("El funcionamiento de la turbina de gas, es a traves del aire que proviene de la \natmosfera que  se traslada por medio de un compresor que le imprime una alta tension. \nPosteriormente se le aplica una energia a traves de un combustible de forma dispersada, \nesta accion genera una combustion que emite un flujo con alta temperatura");
            printf("\n");
            VolverAlMenu();
        break;

        case 13:
            system("cls");
            printf("\n");
            printf("Una turbina de vapor es una turbomaquina motora, que transforma la energia de\nun flujo de vapor en energia mecanica a traves de un intercambio de cantidad de movimiento\nentre el fluido de trabajo (entiendase el vapor) y el rodete, organo principal de la turbina.");
            printf("\n");
            VolverAlMenu();
        break;

        case 14:
            system("cls");
            printf("\n");
            printf("Se denomina ciclo combinado en la generacion de energia a la coexistencia \nde dos ciclos termodinamicos en un mismo sistema, uno cuyo fluido de trabajo es un gas que\nentra en combustion o quema, y otro cuyo fluido de trabajo es vapor de agua a presion");
            printf("\n");
            VolverAlMenu();
        break;

        case 15:
            system("cls");
            printf("\n");
            printf("La cogeneracion de energia es la produccion conjunta de energia electrica y energia \ntermica util, a partir de una fuente primaria de energia, como el combustible. \nEsta tecnologia aprovecha el calor residual o de escape que se produce en los procesos de combustion, \npara calentar agua, vapor, o aire, que se pueden utilizar para calefaccion, refrigeracion, o \nprocesos industriales.");
            printf("\n");
            VolverAlMenu();
        break;

        case 16:
            system("cls");
            printf("\n");
            printf("Hay materiales cuyo reciclaje resulta muy dificil debido a su composicion, falta de\ntecnologia adecuada, baja demanda o escasez de recursos financieros. Muchos de estos residuos\nno reciclables pertenecen a los residuos peligrosos, que han de almacenarse en\ndepositos controlados ya que no es posible aprovecharlos para otros usos.");
            printf("\n");
            VolverAlMenu();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;
    }
}


///FUNCION PARA VOLVER AL MENU PRINCIPAL DESPUES DE REALIZAR LA CONSULTA DE INFORMACION DE LA FUNCION ANTERIOR
void VolverAlMenu()
{
    int volver;
    do
    {
        printf("\n");
        printf("Pulse la tecla 0 para volver al men%c principal\n",163);
        scanf("%i", &volver);
    }
    while(volver != 0);
    system("cls");
    MenuPrincipal();
}

///FUNCION FECHA Y HORA ACTUAL
void Hora()
{
    char fechaYhora[25];
    time_t tiempoActual;
    tiempoActual=time(NULL);
    ctime(&tiempoActual);
    strcpy(fechaYhora, ctime(&tiempoActual));
    printf("%s ",fechaYhora);
}

///FUNCION DE AÑADIR TEXTO DE BIENVENIDA
void Red_Info()
{
	int c;

	FILE *Red_Electr;
	Red_Electr = fopen("Red_Info.txt", "r");

	if (Red_Electr == NULL)
	  printf("\n Archivo no encontrado.");

   	 while((c = getc(Red_Electr)) != EOF)
	{
	 	if (c == '\n')
	 	   printf("\n");
	 	else if (c == '\0')
	 	   printf("\0");
	 	else
	 	   putchar(c);
	}
}

///FUNCION PARA LA LECTURA DEL FICHERO generacion_por_tecnologias_21_22
void Lee_Fichero(ENERGIA dato[], CADENAS cadenas[], FECHAS fechas[])
{
    int i, j;
    FILE* pf = fopen("generacion_por_tecnologias_21_22.txt", "r");

    if (pf==NULL)
    {
       printf("No se pudo abrir el archivo.\n");
       return ;
    }

    else
    {

	for (i=0; i<4; i++)
	{
	     fgets(cadenas[i].cad, 250, pf);
        }
	     fscanf(pf, "%s", cadenas[4].cad);

	for (i=0; i<24; i++)
	{
	    fscanf(pf, "%s", fechas[i].anno);
        }

        // Leer el archivo línea por línea
	 for (i=0; i<17; i++)
         {
	    // Leer la cadena de caracteres
	     fscanf(pf, "%s", dato[i].energia);

	    // Leer los valores float
	     for (j=0; j<24; j++)
	     {
	         fscanf(pf, "%f", &dato[i].magnitud[j]);
	     }
	  }

         fclose(pf);
    }
}

///FUNCION PARA MOSTRAR POR PANTALLA EL FICHERO generacion_por_tecnologias_21_22
void Escribe_Fichero(ENERGIA dato[], CADENAS cadenas[], FECHAS fechas[])
{
    int i, j;

    for (i=0; i<5; i++)
    {
        printf("%s", cadenas[i].cad);
    }

     printf("\n\n");

     for (i=0; i<24; i++)
     {
        printf("%s\t", fechas[i].anno);
     }

     printf("\n\n");

    // Imprime el archivo línea por línea
    for (i=0; i<17; i++)
    {
        printf("%25s ", dato[i].energia);

	  // Imprime los valores float
	     for (j=0; j<24; j++)
             {
                printf("%7.1f ", dato[i].magnitud[j]);
             }
             printf("\n");
    }

}

///FUNCION MOSTRAR IMAGEN DE ENERGIA RENOVABLE
void E_Renovables()
{
	int c;

	FILE *E_R;
	E_R = fopen("Energia_Renovable.txt", "r");

	if (E_R == NULL)
	  printf("\n Archivo no encontrado.");

   	 while((c = getc(E_R)) != EOF)
	{
	 	if (c == '\n')
	 	   printf("\n");
	 	else if (c == '\0')
	 	   printf('\0');
	 	else
	 	   putchar(c);
	}
}

///FUNCION MOSTRAR IMAGEN DE ENERGIA NO RENOVABLE
void E_NoRenovables()
{
	int c;

	FILE *E_NoR;
	E_NoR = fopen("Energia_Norenovable.txt", "r");

	if (E_NoR == NULL)
	  printf("\n Archivo no encontrado.");

   	 while((c = getc(E_NoR)) != EOF)
	{
	 	if (c == '\n')
	 	   printf("\n");
	 	else if (c == '\0')
	 	   printf('\0');
	 	else
	 	   putchar(c);
	}
}

///FUNCION MOSTRAR IMAGEN DE ENERGIA TOTAL
void E_Total()
{
	int c;

	FILE *E_Tot;
	E_Tot = fopen("Energia_Total.txt", "r");

	if (E_Tot == NULL)
	  printf("\n Archivo no encontrado.");

   	 while((c = getc(E_Tot)) != EOF)
	{
	 	if (c == '\n')
	 	   printf("\n");
	 	else if (c == '\0')
	 	   printf('\0');
	 	else
	 	   putchar(c);
	}
}

///FUNCION CALCULO DEL MAXIMO VALOR QUE UNA ENERGIA HA PRODUCIDO
float calcularMaximo(ENERGIA dato[])
{
    float maximo;  // Inicializar con el primer número del vector
    int i,j;
    char nombre[60];
    int nombreValido=0;

    do
    {
	    printf("Dame el nombre de la energ%ca a calcular el M%cximo\n",161,160);
	    scanf("%s", nombre);
	    printf("\n");

	    for (j=0; j<17; j++)
	    {
	        if(strcmp(dato[j].energia, nombre)==0)
	        {
		        nombreValido = 1;
			    maximo = dato[j].magnitud[0]; // Inicializar con el primer número del vector

	            for (i=1; i<24; i++)
				{
			        if (dato[j].magnitud[i] > maximo)
					{
			            maximo = dato[j].magnitud[i];
			        }
	   			}

			}
		}

		if (nombreValido==0)
		{
			  printf("El nombre introducido no es valido. \nDebe escribirse la primera letra con mayuscula y si son dos palabras con un gui%cn bajo\n",162);
		}
		printf("\n");
	}while(nombreValido==0);

    return maximo;
}

///FUNCION CALCULO DEL MINIMO VALOR QUE UNA ENERGIA HA PRODUCIDO
float calcularMinimo(ENERGIA dato[])
{
    float minimo;
    int i,j;
    char nombre[60];
    int nombreValido=0;

    do
    {
	    printf("Dame el nombre de la energ%ca a calcular el M%cnimo\n",161,161);
	    scanf("%s", nombre);
	    printf("\n");

	    for (j=0; j<17; j++)
	    {
	        if(strcmp(dato[j].energia, nombre)==0)
	        {
		        nombreValido = 1;
			    minimo = dato[j].magnitud[0]; // Inicializar con el primer número del vector

	            for (i=1; i<24; i++)
				{
			        if (dato[j].magnitud[i] < minimo)
					{
			            minimo = dato[j].magnitud[i];
			        }
	   			}

			}
		}

		if (nombreValido==0)
		{
			  printf("El nombre introducido no es valido. \nDebe escribirse la primera letra con mayuscula y si son dos palabras con un gui%cn bajo\n",162);
		}
		printf("\n");
	}while(nombreValido==0);

    return minimo;
}


///FUNCION LOCALICAR MAGNITUD A PARTIR DE UNA FECHA ESCRITA
float Buscar_por_fecha(ENERGIA dato[], FECHAS fechas[], char Fecha_elegida[])
{
    int i, j;
    float magnitud = 0.0;
    int encontrado = 0;
	char nombreEnergia[60];


    do
    {
	    printf("\nDame el nombre de la energia para buscar el valor de la fecha\n");
	    fflush(stdin);
	    gets(nombreEnergia);
	    printf("\n");
		// Recorrer la estructura de FECHAS para encontrar la Fecha_elegida correspondiente
	    for (i = 0; i < 24; i++)
	    {
	        if (strcmp(fechas[i].anno, Fecha_elegida) == 0)
	        {
	            // Encontrar la magnitud correspondiente en la estructura de ENERGIA
	            for (j = 0; j < 17; j++)
	            {
	                if (strcmp(dato[j].energia, nombreEnergia) == 0)
	                {
	                    magnitud = dato[j].magnitud[i];
	                    encontrado = 1;
	                }
	            }
	        }
	    }

	    if (encontrado==0)
	    {
	        printf("No se encontro la energia con el nombre especificado.\n");
	    }
    }while(encontrado==0);

    return magnitud;
}

void Imprime_Magnitudes_Energia(ENERGIA dato[], FECHAS fechas[])
{
	int i, j;
	char nombre_energia[60];
	int nombreValido = 0;
	int posicion;
	
	
    do
	{
	    printf("Dame el nombre de la energ%ca para imprimir sus magnitudes: \n",161);
	    scanf("%s", nombre_energia);
	    printf("\n");

	    for(i=0;i<17;i++)
	    {
	    	if (strcmp(dato[i].energia, nombre_energia) == 0) 
	        {
		    	nombreValido = 1;
		     	break;
		    }
		    
	    }
    
	    if(nombreValido==0)
	    {
	        printf("El nombre introducido no es valido. \nDebe escribirse la primera letra con mayuscula y si son dos palabras con un guion bajo\n");		  	
		}


	}while(nombreValido==0);
	
	
	if(nombreValido==1)
	{
	 	
	    printf("\t\t%s \n\n", nombre_energia);  
	    printf("\tFechas  \t Magnitud (Gwh)\n\n");          
	    for (j = 0; j < 24; j++) 
		{
	        printf("\t%s  \t %.5f\n", fechas[j].anno,dato[i].magnitud[j]);

	    }
	    printf("\n");
	
	}	
}
