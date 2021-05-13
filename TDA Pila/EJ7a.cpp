const int MAX=100;

typedef char tconjunto[10];

typedef char tcadena[MAX];

typedef struct tpila{
	tcadena dato;
	int cima;
};

void interfija(tcadena interfija, tcadena posfija) //interfija: cadena que contiene la operación, posfija: cadena que almacenará la notación posifja de interfija
{
	tconjunto conjunto={'0','1','2','3','4','5','6','7','8','9'};
	tpila pilaOP;
	iniciar_pila(pilaOP);
	char sacado;
	int i=0, j=0; //i recorre interfija, j recorre posfija
	int longc=longitud(interfija);
	
	while(i<longc)
	{
		if(pertenencia(interfija[i], conjunto)==true)// comprueba si el elemento es un numero
		{
			posfija[j]=interfija[i]
			j++
		}
		else
		{
			if(pila_vacia(pilaOP)==true)
			{
				cargar_pila(pilaOP,interfija[i])
			}
			else
			{
				while(pila_vacia(pilaOP)==false && prioridad(consultar_tope(pilaOP)>=prioridad(interfija[i]))
				{
					sacado=sacar_pila(pilaOP);
					posfija[j]=sacado;
					j++
				}
				cargar_pila(pilaOP, interfija[i]); // lo carga a los operadores
			}
		}
		i++;
	}
	while(pila_vacia(pilaOP)==false)
	{
		sacado=sacar_pila(pilaOP);
		posfija[j]=sacado; j++;
	}
}

