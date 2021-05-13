// Dada la serie numérica: 2-5-7-12-19-31-50-81-..., cada término se calcula con la suma de los dos términos precedentes
// salvo los dos primeros que valen 2 y 5 respectivamente. Considerando esto, desarrolle un algoritmo que aplique
// el TDA Cola y sus operaciones básicas para calcular un término cualquiera de la serie.
// POR EJEMPLO: Si se solicita el 5to término, el algoritmo debe generar el valor 19.
// (i) -> ( no hace falta desarrollar las operaciones básicas )

const int MAX=2;

typedef int tcontendor[MAX];
typedef int tcola{
	tcontenedor datos;
	int frente;
	int final;
};

int calcularserie(int termino)
{
	int resul, s1, s2, suma, i=1;
	tcola cola;
	
	iniciar_cola(cola);
	
	if(termino==1)
	{
		return 2;
	}
	else
	{
		if(termino==2)
		{
			return 5;
		}
		else
		{
			cargar_cola(cola, 2);
			cargar_cola(cola, 5);
			while(i<=termino-2)
			{
				s1=quitar_cola(cola);
				s2=quitar_cola(cola);
				suma=s1+s2;
				cargar_cola(cola,suma);
				cargar_cola(cola,s2);
				i++;
			}
		}
	}
	return suma;
}
