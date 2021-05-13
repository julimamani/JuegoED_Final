const int MAX=4;

typedef int tcontenedor[MAX];

typedef struct tcola{
	tcontenedor datos1;
	tcontenedor datos2;
	tcontenedor datos3;
	int frente;
	int final;
};

void iniciar_cola(tcola &cola)
{
	cola.frente=3*MAX-1;
	cola.final=3*MAX-1;
}

void cargar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)=true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		cola.final=sig(cola.final)
		if(cola.final<MAX)
		{
			cola.datos1[cola.final]=nuevo;
		}
		else
		{
			if(cola.final<2*MAX)
			{
				cola.datos2[cola.final-MAX]=nuevo;
			}
			else
			{
				cola.datos3[cola.final-2*MAX]=nuevo;
			}
		}
	}
}

bool cola_llena(tcola cola)
{
	return (sig(cola.final)==cola.frente);
}

bool cola_vacia(tcola cola)
{
	return (cola.frente==cola.final);
}

int sacar_cola(tcola &cola)
{
	int sacado;
	if (cola_Vacia(cola)==true)
	{
		sacado=-777;
	}
	else
	{
		cola.frente=sig(cola.frente);
		if(cola.frente<MAX)
		{
			sacado=cola.datos1[cola.frente];
		}
		else
		{
			if(cola.frente<2*MAX)
			{
				sacado=cola.datos2[cola.frente-MAX];
			}
			else
			{
				sacado=cola.datos3[cola.frente-2*MAX];
			}
		}
	}
	return sacado;
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
		cola.frente=sig(cola.frente);
		if(cola.frente<MAX)
		{
			consultado=cola.datos1[cola.frente];
		}
		else
		{
			if(cola.frente<2*MAX)
			{
				consultado=cola.datos2[cola.frente-MAX];
			}
			else
			{
				consultado=cola.datos3[cola.frente-2*MAX];
			}
		}
	}
	return consultado;
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
		if(cola.final<MAX)
		{
			consultado=cola.datos1[cola.final];
		}
		else
		{
			if(cola.frente<2*MAX)
			{
				consultado=cola.datos2[cola.final-MAX];
			}
			else
			{
				consultado=cola.datos3[cola.final-2*MAX];
			}
		}
	}
	return consultado;
}
