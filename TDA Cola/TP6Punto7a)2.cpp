// by pablito
typedef struct tnodo*pnodo
typedef struct tnodo{
	char dato;
	pnodo sig;
}
pnodo cola;

void iniciar_cola(pnodo &cola)
{
	cola=Null;
}

void agregar_cola(pnodo &cola,pnodo nuevo)
{
	if(cola_llena(nuevo)==true)
		cout<<"Cola llena"
	else
	{
		nuevo->sig=cola;
		cola=nuevo;
	}
}

pnodo quitar_cola(pnodo &cola)
{
	pnodo sacado,p;
	if(cola_vacia(cola)==true)
		sacado=Null;
	else
	{
		if(cola->sig==Null)
		{
			sacado=cola;
			cola=Null;
		}
		else
		{
			p=cola;
			while((p->sig)->sig!=Null)
				p=p->sig;
			sacado=p->sig;
			p->sig=Null;
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
	pnodo p;
	if(cola_vacia(cola)==true)
		p=Null;
	else
	{
		p=cola;
		while(p->sig!=Null)
			p=p->sig;
	}
	return p;
}

bool cola_vacia(pnodo cola)
{
	return(cola==Null);
}

