#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <time.h>
#include <string.h>

void MenuPrincipal()
{
    int tecla;
//Funcion que imprime por pantalla el dia de la semana, el dia, el mes, el año y la hora de hoy
    Hora();
//Funcion del menu principal, con un do while para elegir una opcion de estas 4.
    printf("\n");
    printf("Bienvenido a la red de calculos electricos de Espana, seleccione la opcion que desea consultar:\n");
    printf("\n");
    printf("1. Energias renovables\n");
    printf("\n");
    printf("2. Energias NO renovables\n");
    printf("\n");
    printf("3. Energia Total\n");
    printf("\n");
    printf("4. Informacion breve y descripcion de las energias\n");
    printf("\n");

    do
    {
        printf("Elija una opcion valida\n");
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
EnergiasRenovables()
{
    int renovables;
//Funcion para consultar las diversas energias renovables del trabajo
    printf("1. Energia hidraulica\n");
    printf("\n");
    printf("2. Hidroeolica\n");
    printf("\n");
    printf("3. Eolica\n");
    printf("\n");
    printf("4. Solar fotoboltaica\n");
    printf("\n");
    printf("5. Solar termica\n");
    printf("\n");
    printf("6. Residuos renovables\n");
    printf("\n");
    printf("7. Otras energias renovables\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");
    do
    {
        printf("Elija una opcion valida\n");
        scanf("%i", &renovables);
    }
    while(renovables < 0 || renovables > 7);
    switch(renovables)
    {
        case 1:
            system("cls");
            printf("\n");
        printf("Energia hidraulica, que desea consultar\n");
        analisis1();
        break;

        case 2:
            system("cls");
            printf("\n");
        printf("Energia hidroeolica, que desea consultar\n");
        analisis1();
        break;

        case 3:
            system("cls");
            printf("\n");
        printf("Energia eolica, que desea consultar\n");
        analisis1();
        break;

        case 4:
            system("cls");
            printf("\n");
        printf("Energia solar fotovoltaica, que desea consultar\n");
        analisis1();
        break;

        case 5:
            system("cls");
            printf("\n");
        printf("Energia solar termica, que desea consultar\n");
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
        printf("Otras energias renovables, que desea consultar\n");
        analisis1();
        break;

        case 0:
            system("cls");
        MenuPrincipal();
    }
}
void EnergiasNoRenovables()
{
//Funcion para consultar las diversas energias no renovables del trabajo
    int norenovables;
    printf("1. Turbinacion de bombeo\n");
    printf("\n");
    printf("2. Nuclear\n");
    printf("\n");
    printf("3. Carbon\n");
    printf("\n");
    printf("4. Fuel mas gas\n");
    printf("\n");
    printf("5. Motores diesel\n");
    printf("\n");
    printf("6. Turbina de gas\n");
    printf("\n");
    printf("7. Turbina de vapor\n");
    printf("\n");
    printf("8. Ciclo combinado\n");
    printf("\n");
    printf("9. Cogeneracion\n");
    printf("\n");
    printf("10. Residuos no renovables\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");
    do
    {
        printf("Elija una opcion valida\n");
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
        printf("Energia nuclear, que desea consultar\n");
        analisis2();
        break;

        case 3:
            system("cls");
            printf("\n");
        printf("Carbon, que desea consultar\n");
        analisis2();
        break;

        case 4:
            system("cls");
            printf("\n");
        printf("Fuel mas gas, que desea consultar\n");
        analisis2();
        break;

        case 5:
            system("cls");
            printf("\n");
        printf("Motor diesel, que desea consultar\n");
        analisis2();
        break;

        case 6:
            system("cls");
            printf("\n");
        printf("Turbina de gas, que desea consultar\n");
        analisis2();
        break;

        case 7:
            system("cls");
            printf("\n");
        printf("Turbina de vapor, que desea consultar\n");
        analisis2();
        break;

        case 8:
            system("cls");
            printf("\n");
        printf("Ciclo combinado, que desea consultar\n");
        analisis2();
        break;

        case 9:
            system("cls");
            printf("\n");
        printf("Cogeneracion, que desea consultar\n");
        analisis2();
        break;

        case 10:
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
//Energia total
void EnergiaTotal()
{
//Funcion para consultar el apartado de energia total
    printf("1. Consultar una fecha\n");
    printf("\n");
    printf("2. Consultar todas las fechas\n");
    printf("\n");
    printf("3. Calculos\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");

    analisis3();
}
//Renovables
void analisis1()
{
//Funcion de consultas para las energias renovables
    int consulta, ano, mes;
        printf("\n");
        printf("1. Consultar informacion de una fecha\n");
        printf("\n");
        printf("2. Consultar informacion de todas las fechas\n");
        printf("\n");
        printf("3. Calculos\n");
        printf("\n");
        printf("4. Volver al menu de energias renovables\n");
        printf("\n");
        printf("0. Volver al menu principal\n");
        printf("\n");
    do
    {
        printf("Elija una opcion valida\n");
        scanf("%i", &consulta);
    }
    while(consulta < 0 || consulta > 4);
    switch(consulta)
    {
        case 1:
            system("cls");
        printf("Que fecha quiere consultar, seleccionando primero el ano y seguidamente el mes\n");
        printf("\n");
        do
        {
            printf("Seleccione un ano 2021 o 2022\n");
            scanf("%i", &ano);
        }
        while(ano != 2021 && ano != 2022);
        do
        {
            printf("Seleccione un mes valido\n");
            scanf("%i", &mes);
        }
        while(mes < 1 || mes > 12);
        printf("\n");
            system("cls");
        printf("La fecha seleccionada es: %i / %i \n", mes, ano);
        break;

        case 2:
            system("cls");
        printf("Imprimir todas la fechas\n");
        break;

        case 3:
            system("cls");
        printf("Que calculos desea realizar\n");
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
//No renovables
void analisis2()
{
//Funcion de consultas para las energias no renovables
    int consulta, ano, mes;
        printf("\n");
        printf("1. Consultar informacion de una fecha\n");
        printf("\n");
        printf("2. Consultar informacion de todas las fechas\n");
        printf("\n");
        printf("3. Calculos\n");
        printf("\n");
        printf("4. Volver al menu de energias no renovables\n");
        printf("\n");
        printf("0. Volver al menu principal\n");
        printf("\n");
    do
    {
        printf("Elija una opcion valida\n");
        scanf("%i", &consulta);
    }
    while(consulta < 0 || consulta > 4);
    switch(consulta)
    {
        case 1:
            system("cls");
        printf("Que fecha quiere consultar, seleccionando primero el ano y seguidamente el mes\n");
        printf("\n");
        do
        {
            printf("Seleccione un ano valido\n");
            scanf("%i", &ano);
        }
        while(ano < 2021 || ano > 2022);
        do
        {
            printf("Seleccione un mes valido\n");
            scanf("%i", &mes);
        }
        while(mes < 1 || mes > 12);
        printf("\n");
            system("cls");
        printf("La fecha seleccionada es: %i / %i \n", mes, ano);
        break;

        case 2:
            system("cls");
        printf("Imprimir todas la fechas\n");
        break;

        case 3:
            system("cls");
        printf("Que calculos desea realizar\n");
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
//Energia total
void analisis3()
{
//Funcion de consultas para la energia total
    int consulta, ano, mes;
    do
    {
        printf("Elija una opcion valida\n");
        scanf("%i", &consulta);
    }
    while(consulta != 1 && consulta != 2 && consulta != 3 && consulta !=0);
    switch(consulta)
    {
        case 1:
            system("cls");
        printf("Que fecha quiere consultar, seleccionando primero el ano y seguidamente el mes\n");
        printf("\n");
        do
        {
            printf("Seleccione un ano valido\n");
            scanf("%i", &ano);
        }
        while(ano < 2021 && ano > 2022);
        do
        {
            printf("Seleccione un mes valido\n");
            scanf("%i", &mes);
        }
        while(mes < 1 || mes > 12);
        printf("\n");
            system("cls");
        printf("La fecha seleccionada es: %i / %i \n", mes, ano);
        break;

        case 2:
            system("cls");
        printf("Imprimir todas la fechas\n");
        break;

        case 3:
            system("cls");
        printf("Que calculos desea realizar\n");
        printf("\n");
        calculos3();
        break;

        case 0:
            system("cls");
            MenuPrincipal();
        break;
    }
}
//Renovables
void calculos1()
{
//Funcion de calculos para las energias renovables
    int operaciones;
    printf("1. Maximo\n");
    printf("\n");
    printf("2. Minimo\n");
    printf("\n");
    printf("3. Media\n");
    printf("\n");
    printf("4. Comparacion\n");
    printf("\n");
    printf("5. Imprimir por pantalla tabla de datos\n");
    printf("\n");
    printf("6. Volver al menu anterior\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");
    do
    {
        printf("Seleccione una opcion valida\n");
        scanf("%i", &operaciones);
    }
    while(operaciones != 1 && operaciones != 2 && operaciones != 3 && operaciones != 4 && operaciones != 5 && operaciones != 6 && operaciones != 0);
    switch(operaciones)
    {
        case 1:
            system("cls");

        break;

        case 2:
            system("cls");

        break;

        case 3:
            system("cls");

        break;

        case 4:
            system("cls");

        break;

        case 5:
            system("cls");

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
//No renovables
void calculos2()
{
//Funcion de calculos para las energias no renovables
    int operaciones;
    printf("1. Maximo\n");
    printf("\n");
    printf("2. Minimo\n");
    printf("\n");
    printf("3. Media\n");
    printf("\n");
    printf("4. Comparacion\n");
    printf("\n");
    printf("5. Imprimir por pantalla tablade datos\n");
    printf("\n");
    printf("6. Volver al menu anterior\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");
    do
    {
        printf("Seleccione una opcion valida\n");
        scanf("%i", &operaciones);
    }
    while(operaciones != 1 && operaciones != 2 && operaciones != 3 && operaciones != 4 && operaciones != 5 && operaciones != 6 && operaciones != 0);
    switch(operaciones)
    {
        case 1:
            system("cls");

        break;

        case 2:
            system("cls");

        break;

        case 3:
            system("cls");

        break;

        case 4:
            system("cls");

        break;

        case 5:
            system("cls");

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
//Energia totsl
void calculos3()
{
//Funcion de calculos para la energia total
    int operaciones;
    printf("1. Maximo\n");
    printf("\n");
    printf("2. Minimo\n");
    printf("\n");
    printf("3. Media\n");
    printf("\n");
    printf("4. Comparacion\n");
    printf("\n");
    printf("5. Imprimir por pantalla tablade datos\n");
    printf("\n");
    printf("6. Volver al menu anterior\n");
    printf("\n");
    printf("0. Volver al menu principal\n");
    printf("\n");
    do
    {
        printf("Seleccione una opcion valida\n");
        scanf("%c", &operaciones);
    }
    while(operaciones != 1 && operaciones != 2 && operaciones != 3 && operaciones != 4 && operaciones != 5 && operaciones != 6 && operaciones != 0);
    switch(operaciones)
    {
        case 1:
            system("cls");

        break;

        case 2:
            system("cls");

        break;

        case 3:
            system("cls");

        break;

        case 4:
            system("cls");

        break;

        case 5:
            system("cls");

        break;

        case 6:
                system("cls");
            analisis3();
        break;

        case 0:
               system("cls");
            MenuPrincipal();
        break;

    }

}
void informacion()
{
//Funcion de informacion de las energias, dando una breve descripcion general de que es la energia
//y dejando un menu de opciones para la informacion de cada una de ellas a elegir por el usuario
    int info;
    printf("Energia se refiere a la capacidad inherente que tienen los cuerpos para llevar a cabo un \ntrabajo, movimiento o cambio que conlleva a la transformacion de algo. \nExisten muchos procesos para la ontencion de energia, y en estos procesos, podemos diferenciar dos ramas:\n");
    printf("\t-La obtencion de energia por procesos renovables.\n");
    printf("\n");
    printf("1. Energia hidraulica\n");
    printf("\n");
    printf("2. Hidroeolica\n");
    printf("\n");
    printf("3. Eolica\n");
    printf("\n");
    printf("4. Solar fotoboltaica\n");
    printf("\n");
    printf("5. Solar termica\n");
    printf("\n");
    printf("6. Residuos renovables\n");
    printf("\n");
    printf("\t-La obtencion de energia por procesos NO renovables.\n");
    printf("\n");
    printf("7. Turbinacion de bombeo\n");
    printf("\n");
    printf("8. Nuclear\n");
    printf("\n");
    printf("9. Carbon\n");
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
    printf("15. Cogeneracion\n");
    printf("\n");
    printf("16. Residuos no renovables\n");
    printf("\n");
    printf("\t-Pulsa 0 si desea volver al menu principal.\n");
    printf("\n");
    do
    {
        printf("Elija una opcion valida\n");
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
//Funcion para volver al menu principal despues de realizar la consulta de informacion de la funcion anterior
void VolverAlMenu()
{
    int volver;
    do
    {
        printf("\n");
        printf("Pulse la tecla 0 para volver al menu principal\n");
        scanf("%i", &volver);
    }
    while(volver != 0);
    system("cls");
    MenuPrincipal();
}
//Funcion fecha y hora actual
void Hora()
{
    char fechaYhora[25];
    time_t tiempoActual;
    tiempoActual=time(NULL);
    ctime(&tiempoActual);
    strcpy(fechaYhora, ctime(&tiempoActual));
    printf("%s ", fechaYhora);
}
