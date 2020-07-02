#include<stdio.h>
#include<math.h>
#define F(x,y) (x)-(y)
main()
{
	float x0,h,xn,y0,y,f1,f;
	printf("Enter the vlaue of x0,y0,h and last point xn\n");
	scanf("%f%f%f%f",&x0,&y0,&h,&xn);
	for(x0=x0;x0<=xn;x0+=h)
	{
		f=F(x0,y0);
		f1=F(x0+h,y0+f);
		y=y0+0.5*h*(f+f1);
		y0=y;
	printf("The answer is f=%f y=%f x0=%f f1=%f\n",f,y,x0,f1);
	}
}
/*
output

Enter the vlaue of x0,y0,h and last point xn
0
1
0.01
0.1
The answer is f=-1.000000 y=-1.000000 x0=0.000000 f1=0.990000
The answer is f=-0.980000 y=-0.980000 x0=0.010000 f1=0.980200
The answer is f=-0.960200 y=-0.960200 x0=0.020000 f1=0.970598
The answer is f=-0.940598 y=-0.940598 x0=0.030000 f1=0.961192
The answer is f=-0.921192 y=-0.921192 x0=0.040000 f1=0.951980
The answer is f=-0.901980 y=-0.901980 x0=0.050000 f1=0.942960
The answer is f=-0.882960 y=-0.882960 x0=0.060000 f1=0.934131
The answer is f=-0.864131 y=-0.864131 x0=0.070000 f1=0.925489
The answer is f=-0.845489 y=-0.845489 x0=0.080000 f1=0.917035
The answer is f=-0.827035 y=-0.827035 x0=0.090000 f1=0.908764
The answer is f=-0.808764 y=-0.808764 x0=0.100000 f1=0.900677
*/
