typedef struct tnodo *pnodo;

typedef struct tnodo{
	int dato;
	pnodo sig;
	pnodo ant;
};

pnodo sacar_buscado(pnodo &lista, int buscado)
{
	pnodo p,sacado;
	if(lista==NULL)
	{
		sacado=NULL;
	}
	else
	{
		if(lista->sig==NULL)
		{
			if(lista->dato=buscado)
			{
				sacado=lista;
				lista=NULL;
			}
			else
			{
				sacado=NULL;
			}
		}
		else
		{
			p=lista;
			if(lista->dato==buscado)
			{
				sacado=lista;
				lista=sacado->sig;
				sacado->sig=null;
				lista->ant=NULL;
			}
			else
			{
				while(p!=NULL && p->dato!=buscado)
				{
					p=p->sig;
				}
				if(p==NULL)
				{
					sacado=NULL;
				}
				else
				{
					sacado=p;
					if(p->sig=NULL)
					{
						(p->ant)->sig=NULL;
						sacado->ant=NULL;	
					}
					else
					{
						(p->ant)->sig=sacado->sig;
						(p->sig)->ant=sacado->ant;
						sacado->sig=NULL;
						sacado->ant=NULL;
					}
				}
			}
		}
	}
	return sacado;
}
