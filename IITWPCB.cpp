#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
if(b==0)
    return a;
else
    gcd(b,a%b);
}
int main()
{
long long int k,r;
int t;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&k);
r=k/2;
while(gcd(r,k)!=1)
{
r--;
}
printf("%lld\n",r);
}
return 0;
}
