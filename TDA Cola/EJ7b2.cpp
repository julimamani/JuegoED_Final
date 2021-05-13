typedef struct tnodo *pnodo;

typedef struct tcola;
{
	pnodo i;
	pnodo f;
}

typedef struct tnodo;
{
	char dato;
	pnodo sig;
}

void iniciar_cola(tcola &cola)
{
	cola.i=NULL;
	cola.f=NULL;
}

void agregar_cola(tcola &cola, pnodo nuevo)
{
	if(cola_llena(nuevo)==true)
	{
		cout<<"cola llena"<<endl;
	}else{
	if(cola.i==NULL && cola.f==NULL)
	{
		cola.i=nuevo;
		cola.f=nuevo;
	}
	else
	{
		nuevo->sig=cola.i;
		cola.i=nuevo;
	}
}

pnodo sacar_cola(tcola &cola)
{
	pnodo sacado, p=cola.i;
	
	if(cola.i==NULL && cola.f==NULL)
	{
		sacado=NULL;
	}
	else
	{
		if(cola.i==cola.f)
		{
			sacado=cola.f;
			cola.i=NULL;
			cola.f=NULL;
		}
		else
		{
			while((p->sig)->sig==NULL)
			{
				p=p->sig;
			}
			sacado=p->sig;
			p->sig=NULL;
			cola.f=p;		
		}
	}
	return sacado;
}

pnodo primero_cola(tcola cola)
{
	return cola.f;
}

pnodo ultimo_cola(tcola cola)
{
	return cola.i;
}
