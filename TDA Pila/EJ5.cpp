const int MAX=30

typedef char tcadena[30];

typedef struct tpila{
	tcadena datos;
	int cima;
};

void palindromo(tcadena cadena, int ocupado)
{
	tpila pila;
	bool band=true;
	
	iniciar_pila(pila);
	
	for(int i=; i<=ocupado; i++)
	{
		cargar_pila(pila, cadena[i]);
	}
	i=0;
	while(band==true && pila_vacia(pila)==false)
	{
		if(cadena[i]!=sacar_pila(pila))
		{
			band=false;
			i++;
		}
	}
	
	if(band==true)
	{
		cout<<"La cadena ingresada es un PALÍNDROMO!!!"<<endl;
	}
	else
	{
		cout<<"La cadena ingresada NO ES UN PALÍNDROMO!!!"<<endl;
	}
}

