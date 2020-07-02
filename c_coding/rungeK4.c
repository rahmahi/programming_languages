/*******************************

PROGRAM FOR RUNGE KUTTA ORDER 4

*******************************/
#include<stdio.h>
#include<math.h>
#define F(x,y) x+y
main()
{
	float x0,xn,h,y,y0,k1,k2,k3,k4;
	printf("enter supply value of x0 and y0\n");
	scanf("%f%f",&x0,&y0);
	printf("enter value of xn, width of increment h\n");
	scanf("%f%f",&xn,&h);
	for(x0=x0+h;x0<=xn;x0+=h)
	{
		k1=h*F(x0,y0);
		k2=h*F(x0+(h/2),y0+(k1*h/2));
		k3=h*F(x0+(h/2),y0+(k2*h/2));
		k4=h*F(x0+h,y0+h*k3);
		y=y0+(h/6)*(k1+2*k2+2*k3+k4);
		y0=y;
	}
	printf("solution is %f\t%f\n",xn,y0);
}                                                                                                                                                                                                                                                                              
