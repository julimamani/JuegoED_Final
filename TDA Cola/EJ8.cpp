const int MAX=50;

typedef char tcadena[MAX]

typedef char tcontendor[MAX];

typedef struct tcola{
	tcontenedor datos;
	int frente;
	int final;
};

void lwr2uppr(tcola cola, tcadena &cadena)
{
	if(cola_llena(cola)=true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		for (int i=0; i<MAX; i++)
		{
			cola.final++;
			if(cadena[i]<='z' && cadena[i]>='a')
			{
				cola.datos[cola.final]=cadena[i]-32;
			}
			else
			{
				cola.datos[cola.final]=cadena[i];
			}
		}
	}
}
