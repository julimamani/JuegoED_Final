const int MAX=7;

typedef float tcontenedor[MAX];
typedef struct tindicadores{
	int ind1;
	int ind2;
};
typedef struct tcola{
	tcontenedor datos1;
	tcontenedor datos2;
	tindicadores indices;
};

void iniciar_cola(tcola &cola)
{
	cola.indices->ind1=(MAX*2)-1;
	cola.indices->ind2=(MAX*2)-1;
}

int sig(int a)
{
	if(a==(MAX-1)*2)
	{
		return 0;
	}
	else
	{
		return a=a+1;
	}
}

void agregar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"COLA LLENA"<<endl;
	}
	else
	{
		if(cola.indices->ind2<MAX)
		{
			cola.indices->ind2=sig(cola.indices->ind2);
			cola.datos1[cola.indices->ind2]=nuevo;
		}
		else
		{
			cola.indices->ind2=sig(cola.indices->ind2);
			cola.datos2[(cola.indices->ind2)-MAX]=nuevo;
		}
	}
}
