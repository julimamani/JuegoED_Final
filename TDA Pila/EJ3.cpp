const int MAX=10;

typedef int tcontenedor[MAX];

typedef struct tpila{
	tcontenedor datos;
	int cima1;
	int cima2;
};

void iniciar_pilas(tpila &pilas)
{
	pilas.cima1=-1;
	pilas.cima2=MAX;
}

bool pila_llena(tpila pilas)
{
	return(pilas.cima1+1==pilas.cima2)
}

bool pila_vacia(tpila pila, int opt)
{
	switch(opt)
	{
		case 1: return (pilas.cima1==-1);
		case 2: return (pilas.cima2==MAX);
	}
}

void agregar_pilas(tpila &pilas, int nuevo, int opt)
{
	if(pila_llena (pilas)==true)
	{
		cout<<"Pila Llena"<<endl;
	}
	else
	{
		switch(opt)
		{
			case 1: pilas.cima1++;
					pilas.datos[pilas.cima1]=nuevo;
					break;
					
			case 2:	pilas.cima2--;
					pias.datos[pilas.cima2]=nuevo;
					break;
				
			default: cout<<"Opción inválida"<<endl;
		}
	}
}

int sacar_pila(tpila &pilas, int opt)
{
	int sacado;
	
	if (pila_vacia(pilas, opt)==true)
	{
		sacado=-999;
	}
	else
	{
		switch(opt)
		{
			case 1: sacado=pilas.datos[pilas.cima1];
					pilas.cima1--; break;
			
			case 2: sacado==pilas.datos[pilas.cima2];
					pilas.cima2++; break;
		}
	}	
	return sacado;
}

int consultar_pila(tpila pilas, int opt)
{
	int consultado;
	
	if (pila_vacia(pilas, opt)==true)
	{
		consultado=-999;
	}
	else
	{
		switch(opt)
		{
			case 1: consultado=pilas.datos[pilas.cima1]; break;
			
			case 2: consultado==pilas.datos[pilas.cima2]; break;
		}
	}	
	return consultado;
}

