#include<stdio.h>
int main()
{
int test;
scanf("%d",&test);
long int n;
double result;
while(test--)
{
scanf("%ld",&n);
result=(3.0/4.0)+(1.0/2.0)*((1.0/(n+2))-(1.0/(n+1)));
printf("%.11f\n",result);
}
return 0;
}
