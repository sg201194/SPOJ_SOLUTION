#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[100002]={NULL};
int main()
{
int test;
scanf("%d",&test);
int n,t,count=0,i,j,first,last,middle,k;
while(test--)
{
count=0;
scanf("%d %d",&n,&t);
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
sort(arr,arr+n);
for(i=0;i<n;i++)
{
k=t-arr[i];
first=i+1;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(arr[middle]<k)
    first=middle+1;
else if(arr[middle]>k)
    last=middle-1;
else if(arr[middle]==k)
    break;
middle=(first+last)/2;
}
if(first<=last)
count++;
}
printf("%d\n",count);
}
return 0;
}
