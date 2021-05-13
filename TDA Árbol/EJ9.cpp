void mostrarimpares(pnodo r)
{
	if(r==NULL)
	{
		cout<<endl;
	}
	else
	{
		if(r->dato % 2 != 0)
		{
			cout<<r->dato<<endl;
			mostrarnodos2D(r->izq);
			mostrarnodos2D(r->der);
		}
		else
		{
			cout<<endl;
			mostrarnodos2D(r->izq);
			mostrarnodos2D(r->der);
		}
	}
} //algoritmo menos optimizado q la pija jajajaj xd

void hojasimpares(pnodo r)
{
	if(r!=NULL)
	{
		if(r->dato % 2 != 0 && (r->izq==NULL && r->der==NULL))
		{
			cout<<r->dato<<endl;
		}
		else
		{
			cout<<endl;
		}
		mostrarnodos2D(r->izq);
		mostrarnodos2D(r->der);
	}
}
