typedef struct tnodo *pnodo;

typedef struct tnodo{
	char dato;
	pnodo i;
	pnodo f;
	pnodo sig;
};

//"pnodo pila;" en la función principal

void iniciar_pila(pnodo &pila)
{
	pila.i=NULL;
	pila.f=NULL;
}

void agregar_pila(pnodo &pila, pnodo nuevo)
{
	if(pila_llena(nuevo)==true)
	{
		cout<<"Pila Llena"<<endl;
	}
	else
	{
		if(pila.i==NULL && pila.f==NULL)
		{
			pila.i=nuevo;
			pila.f=nuevo;
		}
		else
		{
			pila.f->sig=nuevo;
			pila.f=pila.f->sig;
		}
	}
}

pnodo sacar_pila(pnodo &pila)
{
	pnodo sacado;
	
	if(pila_vacia(pila)==true)
	{
		sacado=NULL;
	}
	else
	{
		sacado=pila.f;
		if(pila.i->sig==NULL)
		{
			pila.i=NULL;
			pila.f=NULL;
		}
		else
		{
			pnodo p=pila;
			while((p->sig)->sig!=NULL)
			{
				p=p->sig;
			}
			sacado=p->sig;
			p->sig=NULL;
			pila.f=p;
		}
	}
	return sacado;
}

pnodo tope_pila(pnodo pila)
{
	return pila.f;
} 
