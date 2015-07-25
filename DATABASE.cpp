#include<stdio.h>
#include<map>
using namespace std;
int main()
{
int n,r,i,s,c,flag=0;
long int id;
int test,t;
scanf("%d",&test);
t=test;
map<long int,long int>m;
while(test--)
{
flag=0;
m.clear();
scanf("%d %d",&n,&r);
for(i=0;i<r;i++)
{
scanf("%d %d",&s,&c);
id=s*10000+c;
if(flag==0)
{
m[id]++;
if(m[id]>1)
    flag=1;
}
}
if(flag==1)
    printf("Scenario #%d: impossible\n",t-test);
else
    printf("Scenario #%d: possible\n",t-test);
}
return 0;
}
