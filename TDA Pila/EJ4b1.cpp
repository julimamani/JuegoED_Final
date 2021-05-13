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
			nuevo->sig=pila.i;
			pila.i=nuevo;
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
		sacado=pila.i;
		if(pila.i->sig==NULL)
		{
			pila.i=NULL;
			pila.f=NULL;
		}
		else
		{
			pila.i=pila.i->sig;// me la re soban los libros
			sacado->sig=NULL;
		}
	}
	return sacado;
}

pnodo tope_pila(pnodo pila)
{
	return pila.i;
}
