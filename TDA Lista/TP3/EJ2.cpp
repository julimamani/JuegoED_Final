typedef struct tnodo *pnodo;
typedef struct tnodo
{
	char dato;
	pnodo sig;
	pnodo ant;
};
typedef struct tlista{
	pnodo i;
	pnodo f;
};

void agregar_unico(tlista &lista, pnodo nuevo)
{
	bool encontrado=false;
	pnodo p;
	
	if(lista.i!=NULL && lista.f!=NULL)
	{
		if(lista.i->dato==nuevo->dato || lista.f->dato==nuevo->dato)
		{
			encontrado=true;
		}
		else
		{
			while(p!=NULL && encontrado==false)
			{
				if(p->dato==nuevo->dato)
				{
					encontrado=true;
				}
				p=p->sig
			}
		}
		if(encontrado==false)
		{
			nuevo->sig=lista.i;
			lista.i->ant=nuevo;
			lista.i=nuevo;
		}
	}
	else
	{
		cout<<"lista vacia"<<endl;
	}	
}


