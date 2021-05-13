const int MAX=10;

typedef int tcontenedor=MAX;

typedef struct tpila{
	tcontenedor datos;
	int cima1;
	int cima2;
};

void iniciar_pilas(tpila &pilas)
{
	pilas.cima1=0;
	pilas.cima2=0;
}

bool pilas_llenas(tpila pilas)
{
	return (pilas.cima1+1==pilas.cima2);
}

bool pilas_vacias(tpila pilas, int opt)
{
	switch(opt)
	{
		case 1: return pilas.cima1==-1;
		case 2: return pilas.cima2==MAX;
	}
}

void agregar_pilas(tpila &pilas, int nuevo, int opt)
{
	if(pilas_llenas == true)
	{
		cout<<"El vector está lleno"<<endl;
	}
	else
	{
		switch(opt)
		{
			case 1: pilas.cima1++;
					pilas.datos[pilas.cima1]=nuevo;break;			
			case 2: pilas.cima2--;
					pilas.datos[pilas.cima2]=nuevo;break;					
			default: cout<<"nu >:v"<<endl;
		}
	}
}

int sacar_pilas(tpila &pilas, int opt)
{
	int sacado;
	
	switch(opt)
	{
		case 1: if(pilas_vacias(pila, 1)==true)
				{
					sacado=-999;
				}
				else
				{
					sacado=pilas.datos[pilas.cima1];
					pilas.cima1--;
				}break;
		case 2: if(pilas_vacias(pila, 2)==true)
				{
					sacado=-999;	
				}
				else
				{
					sacado=pilas.datos[pilas.cima2];
					pilas.cima2--;
				}break;
		default: sacado=-999; break;
	}
	return sacado;
}


//////////////////////////////////////////////////////

const int MAX=15;

typedef char tcontenedor[MAX];

typedef struct tindicadores{
	int ind1;
	int ind2;
	int cont;
};

typedef struct tcola{
	tcontenedor datos;
	tindicadores indices;
};

void iniciar_cola(tcola &cola)
{
	cola.indices->ind1=MAX-1;
	cola.indices->ind2=MAX-2;
	cola.indices->cont=0;
}

int sig(int a)
{
	if(a==MAX)
	{
		return 0;
	}
	else
	{
		return a+1;
	}
}

void cola_vacia(tcola cola)
{
	return cola.indices->ind1==cola.indices->ind2;
}

void agregar_cola(tcola &cola, int nuevo)
{
	if(cola_llena(cola)==true)
	{
		cout<<"cola llena"<<endl;
	}else
	{
		cola.indices->ind2=sig(cola.indices->ind2);
		cola.datos[cola.indices->ind2]=nuevo;
	}
}

/////////////////////////////////////////////////////////

const int MAX=30;

typedef char tcontenedor[MAX];

typedef struct tcola{
	tcontenedor datos;
	int fr1;
	int fr2;
	int fin1;
	int fin2;
	int cont;
};

void iniciar_cola(tcola &cola)
{
	cola.fr1=(MAX/2)-1;
	cola.fin1=(MAX/2)-1;
	cola.fr2=MAX-1;
	cola.fin1=MAX-1;
	cola.cont=0;
}

int sig(int a)
{
	if(a==(MAX/2))
	{
		return 0;
	}
	else
	{
		if(a==MAX)
		{
			return 15;
		}
	}
}

bool cola_vacia(tcola cola, int opt)
{
	switch(opt)
	{
		case 1: return cola.fin1==cola.fr1;break;
		case 2: return cola.fin2==cola.fr2;break;
	}
}

bool cola_llena(tcola cola, int opt)
{
	switch(opt)
	{
		case 1: return cola.fin1==sig(cola.fr1);break;
		case 2: return cola.fin2==sig(cola.fr2);break;
	}
}

void agregar_cola(tcola &cola, int nuevo, int opt)
{
	switch(opt)
	{
		case 1: if(cola_llena(cola, 1)==true)
				{
					cout<<"Cola 1 llena"<<endl;
				}
				else
				{
					cola.fin1++;
					cola.datos[cola.fin1]=nuevo;
				}break;
		case 2: if(cola_llena(cola, 2)==true)
				{
					cout<<"Cola 2 llena"<<endl;
				}
				else
				{
					cola.fin2++;
					cola.datos[cola.fin2]=nuevo;
				}break;
		default: cout<<"Opción Inválida"<<endl;
	}
}

char sacar_cola(tcola &cola, int opt)
{
	char sacado;
	switch(opt)
	{
		case 1: if(cola_vacia(cola, 1)==true)
				{
					sacado=' ';	
				}
				else
				{
					cola.fr1++;
					sacado=cola.datos[cola.fr1];
				}break;
		case 2: if(cola_vacia(cola,2)==true)
				{
					sacado=' ';	
				}	
				else
				{
					cola.fr1++;
					sacado=cola.datos[cola.fr1];
				}break;
		default: sacado=' ';
	}return sacado;
}
/////////////////////////////////////////////////
const int MAX=45;

typedef char tcadena[45];

typedef struct tpila{
	tcadena cadena;
	int cima;
};

bool palindromo (tcadena cadena, int ocup)
{
	tpila pila;
	iniciar_pila(pila);
	bool band;//para verificar si es palindromo
	
	//un for para almacenar la cadena en una pila
	for(int i=0; i<=ocup; i++)
	{
		agregar_pila(pila,cadena[i])
	}
	i=0; // se reinicia i para posteriormente volverlo a usar
	
	while(band == true && pila_vacia(pila==false))
	{
		if(cadena[i]!=sacar_pila(pila))
		{
			band == false
		}
		else
		{
			i++;
		}
	}
	return band;
}

bool llaves (tcadena cadena, int ocup)
{
	tpila pila;
	iniciar_pila(pila);
}
