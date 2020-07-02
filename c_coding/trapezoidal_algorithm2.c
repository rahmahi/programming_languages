/**************************************

	PROGRAM FOR INTEGRATION
		BY 
	TRAPEZIODAL METHOD

****************************************/
#include<stdio.h>
#include<math.h>
#define f(x) x*x
main()
{
	float x0,xn,h;float x,sum=0;
	printf("enter the inital point, final point,interval\n");
	scanf("%f%f%f",&x0,&xn,&h);
	for(x=x0;x<=xn;x+=h)
	{
		if(x==x0||x==xn)
		{
			sum+=h*f(x)/2.0;
		}
		else
		sum+=h*f(x);
	}
	printf("integration is %f\n",sum);
}
