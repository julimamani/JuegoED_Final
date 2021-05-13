// Defina una estructura de datos que permita cargar el TDA cola que prioriza velocidad de proceso, considerando que
// para ello dispone ÚNICAMENTE de un arreglo de 15 posiciones, desarrolle las operaciones cargar_cola, iniciar_cola
// y quitar_cola

const int MAX=15;

typedef int tcontendor[MAX];

// posiciones 13 y 14 serán FRENTE y FINAL

void iniciar_cola(tcola &cola)
{
	cola[13]=MAX-3;
	cola[14]=MAX-3;
}

void cargar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		cola[14]=sig(tcola[14]);
		cola[tcola[14]]=nuevo;
	}
}

int quitar_cola(tcola &cola)
{
	int sacado;
	if(cola_vacia(cola)==true)
	{
		sacado=-999;	
	}
	else
	{
		cola[13]=sig(cola[13]);
		sacado=cola[cola[13]];
	}
	return sacado;
}
