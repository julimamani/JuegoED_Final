typedef float t_triangulo[3];

void creart(t_triangulo &t)
{
	cout<<"Ingrese los lados: "<<endl;
	cin>>t[0]>>t[1]>>t[2];
}

float permietro (t_triangulo t)
{
	return t[0]+t[1]+t[2];
}

float area(t_triangulo t)
{
	float sp=(t[0]+t[1]+t[2])/2;
	
}

float tipot(t_triangulo)
