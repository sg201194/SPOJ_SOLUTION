#include<stdio.h>
#include<math.h>
long long int mod=4294967296;
long long int t[62]={NULL};
long long int s[62]={NULL};
int main()
{
int test;
int i;
long long n,m,sum=0,k,l,sum1=0,sum2=0;
t[0]=1;
for(i=1;i<62;i++)
t[i]=(t[i-1]*3)&(mod-1);
for(i=0;i<62;i++)
{
sum=(2*(sum)+(long long int)pow(2,i)*t[i]);
sum=sum&(mod-1);
s[i]=sum;
}
scanf("%d",&test);
while(test--)
{
sum1=0;
sum2=0;
scanf("%lld %lld",&n,&m);
k=m;
while(k>0)
{
l=(int)log2(k);
sum1=(sum1+s[l-1])&(mod-1);
k=k-(long long int)pow(2,l);
sum1=(sum1+((k+1)*t[l])&(mod-1))&(mod-1);
}
k=n-1;
while(k>0)
{
l=(int)log2(k);
sum2=(sum2+s[l-1])&(mod-1);
k=k-(long long int)pow(2,l);
sum2=(sum2+((k+1)*t[l])&(mod-1))&(mod-1);
}
sum=(sum1-sum2)&(mod-1);
printf("%lld\n",sum);
}
return 0;
}
