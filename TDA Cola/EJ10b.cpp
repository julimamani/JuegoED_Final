const int MAX=2;

typedef int tcontenedor=MAX;
typedef struct tcola{
	tcontenedor datos;
	int frente;
	int final;
};

int producto(tcola cola, int a, int b)
{
	int suma;
	iniciar_cola(cola);
	
	cargar_cola(cola, a);
	cargar_cola(cola, b);
	
	while(cola.datos[cola.frente]!=0)
	{
		suma=suma+cola.datos[cola.final];
		cola.datos[cola.frente]--;
	}
	
	return consultar_final(cola);
}
