// pila del tamaño del factorial a calcular
// se almacenan los valores precedentes
// se extrae cada valor y se van multiplicando hasta vaciar la pila

const int MAX=30;

typedef int tpila[MAX];

//inciso 1
int factorial(int num)
{
	int producto=1;
	
	tpila pila;
	iniciar_pila(pila);
	
	for (int i=1; i<= num; i++)// cargando la pila (1|2|3|4|...|n)
	{
		cargar_pila(pila, i);
	}
	
	while(pila_vacia(pila)==false)// se extrae con while preferentemente
	{
		producto=producto*sacar_pila(pila);
	}
	
	return producto;
}

//inciso 2
int inverso(int num)
{
	int pot=0, inv=0;
	
	tpila pila;
	iniciar_pila(pila);
	
	while(num!=0)
	{
		cargar_pila(pila, num%10);
		numero=numero/10;
	}
	
	for (int i=0; pila_vacia(pila)==false; i++)
	{
		inv=inv+sacar_pila(pila)*pow(10,i)
	}
	
	return inv;
}

void capicua(int num)
{
	tpila pila;
	int numoriginal=num, inv=0;
	
	while(num!=0)
	{
		cargar_pila(pila, num%10);
		numero=numero/10;
	}
	
	for (int i=0; pila_vacia(pila)==false; i++)
	{
		inv=inv+sacar_pila(pila)*pow(10,i)
	}
	
	if(inv==numoriginal)
	{
		cout<<"Es capicúa"<<endl;
	}
	else
	{
		cout<<"No es capicúa"<<endl;
	}
}

