#include<bits/stdc++.h>
#include<list>
using namespace std;
char arr[255][255]={NULL};
bool visited[255][255]={false};
pair<int,int>itr;
int countsh=0;
int countv=0;
int n,m;
void bfs(int i,int j)
{
pair<int,int>l;
l.first=i;
l.second=j;
list<pair<int,int> >queue;
queue.push_back(l);
while(!queue.empty())
{
itr=queue.front();
queue.pop_front();
visited[itr.first][itr.second]=true;
if(itr.second+1<m&&arr[itr.first][itr.second+1]!='#'&&visited[itr.first][itr.second+1]==false)
{
   if(arr[itr.first][itr.second+1]==m-1)
   {
       countsh=0;
       countv=0;
       return;
   }
if(arr[itr.first][itr.second+1]=='k')
    countsh=countsh+1;
if(arr[itr.first][itr.second+1]=='v')
    countv=countv+1;
    l.first=itr.first;
    l.second=itr.second+1;
    visited[l.first][l.second]=true;
queue.push_back(l);
}
if(itr.second-1>=0&&arr[itr.first][itr.second-1]!='#'&&visited[itr.first][itr.second-1]==false)
{
   if(arr[itr.first][itr.second-1]==0)
   {
       countsh=0;
       countv=0;
       return;
   }
if(arr[itr.first][itr.second-1]=='k')
    countsh=countsh+1;
if(arr[itr.first][itr.second-1]=='v')
    countv=countv+1;
    l.first=itr.first;
    l.second=itr.second-1;
    visited[l.first][l.second]=true;
queue.push_back(l);
}
if(itr.first+1<n&&arr[itr.first+1][itr.second]!='#'&&visited[itr.first+1][itr.second]==false)
{
   if(arr[itr.first+1][itr.second]==n-1)
   {
       countsh=0;
       countv=0;
       return;
   }
if(arr[itr.first+1][itr.second]=='k')
    countsh=countsh+1;
if(arr[itr.first+1][itr.second]=='v')
    countv=countv+1;
    l.first=itr.first+1;
    l.second=itr.second;
    visited[l.first][l.second]=true;
queue.push_back(l);
}
if(itr.first-1>=0&&arr[itr.first-1][itr.second]!='#'&&visited[itr.first-1][itr.second]==false)
{
   if(arr[itr.first-1][itr.second]==0)
   {
       countsh=0;
       countv=0;
       return;
   }
if(arr[itr.first-1][itr.second]=='k')
    countsh=countsh+1;
if(arr[itr.first-1][itr.second]=='v')
    countv=countv+1;
    l.first=itr.first-1;
    l.second=itr.second;
    visited[l.first][l.second]=true;
queue.push_back(l);
}
}
return;
}
int main()
{
int totalsh=0,totalv=0,i,j;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
scanf("%s",arr[i]);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
if(arr[i][j]=='#'&&visited[i][j]==false)
  {
     bfs(i,j);
     if(countsh>countv)
        totalsh+=countsh;
     else
        totalv+=countv;
     countsh=0;
     countv=0;
  }
}
printf("%d %d\n",totalsh,totalv);
return 0;
}

