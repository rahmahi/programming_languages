/**************************************************

	DETERMINE INTEGRATION OF A FUNCTION
	BY METHOD OF SIMPSON'S 1/3 RULE


integral 			f(x)
intial point of integration 	x1
final point of integration 	x2
segment width 			h
**************************************************/
#include<stdio.h>
#include<math.h>
#define f(x) x
main()
{
	int i,j,n;
	float x0,xn,h,sum0,sum1,sum2,intg;
	printf("enter intial and final point with segment width\n");
	scanf("%f%f%f",&x0,&xn,&h);
	n=(xn-x0)/h;
	sum0=f(x0)+f(xn);
	for(i=1;i<=n-1;i+=2)
	{
		sum1=sum1+f(x0+i*h);
	}
	for(j=2;j<=n-1;j+=2)
	{
		sum2=sum2+f(x0+j*h);
	}
	intg=(sum0+4.0*sum1+2.0*sum2)*(h/3.0);
	printf("for h=%f,initial point=%f,final point=%f\n",h,x0,xn);
	printf("integration is %7.2f\n",intg);
}                                                     
