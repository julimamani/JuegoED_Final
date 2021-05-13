typedef char tcadena[30];

typedef struct tnodo *pnodo

typedef struct tnodo{
	int dato;
	pnodo sig;	
};

typedef struct cola{
	pnodo i;
	pnodo f;
};

void convertir(tcadena num)
{
	int longc, tcola cola iniciar_cola(cola), pnodo nuevo;
	longc=longitud(num);
	
	for (int i=2; i<longitud; i++)
	{
		crear_nodo(nuevo, conv(num[i]));
		agregar_cola(cola, nuevo);
	}
	int suma=0;
	int exp=-1;
	while(cola_vacia(cola)==false)
	{
		suma=quitar_cola(cola)->dato*pow(10,exp)+suma;
		exp--;
	}
	cout<<"EL equivalente es: "<<suma<<endl;
}

