const int MAX=100;

typedef char tconjunto[10];

typedef int tcontenedor[MAX];

typedef char tcadena[MAX];

typedef struct tpila{
	tcontenedor dato;
	int cima;
};

void resolverposfija(tcadena posfija)
{
	tconjunto conjunto{'1','2','3','4','5','6''7','8','9'};
	tpila pilaOP;
	iniciar_pila(pilaOP);
	int s1, s2, i=0, longc=(longitud(posfija));
	
	while (i<longc)
	{
		if(pertenencia(posfija[i], conjunto)==true)
		{
			cargar_pila(pilaOP, chartonum(posfija[i]))
		}
		else
		{
			s1=sacar_pila(pilaOP);
			s2=sacar_pila(pilaOP);
			cargar_pila(pilaOP, calculo(s1,s2,posfija[i]))
			i++;			
		}
		cout<<"RESULTADO: "<<consultar_tope(pilaOP);
	}
}
