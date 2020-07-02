#include<stdio.h>
#include<math.h>
#define f(x) x
main()
{
int i,n;
float a0,an,h,sum;
printf("enter integration limiting points\n");scanf("%f%f",&a0,&an);
printf("enter value of n\n");scanf("%d",&n);
h=(an-a0)/n;
sum=(h/2)*(f(a0)+f(an));
for(i=1;i<=(n-1);i++){
sum+=h*(f(a0+i*h));
printf("sum=%f\n",sum);}
printf("\n\nfor h=%f\tn=%d\tintegration is %f\n",h,n,sum);
}
