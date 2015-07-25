#include<bits/stdc++.h>
#include<list>
using namespace std;
int h,d,n,m;
pair<int,int>itr;
int arr[100][100]={NULL};
int counter[100][100]={NULL};
int bfs(int i,int j)
{
pair<int,int>l;
l.first=i;
l.second=j;
list< pair<int,int> >queue;
queue.push_back(l);
while(!queue.empty())
{
itr=queue.front();
queue.pop_front();
if(itr.second-1>=0)
{
if(counter[itr.first][itr.second-1]>counter[itr.first][itr.second]+arr[itr.first][itr.second-1])
 { counter[itr.first][itr.second-1]=counter[itr.first][itr.second]+arr[itr.first][itr.second-1];
      l.first=itr.first;
      l.second=itr.second-1;
    queue.push_back(l);
 }
}
if(itr.second+1<m)
{
if(counter[itr.first][itr.second+1]>counter[itr.first][itr.second]+arr[itr.first][itr.second+1])
 { counter[itr.first][itr.second+1]=counter[itr.first][itr.second]+arr[itr.first][itr.second+1];
    l.first=itr.first;
      l.second=itr.second+1;
    queue.push_back(l);
 }
}
if(itr.first-1>=0)
{
if(counter[itr.first-1][itr.second]>counter[itr.first][itr.second]+arr[itr.first-1][itr.second])
 { counter[itr.first-1][itr.second]=counter[itr.first][itr.second]+arr[itr.first-1][itr.second];
    l.first=itr.first-1;
      l.second=itr.second;
    queue.push_back(l);
 }
}
if(itr.first+1<n)
{
if(counter[itr.first+1][itr.second]>counter[itr.first][itr.second]+arr[itr.first+1][itr.second])
 { counter[itr.first+1][itr.second]=counter[itr.first][itr.second]+arr[itr.first+1][itr.second];
   l.first=itr.first+1;
      l.second=itr.second;
    queue.push_back(l);
 }
}
}
return counter[h][d];
}
int main()
{
int test;
int limit,k,i,j;
scanf("%d",&test);
while(test--)
{
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{scanf("%d",&arr[i][j]);
counter[i][j]=INT_MAX;
}
scanf("%d %d %d",&h,&d,&limit);
h=h-1;
d=d-1;
counter[0][0]=arr[0][0];
k=bfs(0,0);
if(k<=limit)
{
printf("YES\n");
printf("%d\n",limit-k);
}
else
printf("NO\n");
}
return 0;
}
