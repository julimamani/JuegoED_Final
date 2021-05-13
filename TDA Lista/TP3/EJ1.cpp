typedef struct tnodo *pnodo

typedef struct tnodo{
	tipo_dato dato;
	pnodo sig;
	pnodo ant
};

void crear_nodo (pnodo &nuevo)
{
	nuevo = new tnodo;
	
	/* TODO (#1#): 
	               juasjuasjuas */
	if (nuevo!=NULL)
	{
		cout<<"Ingrese dato";
		cin>>nuevo->dato;
		nuevo->sig=NULL;
		nuevo->ant=NULL;
	}
	else
	{
		cout<<"Memoria insuficiente"<<endl;
	}
}

void agregar_inicio(pnodo &lista, pnodo nuevo;)
{
	if (lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		nuevo->sig=lista;
		lista->ant=nuevo;
		lista=nuevo;
	}
}

void agregar_final(pnodo &lista, pnodo nuevo)
{
	pnodo p;
	if(lista==NULL)
	{
		lista=nuevo;
	}
	else
	{
		p=lista;
		while(p->sig!=NULL)
		{
			p=p->sig;
		}
		p->sig=nuevo;
		nuevo->ant=p;
	}
}
