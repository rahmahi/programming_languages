/*******************************************
	PROGRAM FOR ROOT OF A EQUAITON
	BY METHOD OF
	REGULA FASLI


intial guess points x1,x2
permitted error e
*******************************************/
#include<stdio.h>
#include<math.h>
#define  f(x) x*x-121
main()
{	
	int i=1;
	float x1,x2,x3,y1,y2,y3,e;
	printf("enter the inital guess and error\n");
	scanf("%f%f%f",&x1,&x2,&e);
	y1=f(x1);
	y2=f(x2);
	x3=((x1*y2)-(x2*y1))/(y2-y1);
	y3=f(x3);
	if(fabs(y3)<e)
	{
		printf("solution converges\n");
		printf("solution is for %f and %f\n",x3,y3);
	}
	else
	{
	printf("-------------------------------------------------------------\n");
	printf("itern      x1	 y1	 x2	y2	x3(root)      y3\n");
	printf("-------------------------------------------------------------\n");
		do
		{
			x3=((x1*y2)-(x2*y1))/(y2-y1);
			y3=f(x3);
			if(y1*y3<0)
			{	
				x2=x3;
				y2=y3;
			}
			else
			{
				x1=x3;
				y1=y3;
			}
	printf("%d\t%7.3f\t%7.3f\t%7.3f\t%7.3f\t%7.3f\t%7.3f\n",i,x1,y1,x2,y2,x3,y3);
		i++;
		}
				while(fabs(y3)>e);
	}
}	
