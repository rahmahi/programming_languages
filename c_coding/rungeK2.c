/*******************************

PROGRAM FOR RUNGE KUTTA ORDER 2

*******************************/
#include<stdio.h>
#include<math.h>
#define F(x,y) x*x+y
main()
{
	float x0,xn,h,y,y0,y1,y2;
	printf("enter supply value of x0 and y0\n");
	scanf("%f%f",&x0,&y0);
	printf("enter value of xn, width of increment h\n");
	scanf("%f%f",&xn,&h);
	for(x0=x0;x0<=xn;x0+=h)
	{
		y1=F(x0,y0);
		y2=F(x0+h,y0+h);
		y=y0+0.5*h*(y1+y2);
		y0=y;
	}
	printf("solution is %f\t%f\n",x0,y0);
}                                                                                                                                                                                                                                                                              
