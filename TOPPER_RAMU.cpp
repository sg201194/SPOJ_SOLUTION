#include<stdio.h>
#include<math.h>
int main()
{
int test;
scanf("%d",&test);
long long int n,k,odd=2,even=0;
while(test--)
{
odd=2;
even=0;
scanf("%lld",&n);
if(n==0)
{
printf("0 1\n");
continue;
}
k=n;
while(k!=pow(2,(int)log2(k)))
{
odd=odd*2;
k=k-pow(2,(int)log2(k));
}
even=n+1-odd;
printf("%lld %lld\n",even,odd);
}
return 0;
}
