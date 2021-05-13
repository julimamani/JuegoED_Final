typedef struct tnodo *pnodo;

typedef struct tnodo{
	int dato
	pnodo sig;
	pnodo ant;
};

typedef struct tlista{
	pnodo i;
	pnodo f;
};



void mostrarinverso(tlista lista)
{
	pnodo p=lista.f;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		cout<<"Lista vacía"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			cout<<p->dato<<endl;
		}
		p=p->ant;
	}
}

pnodo buscar(tlista lista, int buscado)
{
	pnodo p=lista.i;
	bool encontrado=false;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		p=NULL;
		return p;
	}
	else
	{
		if(lista.f->dato==buscado)
		{
			return lista.f;
		}
		else
		{
			while(p!=NULL && encontrado==true)
			{
				if(p->dato==buscado)
				{
					encontrado=true;
				}
				else
				{
					p=p->sig;
				}
				
			}
			if(encontrado==true)
			{
				return p;
			}
		}
	}
}
