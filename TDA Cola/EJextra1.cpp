// Dada la siguiente implementacion del TDA bicola, modifique las operaciones básicas iniciar_bicola y 
// quitar_bicola (y sus operaciones auxiliares) para adecuarse a ella. Indique los valores apropiados
// para MAX1 y MAX2, teniendo en cuenta que la bicola guardará hasta 40 datos y que se prioriza
// espacio de almacenamiento. ENTRADA RESTRINGIDA

const int MAX1=40;
const int MAX2=3;

typedef float tcontendor[MAX1];
typedef int tindices[MAX2];

typedef struct tbicola{
	tcontenedor datos;
	tindices indices
};

void iniciar_bicola(tbicola &bicola)
{
	bicola.indices[0]=MAX1-1;
	bicola.indices[1]=MAX1-1;
	bicola.indices[2]=0;
	//donde .indices[0] es FRENTE, "[1] es FINAL y "[2] es el contador
}

int sig(int a)
{
	if(a==MAX1-1)
	{
		return 0;
	}
	else
	{
		return a+1;
	}
}

int ant(int a)
{
	if(a==0)
	{
		return MAX1-1;
	}
	else
	{
		return a-1;
	}
}

bool bicola_vacia(tbicola bicola)
{
	return bicola.indices[2]==0;
}

float quitar_bicola(tbicola &bicola, int opt)
{
	float sacado;
	if(bicola_vacia(bicola)==true)
	{
		sacado=-999;
	}
	else
	{
		switch(opt)
		{
			case 1: bicola.indices[0]=sig(bicola.indices[0]);
					sacado=bicola.datos[bicola.indices[0]];
					bicola.indices[2]--;
					break;
			case 2: sacado=bicola.datos[bicola.indices[1]];
					bicola.indices[1]=ant(bicola.indices[1]);
					bicola.indices[2]--;
					break;			
		}
	}
	return sacado;
}
