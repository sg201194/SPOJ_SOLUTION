#include<stdio.h>
int main()
{
long long int n,k,r,sum=0;
int arr[10];
for(int i=0;i<10;i++)
arr[i]=i+i*(i-1);
while(scanf("%lld",&n)!=EOF)
{
k=n/9;
r=n%9;
sum=k*arr[9]+arr[r];
printf("%lld\n",sum);
}
return 0;
}

