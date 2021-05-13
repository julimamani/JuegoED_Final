const int MAX=30;

typedef int tcontenedor[MAX];

typedef struct tbicola{
	tcontenedor datos;
	int frente;
	int final;
	int cont;
};

int quitar_bicola(tbicola &bicola, int opt)
{
	int sacado;
	
	if(cola_vacia(cola)==true)
	{
		sacado=-999;
	}
	else
	{
		switch(opt)
		{
			case 1:	bicola.frente++;
					sacado=bicola.datos[bicola.frente];
					break;
			case 2: sacado=bicola.datos[bicola.final];
					bicola.final--;					
		}
		bicola.cont--;
	}
	return sacado;
}
