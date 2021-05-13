const int MAX=12;

typedef int tcola[MAX];

void cargar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"Tenes la cola llena"<<endl;
	}
	else
	{
		cola[1]=sig(cola[1]);
		cola[cola[1]]=nuevo;
		cola[2]++;
	}
}

void iniciar_cola(tcola &cola)
{
	cola[0]=MAX-1;
	cola[1]=MAX-1;
	cola[2]=0;
}

int sig(int a)
{
	if(a==MAX-1)
	{
		return 3;
	}
	else
	{
		return (a++);
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
		cola[0]=sig(cola[0]);
		sacado=cola[cola[0]];
		cola[2]--;
	}
	return sacado;
}

bool cola_llena(tcola cola)
{
	return cola[2]==MAX-3;
}

bool cola_vacia(tcola cola)
{
	return cola[2]==0;
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
		consultado=cola[sig(cola[0])];
	}
	return consultado;
}

