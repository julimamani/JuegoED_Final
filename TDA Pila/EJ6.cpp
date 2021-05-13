const int MAX=45;

typedef char tcontenedor[MAX];

typedef struct tpila{
	tcontenedor dato;
	int cima;	
};

void llaves(tcontenedor llave, int ocupado)
{
	char sacado;
	bool band=true;	
	tpila pila;
	iniciar_pila(pila);
	int i=0;
	
	while(band==true && i<=ocupado)
	{
		if(llave[i]=='{')
		{
			cargar_pila(pila, llave[i])
		}
		else
		{
			if(llave[i]=='}')
			{
				if(pila_vacia(pila)==true)
				{
					band=false;
				}
				else
				{
					sacado=sacar_pila(pila);
				}
			}
		}
		i++;
	}
	if(pila_vacia(pila) && band=true)
	{
		cout<<"Parentización CORRECTA"<<endl;
	}
	else
	{
		cout<<"Parentización INCORRECTA"<<endl;
	}
}

