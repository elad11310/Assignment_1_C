
#define e 2.71828

double Exp(int x)
{	double sum=1;
	int i=0;
	for(i=0;i<x;i++)
		sum*=e;
return sum;
}
double Pow(double x,int y)
{
	double sum=1;
	int i=0;
	for(i=0;i<y;i++)
		sum*=x;
	
	return sum;
}
