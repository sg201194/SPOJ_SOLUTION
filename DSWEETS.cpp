#include<stdio.h>
#include<math.h>
using namespace std;
long long int arr[1000000]={NULL};
int main()
{
int test;
scanf("%d",&test);
long long int s,n,flag=0,i,t,sum2=0;
long long int sum=0;
while(test--)
{
sum=0;
flag=0;
sum2=0;
scanf("%lld %lld",&s,&n);
if(n>s)
    flag=1;
if(s==0||n==0)
    flag=1;
for(i=0;i<n;i++)
{
scanf("%lld",&arr[i]);
if(arr[i]==0)
  t=1;
sum=sum+arr[i];
if(i==n-1)
{
if(sum==0)
t=0;
}
}
if(flag!=1&&t==1)
    flag=1;
if(flag!=1)
{
if(sum!=0)
{
for(i=0;i<n;i++)
sum2+=(arr[i]*s)/sum;
if(sum2!=s)
    flag=1;
}
}
if(flag==1)
    printf("NO\n");
else
    printf("YES\n");
}
return 0;
}
