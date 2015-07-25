#include<stdio.h>
int arr[100000]={NULL};
int main()
{
int test;
scanf("%d",&test);
long long int n,m,l,max,count,sum=0,sum2=0,i;
while(test--)
{
max=0;
count=0;
l=0;
sum=0;
sum2=0;
scanf("%lld %lld",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
if(m>=sum)
count++;
else
{
if(max<count)
{
    max=count;
    sum2=sum-arr[i];
}
else if(max==count&&sum2>sum-arr[i])
{
max=count;
sum2=sum-arr[i];
}
while(sum>m&&l!=i)
{
sum=sum-arr[l++];
if(count>0)
    count--;
}
if(sum<=m)
    count++;
}
}
if(max<count)
{
    max=count;
    sum2=sum;
}
else if(max==count&&sum2>sum)
{
max=count;
sum2=sum;
}
printf("%lld %lld\n",sum2,max);
}
return 0;
}

