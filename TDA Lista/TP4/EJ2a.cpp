typedef int thora[3]

void crearhora(thora &hora)
{
	cout<<"Ingrese la hora en hs, min, y seg.: ";
	cin>>hora[0]>>hora[1]>>hora[2];
}

bool validarhora(thora hora)
{
	bool valido=false;
	
	if(hora[0]>=0 && hora[0]<=23)
	{
		if(hora[1]>=0 && hora[1]<=59)
		{						
			if(hora[2]>=0 && hora[2]<=59)
			{
				valido=true;
			}
		}
	}
	return valido;
}

bool igualdadhoras(thora hora1, thora hora2)
{
	bool igual=false;
	
	if(hora1[0] == hora2[0])
	{
		if(hora1[1] == hora2[1])
		{
			if(hora1[2] == hora2[2])
			{
				igual=true;
			}
		}
	}
	return igual;
}

void compararhoras(thora hora1, thora hora2)
{
	if(hora1[0]>hora2[0])
	{
		cout<<"ES MAYOR"<<endl;
	}
	else
	{
		if(hora1[0]==hora2[0] && hora1[1]>hora2[1])
		{
			cout<<"ES MAYOR"<<endl;
		}
		else
		{
			if(hora1[1]==hora2[1] && hora1[2]>hora2[2])
			{
				cout<<"ES MAYOR"<<endl;
			}
		}
	}
}

int sumarhoras(thora hora1, thora hora2, thora hora3)
{
	hora3[2]=(hora1[2]+hora2)%60;
	int auxmin=(hora1[1]+hora2[1]+((hora1[2]+hora2)60));
	hora3[1]=auxmin%60;
	hora3[0]=((hora1[0]+hora2[0])+(auxmin/60))%60
}

float calcminutos(thora hora)
{
	int mins=(hora[0]*60+hora[1]+(float(hora[2])/60));
	return mins;
}

int calcsegundos(thora hora)
{
	int segs=(hora[0]*3600)+(hora[1]*60)	
	return segs;	
}

void mostrarhora(thora hora)
{
	cout<<"Son las "<<hora[0]<<":"<<hora[1]<<":"<<hora[2]<<endl;
}

void partedia(thora hora)
{
	if((hora[0]>=00 && hora[0]<=05) && (hora[1]>=00 && hora[1]<=59) && (hora[2]>=00 && hora[2]<=59))
	{
		cout<<"Es la madrugada"<<endl;
	}
	
	if((hora[0]>=06 && hora[0]<=11) && (hora[1]>=00 && hora[1]<=59) && (hora[2]>=00 && hora[2]<=59))
	{
		cout<<"Es la mañana"<<endl;
	}
	
	if((hora[0]>=12 && hora[0]<=19) && (hora[1]>=00 && hora[1]<=59) && (hora[2]>=00 && hora[2]<=59))
	{
		cout<<"Es la tarde"<<endl;
	}
	
	if((hora[0]>=20 && hora[0]<=23) && (hora[1]>=00 && hora[1]<=59) && (hora[2]>=00 && hora[2]<=59))
	{
		cout<<"Es la noche"<<endl;
	}
}

