typedef struct tnodo *pnodo;

typedef struct tnodo
{
	float dato;
	pnodo sig;
	int orden;
};

void agregar_final(tlista &lista)
{
	pnodo nuevo;
	
	crear_nodo (nuevo);
	
	if(lista.i==NULL && lista.f==NULL)
	{
		nuevo->orden=1;
		lista.i=nuevo;
		lista.f=nuevo;
	}
	else
	{
		nuevo->orden=lista.f->orden++;
		lista.f->sig=nuevo;
		lista.f=nuevo;
	}
}
