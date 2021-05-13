const int MAX=10;

typedef int tcontenedor[MAX];

typedef struct tpila{
	tcontenedor datos1;
	tcontenedor datos2;
};

//"pila.datos2[0]" EL TOPE DE LA PILA

void iniciar_pila(tpila &pila)
{
	pila.datos2[0]=-1; //INICIANDO EL TOPE DE LA PILA
}

bool pila_llena(tpila pila)
{
	return (pila.datos2[0]==2*MAX-1);
}

void cargar_pila(tpila &pila, int nuevo)
{
	if (pila_llena(pila)==true)
	{
		cout<<"Pila Llena"<<endl;
	}
	else
	{
		pila.datos2[0]++;		
		if(pila.datos2<MAX)
		{
			pila.datos1[pila.datos2[0]]=nuevo;
		}
		else
		{
			if(pila.datos2[0]==MAX)
			{
				pila.datos2[0]++;
			}
			
			pila.datos2[pila.datos2[0]-MAX]=nuevo;
		}
	}
}

bool pila_vacia(tpila pila)
{
	return (pila.datos2[0]==-1);
}

int sacar_pila(tpila &pila)
{
	int sacado;
	
	if(pila_vacia(pila)==true)
	{
		sacado=-999;
	}
	else
	{
		if(pila.datos2[0]<MAX)
		{
			sacado=pila.datos1[pila.datos2[0]];			
		}
		else
		{
			sacado=pila.datos2[pila.datos2[0]-MAX];
		}
		pila.datos2[0]--;
		
		if(pila.datos2[0]==MAX) //SE VERIFICA PARA NO SOBREESCRIBIR EL TOPE
		{
			pila.datos2[0]--;
		}
		
		return sacado;
	}
}

int consultado_pila(tpila pila)
{
	int consultado;
	
	if(pila_vacia(pila)==true)
	{
		sacado=-999;
	}
	else
	{
		if(pila.datos2[0]<MAX)
		{
			consultado=pila.datos1[pila.datos2[0]];			
		}
		else
		{
			consultado=pila.datos2[pila.datos2[0]-MAX];
		}
		
		return sacado;
	}
}


