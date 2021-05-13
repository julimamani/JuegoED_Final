typedef struct tnodo *pnodo;

typedef struct tnodo{
	int dato;
	pnodo sig;
};

int sumadigitos(int num)
{
	pnodo nuevo;
	pnodo pila;
	int suma=0;
	iniciar_pila(pila);
	
	while(num!=0)
	{
		crear_nodo(nuevo, num%10);
		agregar_inicio(pila, nuevo);
		num=num/10;
	}
	
	while(pila_vacia(pila)==false)
	{
		suma=suma+sacar_inicio(pila)->dato;//acordate de "->dato"
	}
	
	return suma;
}

int fibonacci(int termino)
{
	pnodo nuevo, pila;
	int sacado1, sacado2, suma, i=1;
	iniciar_pila(pila);
	
	if(termino==1 || termino==2)
	{
		return 1;
	}
	else
	{
		crear_nodo(nuevo, 1);
		agregar_inicio(pila, nuevo);
		crear_nodo(nuevo, 1);
		agregar_inicio(pila, nuevo);
		
		while(i<=termino-2)
		{
			sacado1=sacar_inicio(pila)->dato;
			sacado2=sacar_inicio(pila)->dato;
			suma=sacado1+sacado2;
			agregar_inicio(pila, sacado1);
			crear_nodo(nuevo, suma)
			agregar_inicio(pila, suma);
			delete sacado2;
			i++;			
		}
	}
	return consultar_inicio(pila)->dato;
}
