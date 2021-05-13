typedef struct tnodo *pnodo

typedef struct tnodo{
	int dato;
	pnodo sig;
	pnodo ant;
};

typedef struct tlista
{
	pnodo i;
	pnodo f;
};

void agregar_inicio(tlista &lista, pnodo nuevo)
{
	if(lista.i=NULL && lista.f=NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		nuevo->sig=lista.i
		lista.i->ant=nuevo;
		lista.i->nuevo;
	}
}

void agregar_final(tlista &lista, pnodo nuevo)
{
	if(lista.i=NULL && lista.f=NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		lista.f->sig=nuevo;
		nuevo->ant=lista.f;
		lista.f=nuevo;
	}
}


