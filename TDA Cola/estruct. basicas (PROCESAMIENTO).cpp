//VELOCIDAD DE PROCESAMIENTO PRIORIZADA

const int MAX=10;

typedef int tcontenedor[MAX];

typedef struct tcola{
	tcontenedor datos;
	int frente;
	int final
}; //tcola cola

//"frente" APUNTA AL ÚLTIMO ELEMENTO EXTRAÍDO DE LA COLA
//"final" APUNTA AL ÚLTIMO ELEMENTO CARGADO EN LA COLA

int sig(int a)// usado en cargar_cola
{
	if(a==MAX-1)
	{
		a=0;
	}
	else
	{
		a++;
	}
	return a;
}

void iniciar_cola(tcola &cola)
{
	cola.frente=MAX-1;
	cola.final=MAX-1;
}

void cargar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"Tu cola está llena"<<endl;
	}
	else
	{
		cola.final=sig(cola.final);
		cola.datos[cola.final]=nuevo;
	}
}

int sacar_cola(tcola &cola)
{
	int sacado;
	
	if(cola_vacia(cola)==true)
	{
		sacado=-777;
	}
	else
	{
		cola.frente=sig(cola.frente);
		sacado=cola.datos[cola.frente];
	}
	return sacado;
}

bool cola_llena(tcola cola)
{
	return (sig(cola.final)==cola.frente);
}

bool cola_vacia(tcola cola)
{
	return(cola.final==cola.frente);
}

int consultar_final(tcola cola)
{
	int consultado
	if(cola_vacia(cola)==true)
	{
		consultado=-777;
	}
	else
	{
		consultado=cola.datos[cola.final];
	}
	return consultado;
}

int consultar_frente(tcola cola)
{
	int consultado
	if(cola_vacia(cola)==true)
	{
		consultado=-777;
	}
	else
	{
		consultado=cola.datos[sig(cola.frente)];
	}
	return consultado;
}

