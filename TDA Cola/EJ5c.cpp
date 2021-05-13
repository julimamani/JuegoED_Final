const int MAX=5;

typedef int tcontenedor[MAX];
typedef int tindices[3];

typedef struct tcola{
	tcontenedor datos1;
	tcontenedor datos2;
	tindices indices;
};

bool cola_llena(tcola cola)
{
	return cola.indices[0]==sig(cola.indices[1]);
}

int sig(int a);
{
	if(a==MAX-1)
	{
		return 0;
	}
	else
	{
		return a+1;
	}
}

void iniciar_cola(tcola &cola)
{
	cola.indices[0]=MAX-1;
	cola.indices[1]=MAX-1;
	cola.indices[2]=0;
}

void agregar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		cola.indices[0]=sig(cola.indices[0]);
		cola.datos[cola.indices]=nuevo;
		cola.indices[2]++;
	}
}

bool cola_vacia(tcola cola)
{
	return cola.indices[2]==0;
}
