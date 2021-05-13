/*Dada una matriz 17x17, diseñe un algoritmo que copie los elementos (no pertenencientes a la diag. principal)
  a una lista simple con punteros al inicio y al final. Para ello, considere que disponde de TODAS las
  operaciones de listas simples básicas. Defina todas las estructuras de datos para resolver la situación
  planteada.*/

const int max=17;

typedef float tmatriz[max][max];

typedef struct tnodo *pnodo;

typedef struct tnodo{
	float dato;
	pnodo sig;
};

typedef struct tlista{
	pnodo i;
	pnodo f;
};

void matriz_a_lista(tmatriz matriz, tlista &lista)
{
	int i,j;
	pnodo nuevo;
	for (i=0; i<max; i++)
	{
		for(j=0;j<max;j++)
		{
			if(i!=j)
			{
				crearNodo(nuevo,matriz[i][j]);
				agregarfinal(lista,nuevo);
			}
		}
	}
}
