const int MAX=10;

typedef int tcontenedor[MAX];
typedef struct tcola{
	tcontenedor datos;
	int frente;
	int final;
};

int inverso(tcola cola, int a)
{
	int aux=a;
	iniciar_cola(cola);
	
	while(aux>0)
	{
		agregar_cola(cola, (aux % 10));
		aux/= 10;
	}
	int mult=10;
	int aux=0;
	while(cola_vacia(cola)==false)
	{
		if(aux<10)
		{
			aux=sacar_cola(cola);
		}
		else
		{
			aux=sacar_cola(cola)*mult;
			mult*=10;
		}
	}
	return aux;
}
