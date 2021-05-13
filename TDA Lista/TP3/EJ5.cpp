typedef struct tnodo *pnodo;
typedef struct tnodo
{
	int dato;
	pnodo sig;
	pnodo ant;
};
typedef struct tlista{
	pnodo i;
	pnodo f;	
};

void iniciar_lista(tlista &lista)
{
	lista.i=NULL;
	lista.f=NULL;
}

pnodo quitar_final(tlista &lista)
{
	pnodo sacado;
	
	if(lista.i == NULL && lista.f==NULL)
	{
		sacado=NULL;
	}
	else
	{
		sacado=lista.f;
		if(lista.f->sig==lista.f)
		{
		 lista.i=NULL;
		 lista.f=NULL;
		 sacado->sig=NULL;
		 sacado->ant=NULL;		
		}
		else
		{
			lista.f=sacado->ant;
			(lista.f)->sig=lista.i;
			(lista.i)->ant=lista.f
			sacado->sig=NULL;
			sacado->ant=NULL;
		}
	}
}

void mostrar_lista(tlista lista)
{
	pnodo p;
	
	if(lista.i=NULL && lista.f=NULL)
	{
		cout<<"lista vacia"<<endl;
	}
	else
	{
		while(p->sig!=lista.i)
		{
			p=p->sig;
		}
		cout<<p->dato;
	}
}

bool buscar_valor(tlista lista, int buscado)
{
	bool encontrado=false;
	pnodo p;
	
	if(lista.i!=NULL && lista.f!=NULL)
	{
		if(lista.i->dato=buscado)
		{
			encontrado=true;
		}
		else
		{
			if(lista.f->dato=buscado)
			{
				encontrado=true;
			}
			else
			{
				p=lista.i
				while(p!=lista.f)
				{
					p=p->sig;
				}
				if(p!=lista.f)
				{
					encontrado=true;
				}
			}
		}
	}
}

void agregar_en_orden(tlista &lista, pnodo nuevo)
{
	pnodo p=lista.i;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
		nuevo->sig=nuevo;
		nuevo->ant=nuevo;
	}
	else
	{
		if(nuevo->dato<=lista.i->dato)
		{
			lista.f->sig=nuevo;
			lista.i->ant=nuevo;
			nuevo->sig=lista.i;
			nuevo->ant=lista.f;
			lista.i=nuevo;
		}
		else
		{
			if(nuevo->dato>=lista.f->dato) // va "(lista.i->ant)->dato" en caso de que haya un solo punetro al inicio
			{
				lista.f->sig=nuevo;
				lista.i->ant=nuevo;
				nuevo->sig=lista.i;
				nuevo->ant=lista.f;
				lista.f=nuevo;
			}
			else
			{
				while(p!=lista.f && (p->sig)->dato < nuevo->dato)
				{
					p=p->sig;
				}
				nuevo->sig=p->sig;
				nuevo->ant=p;
				(p->sig)->ant=nuevo;
				p->sig=nuevo;
			}
		}
	}
