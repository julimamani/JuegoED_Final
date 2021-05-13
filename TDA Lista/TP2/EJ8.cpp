#include<string.h>

typedef struct tnodo *pnodo

typedef struct tfecha
{
	int dia;
	int mes;
	int ano;
};

typedef struct tdom
{
	string calle;
	int num;
	string barrio;
	string localidad;	
};

typedef struct tvehiculo
{
	string marca;
	int modelo;
	string patente;
};

typedef struct thora
{
	int hora;
	int min;
	int seg;
};

typedef struct thorario
{
	thora entrada;
	thora salida;
};

typedef struct tchofer
{
	string apellido;
	string nombre;
	int legajo;
	int dni;
	tfecha fnac;
	tdom domicilio;
	tvehiculo vehiculo;
	thorario horario;
	int hextra;
};

typedef struct tnodo
{
	tchofer dato;
	pnodo sig;
}

typedef struct tlista
{
	pnodo i;
	pnodo f;
}

void listarxhorario (tlista lista, thora horai)
{
	pnodo p=lista.i;
	int cont=0;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		cout<<"Lista vacía"<<endl;
	}
	else
	{
		while(p!=NULL)
		{
			if(p->dato.horario.entrada.hora == horai.hora && p->dato.horario.entrada.min == horai.min)
			{
				cout<<p->dato.apellido<<" "<<p->dato.nombre<<endl;
				cout<<p->dato.fnac.dia<<"-"<<p->dato.fnac.mes<<"-"<<p->dato.fnac.ano<<endl;
				cout<<p->dato.vehiculo.patente<<endl;
				cont++;
			}
			p=p->sig;
		}
		cout<<"Hay "<<cont<<" choferes"<<endl;
	}
}

void mayorhxt(tlista lista)
{
	pnodo max, p=lista.i->sig;
	
	if(lista.i==NULL && lista.f==NULL)
	{
		cout<<"Lista vacía"<<endl;
	}
	else
	{
		max=lista.i
		while(p!=NULL)
		{
			if(p->dato.hextra > max->dato)
			{
				max=p;
			}
			p=p->sig;
		}
		cout<<max->dato.legajo<<endl;
		cout<<max->dato.apellido<<" "max->dato.nombre<<endl;
		cout<<max->dato.dni<<endl;
	}
}

