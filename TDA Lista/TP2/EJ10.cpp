//ej10 b

void listadoalumnos(tlista lista, int curso)
{
	pnodo p;
	int cont=0;
	
	if(list.i==NULL && lista.f==NULL)
	{
		cout<<"La lista está vacía"<<endl;
	}
	else
	{
		p=lista.i;
		while(p!=NULL)
		{
			if(p->dato.curso==curso)
			{
				cout<<p->dato.apellido;
				cout<<p->dato.nombre;
				cout<<p->dato.fecha.anio;
			}
		}
	}
}
