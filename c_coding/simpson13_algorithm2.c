/************************************************

PROGRAM FOR INTEGRATION BY SIMPSON'S 1/3 METHOD

*************************************************/
#include<stdio.h>
#include<math.h>
#define pi 3.14159
#define f(x) sin(x)/x
main()
{
	int i=0;
	float x0,xn,h,y0,yn,x,sum;
	printf("enter values x0,xn in degree and value of h\n");
	scanf("%f%f%f",&y0,&yn,&h);
	x0=y0*pi/180.0;
	xn=yn*pi/180.0;
	sum=(f(x0)+f(xn))*(h/3.0);
	for(x=x0+h;x<xn;x+=h)
	{
	i+=1;
	if(i%2==0)
	{
		sum+=h*2*f(x)/3.0;
	}
	else
	{
		sum+=h*4*f(x)/3.0;
	}
	}
	printf("integration is  %f\n",sum);
}
