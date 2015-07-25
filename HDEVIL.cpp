#include<stdio.h>
#include<math.h>
int main()
{
int test,t;
scanf("%d",&test);
t=test;
long int a,b,count=0,sum=0,l1,l2,s1,s2;
while(test--)
{
count=0;
sum=0;
scanf("%ld %ld",&a,&b);

for(int i=1;i<=sqrt(a);i++)
{
if(a%i==0)
   {sum=sum+i;
   }
if((i*i!=a&&i!=1)&& (a%(a/i))==0)
   {
      sum=sum+(a/i);
   }
}
sum=sum%b;
for(int i=1;i<=sqrt(sum);i++)
{
if(sum%i==0)
   {count++;
   }
if((i*i!=sum&&i!=1)&& (sum%(sum/i))==0)
   {
      count++;
   }
}
l1=(5*count*count)+4;
l2=(5*count*count)-4;
s1=sqrt(l1);
s2=sqrt(l2);
if((s1*s1==l1)||(s2*s2==l2))
    printf("Case #%d : YES.\n",t-test);
    else
        printf("Case #%d : NO.\n",t-test);
}
return 0;
}
