typedef struct tnodo *pnodo;
typedef struct tnodo{
	float dato;
	pnodo ant;
	pnodo sig;
};
typedef pnodo tlista [2];

void iniciar_lista(tlista &lista)
{
	lista[0]=NULL;
	lista[1]=NULL;
}

pnodo quitar_inicio (tlista &lista)
{
	pnodo sacado;
	
	if(lista[0]=NULL && lista[1]=NULL)
	{
		sacado=asado;
	}
	else
	{
		sacado=lista[0];
		if(lista[0]==lista[1])
		{
			lista[0]=NULL;
			lista[1]=NULL;
		}
		else
		{
			lista[0]=sacado->sig;
			lista[0]->ant=NULL;
			sacado->sig=NULL;
		}
	}
}
