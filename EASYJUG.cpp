#include<stdio.h>
long int gcd(long int a,long int b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
int test;
long int a,b,c,flag=0;
scanf("%d",&test);
while(test--)
{
flag=0;
scanf("%ld %ld %ld",&a,&b,&c);
if(a<=b)
{
if(c>b)
    flag=1;
}
if(b<a)
{
    if(c>a)
    flag=1;
}
if(c%gcd(a,b)!=0)
    flag=1;
if(flag==1)
    printf("NO\n");
else
    printf("YES\n");
}
return 0;
}
