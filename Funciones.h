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

ENERGIA dato[17];
CADENAS cadenas[5];
FECHAS fechas[25];

void MenuPrincipal();
void EnergiasRenovables();
void EnergiasNoRenovables();
void EnergiaTotal();
void analisis1(char Nombre[]);
void analisis2(char Nombre[]);
void analisis3(char Nombre[]);
void calculos1(char Nombre[]);
void calculos2(char Nombre[]);
void calculos3(char Nombre[]);
void informacion();
void VolverAlMenu();
void Hora();
void Red_Info();
void Lee_Fichero(ENERGIA dato[], CADENAS cadenas[], FECHAS fechas[]);
void Escribe_Fichero(ENERGIA dato[], CADENAS cadenas[], FECHAS fechas[]);
void E_Renovables();
void E_NoRenovables();
void E_Total();
float calcularMaximo(ENERGIA dato[], char Nombre[]);
float calcularMinimo(ENERGIA dato[], char Nombre[]);
float Buscar_por_fecha(ENERGIA dato[], FECHAS fechas[], char Fecha_elegida[], char Nombre[]);
void Imprime_Magnitudes_Energia(ENERGIA dato[], FECHAS fechas[],char Nombre[]);
float Media (ENERGIA dato[], char Nombre[]);
void Ordenacion (ENERGIA dato[], FECHAS fechas[], char Nombre[]);
void Guardar_Datos_en_Fichero(ENERGIA dato[], FECHAS fechas[],char nombre[], int anno);

