/***********************************************
	INTEGRATION BY METHOD OF
	TRAPEZIODAL RULE

intial point of integation x1
final point of integration x2
segment widths h
***********************************************/
#include<stdio.h>
#include<math.h>
#define f(x) x*x 
main()
{
	printf("enter intial and final point and segment width\n");
	int  i,n;
	float x1,x2,h,sum,intg;
	scanf("%f%f%f",&x1,&x2,&h);
	n=(x2-x1)/h;
	sum=(f(x1)+f(x2))/2.0;
	for(i=1;i<=(n-1);i+=1)
	{
		sum=sum+f(x1+i*h);
	printf("sum=%f\n",sum);
	}
	intg=sum*h;
	printf("for  h=%f	n=%d	integration=%8.3f\n",h,n,intg);
}
