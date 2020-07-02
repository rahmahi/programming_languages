/************************************

 A PROGRAM FOR NEWTON RALPSON METHOD

************************************/
#include<stdio.h>
#include<math.h>
main()
{
	int i,n;
	float x,xold,fx,f1x,y;
	printf("enter the inital guess x and number of iteration\n");
	scanf("%f%d",&x,&n);
	xold=x;
	for(i=1;i<=n;i++)
	{
		fx=x*x*x-8;
		f1x=3*x*x;
		x=xold-fx/f1x;
		if(x==xold)
		goto root;
		else
		xold=x;
	}
		root:
		printf("solution is %f\n",x);
	y=x*x*x-81;
	printf("final equation value %f\n",y);
}
