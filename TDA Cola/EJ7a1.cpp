typedef struct tnodo *pnodo;

typedef struct tnodo{
	char dato;
	pnodo sig;	
};

//pnodo cola;

void iniciar_cola(pnodo &cola)
{
	cola=NULL;
}

void agregar_cola(pnodo &cola, pnodo nuevo)
{
	pnodo p=cola;
	
	if(cola_llena(nuevo)==true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		if(cola==NULL)
		{
			cola=nuevo;
		}
		else
		{
			while(p->sig!=NULL)
			{
				p=p->sig;
			}
			p->sig=nuevo;
		}
	}
}

pnodo sacar_cola(pnodo &cola)
{
	pnodo sacado;
	
	if(cola==NULL)
	{
		sacado=NULL;
	}
	else
	{
		if(cola->sig==NULL)
		{
			sacado=cola;
			cola=NULL;
		}
		else
		{
			sacado=cola;
			cola=cola->sig;
			sacado->sig=NULL;
		}
	}
	return sacado;
}

pnodo primero_cola(pnodo cola)
{
	return cola;
}

pnodo ultimo_cola(pnodo cola)
{
	pnodo p=cola;
	
	if(cola==NULL)
	{
		return NULL;
	}
	else
	{
		while(p->sig!=NULL)
		{
			p=p->sig;
		}
		return p;
	}
}
