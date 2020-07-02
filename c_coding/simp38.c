/**************************************************
	DETERMINE INTEGRATION OF A FUNCTION
	BY METHOD OF SIMPSON'S 3/8 RULE
**************************************************/
#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3.0)
main()
{
	int i,j,k,n;
	float x1,x2,h,sum0,sum1,sum2,sum3,intg;
	printf("enter intial and final point with segment width\n");
	scanf("%f%f%f",&x1,&x2,&h);
	n=(x2-x1)/h;
	sum0=f(x1)+f(x2);
	for(i=1;i<=n-1;i+=3)
	{
		sum1+=f(x1+i*h);
	}
	for(j=2;j<=n-1;j+=3)
	{
		sum2+=f(x1+j*h);
	}
	for(k=3;k<=n-1;k+=3)
	{
		sum3+=f(x1+k*h);
	}
	intg=(sum0+3.0*sum1+3.0*sum2+2.0*sum3)*((3.0/8.0)*h);
	printf("\n\nfor h=%f	integration=%f\n",h,intg);
}
