#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int arr[102]={NULL};
int main()
{
int test;
scanf("%d",&test);
int n,count=0,num,i,l=0;
while(test--)
{
count=0;l=0;
scanf("%d",&n);
map<int,int>m;
m.clear();
for(i=0;i<n;i++)
{
scanf("%d",&num);
arr[i]=num;
m[num]++;
}
sort(arr,arr+n);
for(i=0;i<n;i++)
{
l=min(m[arr[i]],m[2*arr[i]]);
m[arr[i]]-=l;
m[2*arr[i]]-=l;
count=count+l;
}
printf("%d\n",count);
}
return 0;
}
