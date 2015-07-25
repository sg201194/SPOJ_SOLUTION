#include<stdio.h>
int main()
{
int n,k;
while(1)
{
scanf("%d",&n);
if(n==0)
    break;
k=5+((3*(n)*(n-1))/2)+4*(n-1);
printf("%d\n",k);
}
return 0;
}
