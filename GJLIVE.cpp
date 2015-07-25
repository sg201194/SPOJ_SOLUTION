#include<stdio.h>
int main()
{
int arr[10],sum1=0,sum2=0,k=0,i=0;
for(i=0;i<10;i++)
{scanf("%d",&arr[i]);
if(sum1+arr[i]<100&&k==i)
{sum1=sum1+arr[i];
k=i+1;
}
}
if(k!=10)
sum2=sum1+arr[k];
else
    sum2=sum1;

if((sum2-100)>(100-sum1))
    printf("%d\n",sum1);
else
    printf("%d\n",sum2);
    return 0;
}
