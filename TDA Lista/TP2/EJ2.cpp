typedef char tcadena[10];

typedef struct tnodo *pnodo;

typedef struct tnodo{
	tcadena dato;
	pnodo sig;
};

typedef struct tlista
{
	pnodo i;
	pnodo f;
};

void semana(tlista &lista, tcadena dia)
{
	pnodo sacado;
	while(tlista.i->dato!=dia)
	{
		sacado=sacar_final(lista);
		agregar_inicio(lista,sacado)
	}
}
