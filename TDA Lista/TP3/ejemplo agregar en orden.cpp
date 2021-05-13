typedef struct tnodo *pnodo;
typedef struct tnodo{
	int dato;
	pnodo sig;
	pnodo ant;
	
};

void agregar_orden(pnodo &lista, pnodo nuevo)
{
	pnodo p;
	
	if(lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		if(nuevo->dato<=lista->dato)
		{
			nuevo->sig=lista;
			lista->ant=nuevo;
			lista=nuevo;	
		}	
		else
		{
			p=lista;
			while(p->sig!=NULL && (p->sig)->dato<nuevo->dato)
			{
				p=p->sig;
			}
			if(p->sig==NULL)
			{
				p->sig=nuevo;
				nuevo->ant=p;
			}
			else
			{
				nuevo->sig=p->sig;
				nuevo->ant=p;
				p->sig=nuevo;
				(nuevo->sig)->ant=nuevo;
			}
		}
	}
}
