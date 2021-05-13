const int MAX=15;
typedef int contenedor[MAX];

/*	EL TOPE "pila.cima" SE ESCRIBE "pila[0]"
	"pila.datos" ES SIMPLEMENTE "pila[]"

	 En arreglos la pila se indica así:
	
		|4|X|X|X|X| | | | |
		 ^
	   Tope
	   
	   LAS "X" REPRESENTAN LOS VALORES 
	   "4" INDICA lA POSICIÓN DEL TOPE DEL ARREGLO */

void iniciarpila(tpila &pila)
{
	pila[0]=-1;
}

bool pilallena (tpila pila)
{
	return(pila[0]==MAX-1);
}

void cargarpila(tpila &pila, int nuevo)
{
	if(pilallena(pila)==true)
	{
		cout<<"Pila llena"<<endl;
	}
	else
	{
		pila[0]++;
		pila[pila[0]]=nuevo;
	}
}

bool pilavacia(tpila pila)
{
	return (pila[0]==0)
}

int sacarpila (tpila &pila)
{
	int sacado;
	
	if(pilavacia(pila)==true)
	{
		sacado=-666;
	}
	else
	{
		sacado=pila[pila[0]];
		pila[0]--;
	}
	return sacado;
}

int consultartope(tipla pila)
{
	int consultado;
	
	if(pilavacia(pila)==true)
	{
		consultado=-666; //valor arbitrario
	}
	else
	{
		consultado=pila[pila[0]];
	}
	
	return consultado;
}

