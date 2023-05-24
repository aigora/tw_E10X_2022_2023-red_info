typedef struct
{
	char energia[50];
	float magnitud[24];
}ENERGIA;

typedef struct
{
	char cad[250];
}CADENAS;

typedef struct
{
	char anno[20];
}FECHAS;

void MenuPrincipal();
void EnergiasRenovables();
void EnergiasNoRenovables();
void EnergiaTotal();
void analisis1();
void analisis2();
void analisis3();
void calculos1();
void calculos2();
void calculos3();
void informacion();
void VolverAlMenu();
void Hora();
void Red_Info();
void Lee_Fichero(ENERGIA dato[], CADENAS cadenas[], FECHAS fechas[]);
void Escribe_Fichero(ENERGIA dato[], CADENAS cadenas[], FECHAS fechas[]);
