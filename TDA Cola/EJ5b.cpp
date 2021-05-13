const int MAX=15;

typedef int tcontenedor[MAX];

typedef struct tindicadores{
	int frente;
	int final;
	int cont;
};

typedef struct tcola
{
	tcontenedor datos;
	tindicadores indice;
}

void iniciar_cola(tcola &cola)
{
	cola.indices.frente=MAX-1;
	cola.indices.final=MAX-1;
	cola.indices.cont=0;
}

void agregar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"Tenes la cola llena"<<endl;
	}
	else
	{
		cola.indices.final=sig(cola.indices.final)
		{
			cola.datos[cola.indices.final]=nuevo;
			cola.indices.cont++;
		}
	}
}

bool cola_vacia(tcola cola)
{
	return (cola.indices.cont==0);
}
