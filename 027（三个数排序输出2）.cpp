#include <stdio.h>
int main()
{
	int a,b,c,m,n,p;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		m=a;
		a=b;
		b=m;
	}
	if(a>c)
	{
		p=a;
		a=c;
		c=p;
	}
	if(b>c)
	{
		n=b;
		b=c;
		c=n;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
