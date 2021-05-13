typedef struct tnodo *pnodo;

typedef struct tnodo{
	char dato;
	pnodo sig;	
};

int sig(int a)
{
	if(a==MAX-1)
	{
		return 0;
	}
	else
	{
		return a=a+1;
	}
}

void iniciar_cola(pnodo &cola)
{
	cola=NULL;
}

bool cola_vacia(pnodo cola)
{
	return(cola==NULL);
}

bool cola_llena(pnodo nuevo)
{
	return nuevo==NULL;
}

void agregar_cola(pnodo &cola, pnodo nuevo)
{	
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
			nuevo->sig=cola;
			cola=nuevo;
		}
	}
}

pnodo sacar_cola(pnodo &cola)
{
	pnodo sacado, p=cola;
	
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
			while((p->sig)->sig!=NULL)
			{
				p=p->sig;
			}		
			sacado=p->sig;
			p->sig=NULL;			
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
