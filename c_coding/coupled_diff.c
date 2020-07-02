/**************************************************
	DETERMINE INTEGRATION OF A FUNCTION
	BY METHOD OF SIMPSON'S 3/8 RULE
**************************************************/
#include<stdio.h>
#include<math.h>
#define f1(x,y) 2 * x + 3 * y
#define f2(x,y) x  - 2 * y

main()
{
	int i,j,k,n;
	float x1,x2,h,sum0,sum1,sum2,sum3,intg;
	printf("enter intial and final point with segment width\n");
	scanf("%f%f%f",&x1,&x2,&h);
	n=(x2-x1)/h;
	sum01=f1(x1)+f1(x2);
	sum02=f2(x1)+f2(x2);
	for(i=1;i<=n-1;i+=3)
	{
		sum11+=f1(x1+i*h, x1);
		sum12+=f2(x1+i*h);

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
