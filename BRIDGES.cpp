#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define pii pair<int,int>
bool operator <(const pii &p1,const pii &p2)
{
    if(p1.first< p2.first)
        return true;
    if(p1.first == p2.first)
        return p1.second <p2.second;
    return false;
}
int main()
{
int test;
scanf("%d",&test);
int lis[1010]={NULL};
pair<int,int>p[1010];
while(test--)
{
int i,n,j,count=1;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&p[i].first);
}
for(int i=0;i<n;i++)
{
scanf("%d",&p[i].second);
}
sort(p,p+n);
for(i=0;i<n;i++)
    lis[i]=1;
for(i=1;i<n;i++)
for(j=0;j<i;j++)
{
if(p[j].second<=p[i].second)
        {lis[i]=max(lis[i],(lis[j]+1));
           if(count<lis[i])
            count=lis[i];
        }
}
printf("%d\n",count);
}
return 0;
}
