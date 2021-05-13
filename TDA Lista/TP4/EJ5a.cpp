typedef float tcomplejo[2];

void prodescalar(tcomplejo comp, tcomplejo &comp2, int escalar)
{
	comp2[0]=(comp[0]*escalar);
	comp2[1]=(comp[1]*escalar);
}

void prodcompl(tcomplejo comp1. tcomplejo comp2, tcomplejo &comp3)
{
	comp3[0]=((comp1[0]*comp2[0]) - (comp1[1]*comp2[1]));
	comp3[1]=((comp1[0]*comp2[1]) + (comp1[1]*comp2[0]));
}
