typedef int tangulo[3];

void crear_angulo(tangulo &a)
{
	cout<<"Ingrese el grado: ";cin>>a[0];
	cout<<"Ingrese los minutos: ";cin>>a[1];
	cout<<"Ingrese los segundos: ";cin>>a[2];
}

bool validar_angulo (tangulo a)
{
	bool band=true;
	
	if(a[0]>359 || a[0]<0)
	{
		band=false;
	}
	else
	{
		if(a[1]>59 || a[1]<0)
		{
			band=false;
		}
		else
		{
			if(a[2]>59 || a[2]<0)
		}
	}
	return band;
}

void tipo_angulo(tangulo a)
{
	if(a[0]<90)
	{
		cout<<"햚gulo agudo"<<endl;
	}
	else
	{
		if(a[0] == 90 && (a[1],a[2])==0)
		{
		cout<<"햚gulo recto"<<endl;
		}
		else
		{
			if(a[0]<180)
			{
				cout<<"햚gulo obtuso"<<endl;
			}
			else
			{
				if(a[0] == 180 && (a[1],a[2])==0)
				{
					else
					{
						cout<<"햚gulo completo"<<endl;
					}
				}
			}
		}
	}
}


