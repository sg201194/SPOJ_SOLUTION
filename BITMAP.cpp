#include<bits/stdc++.h>
#include<list>
using namespace std;
pair<int,int>itr;
char arr[185][185]={NULL};
int counter[185][185]={NULL};
bool visited[185][185]={NULL};
list< pair<int,int> >queue1;
int n,m;
void bfs()
{
pair<int,int>l;
while(!queue1.empty())
{
itr=queue1.front();
queue1.pop_front();
visited[itr.first][itr.second]=true;
if(itr.second-1>=0&&visited[itr.first][itr.second-1]==false)
{
if(counter[itr.first][itr.second-1]>counter[itr.first][itr.second])
{
    counter[itr.first][itr.second-1]=counter[itr.first][itr.second]+1;
    l.first=itr.first;
    l.second=itr.second-1;
    queue1.push_back(l);
   visited[itr.first][itr.second-1]=true;
}
}
if(itr.second+1<m&&visited[itr.first][itr.second+1]==false)
{
if(counter[itr.first][itr.second+1]>counter[itr.first][itr.second])
{
    counter[itr.first][itr.second+1]=counter[itr.first][itr.second]+1;
    l.first=itr.first;
    l.second=itr.second+1;
    queue1.push_back(l);
    visited[itr.first][itr.second+1]=true;
}
}
if(itr.first-1>=0&&visited[itr.first-1][itr.second]==false)
{
if(counter[itr.first-1][itr.second]>counter[itr.first][itr.second])
{
    counter[itr.first-1][itr.second]=counter[itr.first][itr.second]+1;
    l.first=itr.first-1;
    l.second=itr.second;
    queue1.push_back(l);
    visited[itr.first-1][itr.second]=true;
}
}
if(itr.first+1<n&&visited[itr.first+1][itr.second]==false)
{
if(counter[itr.first+1][itr.second]>counter[itr.first][itr.second])
{
    counter[itr.first+1][itr.second]=counter[itr.first][itr.second]+1;
    l.first=itr.first+1;
    l.second=itr.second;
    queue1.push_back(l);
    visited[itr.first+1][itr.second]=true;
}
}
}
return;
}
int main()
{
int i,j,l=-1,k=0,test;
scanf("%d",&test);
while(test--)
{
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
scanf("%s",arr[i]);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
visited[i][j]=false;
if(arr[i][j]=='1')
{
counter[i][j]=0;
itr.first=i;
itr.second=j;
queue1.push_back(itr);
}
else
{counter[i][j]=INT_MAX;
k++;
}
}
bfs();
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d ",counter[i][j]);
}
printf("\n");
}
}
return 0;
}
