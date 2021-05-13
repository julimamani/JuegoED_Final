//Listas simples circulares

typedef struct tnodo *pnodo;

typedef struct tnodo
{
	int dato;
	pnodo sig;
};

typedef struct tlista
{
	pnodo i;
	pnodo f;
};


int main()
{
	tlista lista;
	...
	return 1;	
}

void iniciar_lista(tlista &lista)
{
	lista.i=NULL;
	lista.f=NULL;
}

crear_nodo(pnodo &nuevo) //Es el mismo para una lista simple con punteros al inicio
{
	
}

void agregar_inicio(tlista &lista, pnodo nuevo)
{
	if(lista.i==NULL && lista.f==NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		nuevo->sig=lista.i;
		lista.i=nuevo;
	}
}

agregar_final(tlista &lista, pnodo nuevo)
{
	if(lista.i==NULL && lista.f==NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		lista.f->sig=nuevo;
		lista.f=nuevo;
	}
}

void agregar_orden(tlista &lista, pnodo nuevo)
{
	pnodo p=lista.i;
	if(lista.i==NULL && lista.f==NULL)
	{
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		if(lista.i->dato>=nuevo->dato)
		{
			nuevo->sig=lista.i;
			lista.i->nuevo;
		}
		else
		{
			if(lista.f->dato<=nuevo->dato)
			{
				lista.f->sig=nuevo;
				lista.f=nuevo;
			}
			else
			{
				while ((p->sig)->dato < nuevo->dato)
				{
					p=p->sig;
				}
				nuevo->sig=p->sig;
				p->sig=nuevo;
			}
		}
	}
}

pnodo sacar_inicio(tlista &lista)
{
	pnodo sacado;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		sacado=NULL;	
	}
	else
	{
		sacado=lista.i;		
		if(lista.i==lista.f)
		{
			lista.i=NULL;
			lista.f=NULL;
		}
		else
		{
			lista.i=sacado->sig;
			sacado->sig=NULL;
		}
	}
	return sacado;
}

pnodo sacar_final(tlista &lista)
{
	pnodo sacado, p=lista.i;
	
	if (lista.i==NULL && lista.f==NULL)
	{
		sacado=NULL;
	}
	else
	{
		sacado=lista.f;
		if(lista.i==lista.f)
		{
			lista.i=NULL;
			lista.f=NULL;
		}
		else
		{
			while((p->sig)->sig!=NULL)
			{
				p=p->sig;
			}
			
			sacado=p->sig;
			lista.f=p;
			p->sig=NULL;
		}
	}
	return sacado;
}

pnodo sacar_buscado(tlista &lista, int buscado)
{
	pnodo sacado, p=lista.i;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		sacado=NULL;
	}	
	else
	{
		if(lista.i->dato==buscado)
		{
			sacado=lista.i;
			if(lista.i==lista.f)
			{
				lista.i=NULL;
				lista.f=NULL;
			}
			else
			{
				lista.i=sacado->sig;
				sacado->sig=lista.i
			}
		}
		else
		{
			while(((p->sig)->sig!=NULL) && ((p->sig)->dato!=buscado))
			{
				p=p->sig	
			}
			if(p->sig!=NULL)
			{
				if(p->sig==lista.f)
				{
					sacado=p->sig;
					lista.f=p;
					p->sig=NULL;
				}
				else
				{
					sacado=p->sig;
					p->sig=sacado->sig;
					sacado->sig=NULL;
				}
			}
			else
			{
				sacado=NULL;
			}
		}
	}
	return sacado
}

void mostrar_lista(tlista lista)
{
	pnodo p=lista;
	
	
}



