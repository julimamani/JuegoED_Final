typedef struct tnodo *pnodo

typedef struct tnodo
{
	int dato;
	pnodo sig;
};

typedef struct tlista
{
	pnodo i;
	pnodo f;
	int cont;
}

void iniciar_lista(tlista &lista)
{
	lista.i=NULL;
	lista.f=NULL;
	lista.cont=0;
}

void agregar_inicio(tlista &lista, pnodo nuevo)
{
	if(lista.cont==0)
	{
		lista.i=nuevo;
		lista.f=nuevo;
		nuevo->sig=nuevo;
	}
	else
	{
		nuevo->sig=lista.i;
		lista.i=nuevo;
		lista.f->sig=nuevo;
	}
	lista.cont++;
}

pnodo sacar_final(tlista &lista)
{
	pnodo sacado, p;
	
	if(lista.cont == 0)
	{
		sacado=NULL;
	}
	else
	{
		lista.cont--;
		sacado=lista.f;
		
		if(lista.i==lista.f)
		{
			lista.i==NULL;
			lista.f==NULL;
			sacado->sig=NULL;
		}
		else
		{
			p=lista.i;
			while((p->sig)->sig!=lista.i)
			{
				p=p->sig;
				p->sig=lista.i;
				sacado->sig=NULL;
				lista.f=p;
			}
		}
	}
	return sacado;
}
