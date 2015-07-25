#include<bits/stdc++.h>
#include<list>
using namespace std;
pair<int,int>itr;
pair<int,int>start;
pair<int,int>end;
int n,m;
char arr[25][25]={NULL};
int visited[25][25]={NULL};
int bfs(int i,int j)
{
int count1=0;
visited[i][j]=true;
pair<int,int>l;
l.first=i;
l.second=j;
list< pair<int,int> >queue;
queue.push_back(l);
while(!queue.empty())
{
count1=0;
itr=queue.front();
queue.pop_front();
visited[itr.first][itr.second]=true;
if(itr.second+1<=n-1&&arr[itr.first][itr.second+1]=='.'&&visited[itr.first][itr.second+1]==false)
{
visited[itr.first][itr.second+1]=true;
count1++;
l.first=itr.first;
l.second=itr.second+1;
queue.push_back(l);
}
if(itr.second-1>=0&&arr[itr.first][itr.second-1]=='.'&&visited[itr.first][itr.second-1]==false)
{
visited[itr.first][itr.second-1]=true;
count1++;
l.first=itr.first;
l.second=itr.second-1;
queue.push_back(l);
}
if(itr.first+1<=m-1&&arr[itr.first+1][itr.second]=='.'&&visited[itr.first+1][itr.second]==false)
{
visited[itr.first+1][itr.second]=true;
count1++;
l.first=itr.first+1;
l.second=itr.second;
queue.push_back(l);
}
if(itr.first-1>=0&&arr[itr.first-1][itr.second]=='.'&&visited[itr.first-1][itr.second]==false)
{
visited[itr.first-1][itr.second]=true;
count1++;
l.first=itr.first-1;
l.second=itr.second;
queue.push_back(l);
}
if(itr.first==end.first&&itr.second==end.second)
         return 1;
    }
return 0;
}
int main()
{
int test;
scanf("%d",&test);
while(test--)
{
int count=0,i,j,k=0;
scanf("%d %d",&m,&n);
for(i=0;i<m;i++)
scanf("%s",arr[i]);
list< pair<int,int> >q;
memset(visited,false,sizeof(visited));
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
if(arr[i][j]=='.'&&i==0)
{
    itr.first=i;
    itr.second=j;
    q.push_back(itr);
    count++;
}
else if(arr[i][j]=='.'&&i==m-1)
{
    itr.first=i;
    itr.second=j;
    q.push_back(itr);
    count++;
}
else if(arr[i][j]=='.'&&j==0)
{
    itr.first=i;
    itr.second=j;
    q.push_back(itr);
    count++;
}
else if(arr[i][j]=='.'&&j==n-1)
{
    itr.first=i;
    itr.second=j;
    q.push_back(itr);
    count++;
}
}
if(count!=2)
printf("invalid\n");
else
{
start=q.front();
q.pop_front();
end=q.front();
q.pop_front();
k=bfs(start.first,start.second);
if(k==1)
    printf("valid\n");
else
    printf("invalid\n");
}
}
return 0;
}
