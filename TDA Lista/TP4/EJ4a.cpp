typedef int tracional[2];

void crearRacional(tracional &rac)
{
	cout<<"Ingrese numerador: "; cin>>rac[0];
	do
	{
		cout<<"Ingrese denominador DISTINTO de cero"; cin>>rac[1];
	}while(rac[1]==0)
}

bool igualdad(tracional rac1, tracional rac2)
{	
	return (r1[0]*r2[1]==r1[1]*r2[0]);	
}

// [a/b] + [c/d] = [a*d+c*b/b*d]

void sumaR(tracional rac1, tracional rac2)
{
	tracional rac3;
	
	rac3[0] = (r1[0]*r2[1] + r2[0]*r1[1]);
	rac3[1] = (r1[1]*r2[1]);
	
	cout<<rac3[0]<<"/"<<rac3[1];
	cout<<"simplificá después conchetuhermana"<<endl;
}

void restaR(tracional rac1, tracional rac2)
{
	tracional rac3;
	
	rac3[0] = (r1[0]*r2[1] - r2[0]*r1[1]);
	rac3[1] = (r1[1]*r2[1]);
	
	cout<<rac3[0]<<"/"<<rac3[1];
	cout<<"simplificá después conchetuhermana"<<endl;
}

void productoR(tracional rac1, tracional rac2)
{
	tracional rac3;
	
	rac3[0] = (rac1[0]*rac2[0]);
	rac3[0] = (rac1[1]*rac2[1]);
	
	cout<<rac3[0]<<"/"<<rac3[1];
	cout<<"simplificá después conchetuhermana"<<endl;
}

void divisionR(tracional rac1, tracional rac2)
{
	tracional rac3;
	
	rac3[0] = (rac1[0]*rac2[1]);
	rac3[0] = (rac1[1]*rac2[0]);
	
	cout<<rac3[0]<<"/"<<rac3[1];
	cout<<"simplificá después conchetuhermana"<<endl;
}

void potenciaR(tracional rac, int exp)
{
	tracional racPOT;
	// SOLO CON LIBRERÍA <math.h> creo que era asi xd
	racPOT[0]=pow(rac[0], pot)
	racPOT[1]=pow(rac[1], pot)
	// SOLO CON LIBRERÍA <math.h> creo que era asi xd
	
	cout<<racPOT[0]<<"/"<<racPOT[1];
}

float decimal(tracional rac)
{
	return (rac[0]/float(rac[0]));
}

void mostrarR(tracional rac)
{
	cout<<rac[0]<<"\n-\n"<<rac[1];
}


