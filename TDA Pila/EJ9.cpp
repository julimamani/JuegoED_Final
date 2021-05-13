const int MAX=2;

typedef int contenedor[MAX];
typedef struct tpila{
	tcontenedor dato;
	int cima;
};

int fibonacci(int termino)
{
	tpila pila;
	iniciar_pila(pila)
	int sacado1, sacado2, suma, i=1;
	
	if(termino==1 || termino==2)
	{
		return 1;
	}
	else
	{
		cargar_pila(pila, 1);
		cargar_pila(pila, 1);
		
		while(i<=termino-2)
		{
			sacado1=sacar_pila(pila);
			sacado2=sacar_pila(pila);
			suma=sacado1+sacado2;
			cargar_pila(pila, sacado1);
			cargar_pila(pila, suma);
			i++;			
		}
	}
	return consultar_tope(pila);
}
