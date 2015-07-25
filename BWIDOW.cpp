#include<stdio.h>
long int inner[1002]={NULL};
long int outer[1002]={NULL};
int main()
{
int test;
int n,flag=0,i,max=0,s=0,l;
scanf("%d",&test);
while(test--)
{
flag=0;
max=0;s=0;
l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%lld %lld",&inner[i],&outer[i]);
    if(outer[i]<=inner[i])
        flag=1;
    if(max<inner[i])
    {
    max=inner[i];
    s=outer[i];
    l=i;
    }
}
if(flag!=1)
{
for(i=0;i<n;i++)
{
if(i!=l)
if(max-outer[i]<0)
    flag=1;
}
}
if(flag==1)
    printf("-1\n");
else
    printf("%d\n",l+1);
}
return 0;
}
