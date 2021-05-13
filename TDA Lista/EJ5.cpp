void maximus(pnodo lista) //5b
{
	pnodo p=lista;
	int max=0;
	
	while(p!=NULL)
	{
		if(p->dato>max)
		{
			max=p->dato;
		}
		p=p->sig;
	}
	
	cout<<"Valor max: "<<max;
}

void promedius(pnodo lista)//5c
{
	pnodo p=lista;
	int promedio=0, div=0;
	
	while(p!=NULL)
	{
		if(p->dato!=0)
		{
			promedio=promedio+p->dato;
			div++;
		}
	}
	promedio=promedio/div;
	cout<<"Promedio: "<<promedio<<endl;
}
