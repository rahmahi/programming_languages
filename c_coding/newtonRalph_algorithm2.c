/************************************

 A PROGRAM FOR NEWTON RALPSON METHOD

************************************/
#include<stdio.h>
#include<math.h>
main()
{
	int i,n;
	float x,x0,xold,fx,f1x,y;
	printf("enter the inital guess x0\n");
 	scanf("%f",&x0);
	xold=x0;
	for(i=1;i<=60;i++)
	{
		fx=2*pow(xold,2)-5*xold+3;
		f1x=4*xold-5;
		x=xold-fx/f1x;
		printf("iteration vlaue of i=%d fx=%f f1x=%f xold=%f x=%f\n",i,fx,f1x,xold,x);
		if(x==xold)
		goto root;
		else
		xold=x;
	}
		root:
		printf("the root is %f\n",x);
	y=2*pow(x,2)-5*x+3;
	printf("y=%f\n",y);
}
