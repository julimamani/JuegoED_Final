typedef struct tfecha{
	int dia;
	int mes;
	int ano;
};

typedef struct tdomicilio{
	string calle;
	int num;
	string barrio;
	string localidad;
};

typedef struct tsocio{
	int numsocio;
	string nombre;
	string apellido;
	tfecha fnac;
	tfecha fing;
	int gfam;
	tdomicilio dom;
	int tel;
};

typedef struct tnodo{
	tsocio dato;
	pnodo sig;
	pnodo ant;
};

typedef struct tlista{
	pnodo i;
	int cont;
};

void listado(tlista lista, int valor)
{
	pnodo p=lista.i;
	int cont=0;
	
	if(lista.i==NULL)
	{
		cout<<"La lista está vacía ptm"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->dato.gfam>valor)
			{
				cout<<p->dato.nombre<<endl;
				cout<<p->dato.apellido<<endl;
				cout<<p->dato.fing->dia<<endl;
				cout<<p->dato.fing->mes<<endl;
				cout<<p->dato.fing->ano<<endl;
				cout<<p->dato.dom.localidad<<endl;
				cont++;
			}
			p=p->sig
		}
		cout<<"Se listaron "<<cont<<" socios"<<endl;
	}
}
