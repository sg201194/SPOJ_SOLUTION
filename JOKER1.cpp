#include<stdio.h>
#include<algorithm>
using namespace std;
long int mod=1000000007;
int arr[68]={NULL};
int main()
{
int test;
long long int s=1,i;
int n,l=0;
scanf("%d",&test);
while(test--)
{
s=1;
l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
sort(arr,arr+n);
for(i=0;i<n;i++)
{
s=(s*(arr[i]-l))%(mod);
l++;
}
printf("%lld\n",s);
}
printf("KILL BATMAN\n");
return 0;
}
