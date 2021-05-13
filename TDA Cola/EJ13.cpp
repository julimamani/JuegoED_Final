const int MAX=10;

typedef int tbicola[MAX];

int sig(int a)
{
	if(a==MAX-1)
	{
		return 2;
	}
	else
	{
		return a+1;
	}
}

int ant(int a)
{
	if(a==2)
	{
		return MAX-1;
	}
	else
	{
		return a-1;
	}
}

bool bicola_vacia(tbicola bicola)
{
	return(bicola[0]==bicola[1])
}
void agregar_bicola(tbicola &bicola, int nuevo, int opt)
{
	if(bicola_llena(bicola)==true)
	{
		cout<<"Cola llena"<<endl;
	}
	else
	{
		switch(opt)
		{
			case 1: bicola[bicola[0]]=nuevo;
					bicola[0]=ant(bicola[0]);
					break;
			case 2: bicola[1]=sig(bicola[1]);
					bicola[bicola[1]]=nuevo;
					break;
		}
	}
}
