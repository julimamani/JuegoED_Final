const int MAX=12;

typedef int tcontenedor[MAX];

typedef struct cola{
	tcontenedor datos;
	int frente;
	int final;
};

void iniciar_cola(tcola &cola)
{
	cola.frente=0;
	cola.final=0;
}

//FINAL para agregar, FRENTE para sacar

int ant(int a)
{
	if (a==0)
	{
		return MAX-1;
	}
	else
	{
		return (a--);
	}
}

void agregar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola) == true)
	{
		cout<<"Tenes la cola llena"<<endl;
	}
	else
	{
		cola.final=ant(cola.final);
		cola.datos[cola.final]=nuevo;
	}
}

bool cola_llena(tcola cola)
{
	return ant(cola.final)==cola.frente;
}

bool cola_vacia(tcola cola)
{
	return cola.frente==cola.llena;
}

int consultar_frente (tcola cola)
{
	int consultado;
	
	if(cola_vacia(cola)==true)
	{
		consultado=-777;
	}
	else
	{
		consultado=cola.datos[cola.frente]
	}
	return consultado;
}

int consultar_final (tcola cola)
{
	int consultado;
	
	if(cola_vacia(cola)==true)
	{
		consultado=-777;
	}
	else
	{
		consultado=cola.datos[cola.final]
	}
	return consultado;
}
