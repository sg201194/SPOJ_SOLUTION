#include<stdio.h>
#include<math.h>
long long int mod=1000000007;
long long int count1[40]={NULL};
long long int fib[10000001]={NULL};
long long int nonfib[10000001]={NULL};
long long  int z=1,i=2,j=1,n,l=0,k=1,t=1,r,ans=1;
int main()
{
fib[1]=1;
while(i!=10000001)
{
fib[i]=fib[i-1]+fib[i-2];
if(j<10000001)
while(t<fib[i])
{
if(j==10000001)
    break;
nonfib[j++]=t++;
}
t=fib[i]+1;
fib[i]=fib[i]%mod;
i++;
}
int test;
long long int h;
scanf("%d",&test);
while(test--)
{
scanf("%lld",&n);
k=nonfib[n]%mod;
t=nonfib[n]%mod;
i=1;
l=0;
//count[i]=k;
while(i<=fib[n])
{
count1[l]=k;
i=i*2;
k=(k*k)%mod;
l++;
}
k=fib[n];
ans=1;
while((long long int)log2(k)>=0)
{
ans=(ans*count1[(long long int)log2(k)])%mod;
k=k-(long long int )pow(2,(long long int)log2(k));
}
printf("%lld\n",ans);
}
return 0;
}
