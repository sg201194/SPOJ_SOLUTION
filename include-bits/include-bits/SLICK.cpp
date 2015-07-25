#include<bits/stdc++.h>
#include<list>
#include<map>
using namespace std;
int count1=0;
int n,m;
int arr[252][252]={NULL};
bool visited[252][252]={false};
pair<int,int>itr;
int bfs(int i,int j)
{
count1=1;
pair<int,int>l;
l.first=i;
l.second=j;
list< pair<int,int> >queue;
queue.push_back(l);
while(!queue.empty())
{
itr=queue.front();
queue.pop_front();
visited[itr.first][itr.second]=true;
if(itr.second+1<m&&arr[itr.first][itr.second+1]==1&&visited[itr.first][itr.second+1]==false)
{
visited[itr.first][itr.second+1]=true;
l.first=itr.first;
l.second=itr.second+1;
count1+=1;
queue.push_back(l);
}
if(itr.second-1>=0&&arr[itr.first][itr.second-1]==1&&visited[itr.first][itr.second-1]==false)
{
visited[itr.first][itr.second-1]=true;
l.first=itr.first;
l.second=itr.second-1;
count1+=1;
queue.push_back(l);
}
if(itr.first+1<n&&arr[itr.first+1][itr.second]==1&&visited[itr.first+1][itr.second]==false)
{
visited[itr.first+1][itr.second]=true;
l.first=itr.first+1;
l.second=itr.second;
count1+=1;
queue.push_back(l);
}
if(itr.first-1>=0&&arr[itr.first-1][itr.second]==1&&visited[itr.first-1][itr.second]==false)
{
visited[itr.first-1][itr.second]=true;
l.first=itr.first-1;
l.second=itr.second;
count1+=1;
queue.push_back(l);
}
}
return count1;
}
int main()
{
int total=0,i,j,sum=0;
map<int ,int>ma;
map<int ,int>:: iterator t;
while(1)
{
ma.clear();
sum=0;
total=0;
scanf("%d %d",&n,&m);
if(n==m&&m==0)
    break;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
scanf("%d",&arr[i][j]);
visited[i][j]=false;
}
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
if(arr[i][j]==1&&visited[i][j]==false)
{
total=bfs(i,j);
ma[total]++;
sum++;
total=0;
}
}
printf("%d\n",sum);
for(t=ma.begin();t!=ma.end();t++)
printf("%d %d\n",t->first,t->second);
}
return 0;
}
