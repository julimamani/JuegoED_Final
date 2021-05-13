void minusmayus(pnodo &lista)
{
	pnodo p;
	
	if(lista==NULL)
	{
		cout<<"Lista vacía, fijate lpm"<<endl;
	}
	else
	{
		p=lista
		
		while(p!=NULL)
		{
			if(p->dato>='a' && p->dato<='z')
			{
				p->dato=p->dato-32;
			}
			p=p->sig;
		}
	}
}
