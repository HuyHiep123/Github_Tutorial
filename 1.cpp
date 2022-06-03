#include "stdio.h"
#include "string.h"
#include "math.h"
int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	if(a*b==0)
	{
		return a+b;
	}
	else
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
		return a;
	}
}
int BCNN(int a, int b)
{
	return (a*b)/UCLN(a,b);
}
typedef struct phanso{
	int tuso;
	int mauso;
}PS;
PS rutgon(PS a)
{
	PS c;
	c.mauso= a.mauso/UCLN(a.mauso,a.tuso);
	c.tuso=a.tuso/UCLN(a.mauso,a.tuso);
	return c;
}
PS cong(PS a, PS b)
{
	PS c;
	c.tuso=a.tuso*b.mauso+b.tuso*a.mauso;
	c.mauso=a.mauso*b.mauso;
	c=rutgon(c);
	return c;
}
int main()
{
	PS a, b, c;
	printf("Nhap phan so a: ");
	scanf("%d%d", &a.tuso, &a.mauso);
	printf("Nhap phan so b: ");
	scanf("%d%d", &b.tuso, &b.mauso);
	a=rutgon(a);
	printf("Phan so rut gon cua a: %d/%d", a.tuso, a.mauso);
	c=cong(a,b);
	printf("\nTong 2 phan so: %d/%d", c.tuso, c.mauso);
}



