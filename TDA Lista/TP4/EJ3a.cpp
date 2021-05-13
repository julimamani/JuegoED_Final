typedef int tfecha[3]

void crearfecha(tfecha &fecha)
{
	cout<<"Ingrese una fecha en formato DD/MM/AAAA"<<endl;
	cin>>fecha[0]; cin>>fecha[1]; cin>>fecha[2];
}

bool validarf(tfecha fecha)
{
	bool valido=false;
	
	if(fecha[2]>=0)
	{
		if(fecha[1]<1 && fecha[1]>12)
		{
			switch(fecha[2])
			{
				case 1:; case 3:; case 5:; case 7:; case 8:; case 10:; case 12:
					if(fecha[0]>0 && fecha[0]<32)
					{
						valido=true;
					}break;
				case 2:; case 6:; case 9:; case 11:
					if(fecha[0]>0 && fecha[0]<31)
					{
						valido=true;
					}break;
				case 2:
					if(fecha[0]<=28 && fecha[0]>0)
					{
						valido=true; break;
					}
					else
					{
						if(fecha[0]==29 && fecha[2]%4==0)
						{
							valido=true;break;
						}
						else
						{
							break;
						}
					}
			}
		}
	}
	return valido;
}

bool igualdadfecha(tfecha fecha1; tfecha fecha2)
{
	bool igual=false;
	
	if(fecha1[0] == fecha2[0])
	{
		if(fecha1[1]==fecha2[1])
		{
			if(fecha1[2]==fecha2[2])
			{
				igual=true;
			}
		}
	}
	return igual;
}

bool bisiesto(tfecha fecha)
{
	if(fecha[2] % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void mostrarmes(tfecha fecha)
{
	switch (fecha[1])
	{
		case 1: cout<<"ENERO"<<endl; break;
		case 2: cout<<"FEBRERO"<<endl; break;
		...
		case 12: cout<<"DICIEMBRE"<<endl; break;
		default: cout<<"Dato no válido"<<endl; break;
	}
}

