/*Dada la siguiente lista simple, con punteros de inicio y final, ordenada en forma decreciente:
    	
      				     I                      F
				    	|3|->|25|->|19|->|15|->|7|->NULL
		
A) Defina la estructura de datos correspondiente
B) Modifique la operación de búsqueda de modo que aproveche el criterio de orden que utiliza la lista*/


typedef struct tnodo *pnodo;

typedef struct tnodo{
	int dato
	pnodo sig;
};

typedef struct tlista{
	pnodo i;
	pnodo f;
};

bool busqueda(tlista lista)
{
	bool encontrado=false;
	pnodo p=lista.i;
	
	if (lista.i!=NULL && lista.f!=NULL)
	{
		if(buscado>=lista.f->dato && buscado><=lista.i->dato)
		{
			if(buscado==lista.f->dato)
			{
				encontrado=true;
			}
			else
			{
				while(p->sig!=NULL && encontrado==false)
				{
					if(p->dato==buscado)
					{
						encontrado==true;
					}
					p=p->sig;
				}
			}
		}
	}
	return encontrado;
}
  
	
