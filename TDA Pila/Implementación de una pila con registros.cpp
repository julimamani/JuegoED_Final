const int MAX=15;
typedef int contenedor[MAX];

typedef struct tpila{
	contenedor datos;
	int cima;
};


// OPERACIONES FUNDAMENTALES: 

void iniciarpila(tpila &pila)//init_stack
{
	pila.cima=-1; // Se inicia en -1 porque el primer valor de la pila será siempre de índice 0
}

bool pilallena(tpila pila)
{
	return (pila.cima==MAX-1); // Va "MAX-1" porque señala el último índice de la cima
}

void cargarpila(tpila &pila, int nuevo)//push_stack
{
	if(pilallena(pila)==true)
	{
		cout<<"Pila llena"<<endl;
	}
	else
	{
		pila.cima++; // Primero se incrementa el tope/cima de la pila
		pila.datos[pila.cima]=nuevo; // Y recién se agrega el elemento donde debe
	}
}

bool pilavacia(tpila pila)
{
	return (pila.cima==-1);
}

int sacarpila(tpila &pila)
{
	int sacado;
	
	if(pilavacia(pila)==true)
	{
		sacado=-666; // Va un valor arbitrario
	}
	else
	{
		sacado=pila.datos[pila.cima]; // Primero se coloca el valor de la cima en una variable "sacado"
		pila.cima--; // Y recién se decrementa "pila.cima"
	}
	return sacado;
}

int consultartope(tpila pila)
{
	int consultado;
	
	if(pilavacia(pila)==true)
	{
		consultado=-900; // Nuevamente un valor arbitrario
	}
	else
	{
		consultado=pila.datos[pila.cima];
	}
	
	return consultado;
} // Esta función es muy similar a "sacarpila", pero sólo retorna el último valor, no lo saca

