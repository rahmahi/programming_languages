/******************************************
	PROGRAM TO OBTAIN ROOT
	      BY METHOD OF
	       BISECTION

inital guess and maxerror x0,x1,e
******************************************/
#include<stdio.h>
#include<math.h>
#define f(x) x*x-4
main()
{
	float x0,x1,x2,x3,e,y0,y1,y2;
	printf("enter the inital guess and maxerror x0,x1,e\n");
	scanf("%f%f%f",&x0,&x1,&e);
	y0=f(x0);y1=f(x1);
	if(y0*y1<0)
	{goto bisec;}
	else{printf("change your intial guesses\n");}
	bisec:	
	do
	{
	x2=(x0+x1)/2.0;
	y2=f(x2);
	if(y0*y2<0)
	{
		x1=x2;
		y1=y2;
	}
	else
	{
		x0=x2;
		y0=y2;
	}
	x3=fabs((x1-x0)/x1);
	}
	while(x3>e);
	printf("root and final equation is %f &	%f\n",x2,y2);
}
