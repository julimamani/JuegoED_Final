const int MAX=16;

typedef int tcola[MAX];

void iniciar_cola(tcola &cola)
{
	cola[8]=MAX-1;
	cola[9]=MAX-1;
}

void agregar_cola (tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"cola llena"<<endl;
	}
	else
	{
		cola[9]=sig(cola[9]);
		cola[cola[9]]=nuevo;
	}
}

bool cola_vacia(tcola cola)
{
	return (cola[8]==cola[9])
}
