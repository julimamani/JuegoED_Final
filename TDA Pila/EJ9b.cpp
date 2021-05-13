//fórmula para sacar los 3 primero términos: return 2*termino-1;
//si el usuario ingresa por ej. 2, queda 2*2=4 -> 4-1=3: el 2do término es 3

const int MAX=2;

typedef int contenedor[MAX];
typedef struct tpila{
	tcontenedor dato;
	int cima;
};

int fibonacciv2(int termino)
{
	tpila pila;
	iniciar_pila(pila);
	int s1, s2, s3, suma, i=1;
	
	if(termino==1 || termino==2 || termino==3) //en caso de que el usuario ingrese alguno de los 3 iniciales
	{
		return 2*termino-1;
	}
	else
	{
		cargar_pila(pila, 1);	//					   |__5__|
		cargar_pila(pila, 3);	// la pila queda así:  |__3__|
		cargar_pila(pila, 5);	//					   |__1__|
		
		while(i<=termino-3)
		{
			s1=sacar_pila(pila);
			s2=sacar_pila(pila);
			s3=sacar_pila(pila);
			suma=s1+s2+s3;
			cargar_pila(pila, s2);		//		s1|__5__|		   |__9__|s1+s2+s3
			cargar_pila(pila, s1);		//		s2|__3__|   -->    |__5__|s1	   -->		...
			cargar_pila(pila, suma);    //		s3|__1__|		   |__3__|s2
			i++;
		}
	}
	
	return consultar_tope(pila);
}

// altos grafiquitos de dioses :v
