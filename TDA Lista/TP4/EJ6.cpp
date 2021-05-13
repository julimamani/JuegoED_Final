typedef struct tcoord{
	int grado;
	int min;
	int seg;
	string dir;
};

typedef struct tpuntog{
	tcoord lat;
	tcoord lon;
};

void crear_punto(tpuntog &punto)
{
	cout<<"Ingrese datos de latitud: "<<endl;
	crear_coord(punto.lat);
	cout<<"Ingrese datos de longitud: "<<endl;
	crear_coord(punto.lon);
}
void crear_coord(tpunto &a)
{
	cout<<"	GRADOS: "; cin>>a.grado;
	cout<<"	MINUTOS: "; cin>>a.min;
	cout<<"	SEGUNDOS: "; cin>>a.seg;
	cout<<"	DIRECCIÓN: "; cin>>a.dir;
}

void validar_punto(tpunto punto)
{
	if(punto.lat.grado > 90 || punto.lat.grado < 0)
	{
		cout<<"Datos de latitud incorrectos (grados)"<<endl;
	}
	else
	{
		if(punto.lat.min > 60 || punto.lat.min < 0)
		{
			cout<<"Datos de latitud incorrectos (minutos)"<<endl;
		}
		else
		{
			if(punto.lat.seg > 60 || punto.lat.grado < 0)
			{
				cout<<"Datos de latitud incorrectos (segundos)"<<endl;
			}
			else
			{
				if(punto.lat.dir != "SUR" || punto.lat.dir != "NORTE")
				{
					cout<<"Datos de latitud incorrectos (dirección)"
				}
			}
		}
	}
	
	if(punto.lon.grado > 180 || punto.lon.grado < 0)
	{
		cout<<"Datos de longitud incorrectos (grados)"<<endl;
	}
	else
	{
		if(punto.lon.min > 60 || punto.lon.min < 0)
		{
			cout<<"Datos de longitud incorrectos (minutos)"<<endl;
		}
		else
		{
			if(punto.lon.seg > 60 || punto.lon.grado < 0)
			{
				cout<<"Datos de longitud incorrectos (segundos)"<<endl;
			}
			else
			{
				if(punto.lon.dir != "ESTE" || punto.lon.dir != "ESTE")
				{
					cout<<"Datos de longitud incorrectos (dirección)"
				}
			}
		}
	}
}
