const int MAX=7

typedef int tcontenedor [MAX];

typedef struct tpila{
	tcontenedor datos1;
	tcontenedor datos2;
	int cima1;
	int cima2;
};

void iniciar_pilas(tpila &pilas)
{
	pilas.cima1=-1;
	pilas.cima2=-1;
}

bool pila_llena (tpila pilas, int opt)
{
	switch (opt)
	{
		case 1: return pilas.cima1==MAX-1;
		
		case 2: return pilas.cima2==MAX-1;
	}
}

void agregar_pilas(tpila &pilas, int nuevo, int opt)
{
	if(pila_llena (pilas, opt)==true)
	{
		cout<<"Pila Llena"
	}
	else
	{
		switch(opt)
		{
			case 1: pilas.cima1++;
					pias.datos1[pilas.cima1]=nuevo;
					break;
					
			case 2:	pilas.cima2++;
					pias.datos2[pilas.cima2]=nuevo;
					break;
				
			default: cout<<"Opción inválida"<<endl;
		}
	}
}

bool pila_vacia(tpila pilas, int opt)
{
	switch (opt)
	{
		case 1: return pilas.cima1==-1; break;
		
		case 2: return pilas.cima2==-1; break;
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
			case 1: sacado=pilas.datos1[pilas.cima1];
					pilas.cima1--; break;
			
			case 2: sacado==pilas.datos2[pilas.cima2];
					pilas.cima2--; break;
		}
	}	
	return sacado;
}

int consultado_pila(tpila &pilas, int opt)
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
			case 1: consultado=pilas.datos1[pilas.cima1]; break;
			
			case 2: consultado==pilas.datos2[pilas.cima2]; break;
		}
	}	
	return consultado;
}

