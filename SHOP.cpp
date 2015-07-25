#include<bits/stdc++.h>
#include<list>
using namespace std;
char arr[26][26]={NULL};
int counter[676]={NULL};
int h,w,d;
pair<int,int>l;
pair<int,int>itr;
int bfs(int i,int j)
{
l.first=i;
l.second=j;
counter[i*w+j]=0;
list< pair<int,int> >queue;
int k;
queue.push_back(l);
int c=0;
while(!queue.empty())
{
l=queue.front();
queue.pop_front();
if(arr[l.first][l.second+1]!='X'&&l.second+1<w)
{
itr.first=l.first;
itr.second=l.second+1;
    k=(int)arr[l.first][l.second+1]-48;
    if(arr[l.first][l.second+1]=='D'||arr[l.first][l.second+1]=='S')
             k=0;
    if(counter[l.first*w+l.second+1]>counter[l.first*w+l.second]+k)
     {counter[l.first*w+l.second+1]=counter[l.first*w+l.second]+k;
     queue.push_back(itr);
     }
}
if(arr[l.first][l.second-1]!='X'&&l.second-1>=0)
{
itr.first=l.first;
itr.second=l.second-1;
    k=(int)arr[l.first][l.second-1]-48;
    if(arr[l.first][l.second-1]=='D'||arr[l.first][l.second-1]=='S')
             k=0;
    if(counter[l.first*w+l.second-1]>counter[l.first*w+l.second]+k)
     {counter[l.first*w+l.second-1]=counter[l.first*w+l.second]+k;
     queue.push_back(itr);
     }
}
if(arr[l.first+1][l.second]!='X'&&l.first+1<h)
{
itr.first=l.first+1;
itr.second=l.second;
    k=(int)arr[l.first+1][l.second]-48;
    if(arr[l.first+1][l.second]=='D'||arr[l.first+1][l.second]=='S')
             k=0;
    if(counter[(l.first+1)*w+l.second]>counter[l.first*w+l.second]+k)
     {counter[(l.first+1)*w+l.second]=counter[l.first*w+l.second]+k;
     queue.push_back(itr);
     }
}
if(arr[l.first-1][l.second]!='X'&&l.first-1>=0)
{
itr.first=l.first-1;
itr.second=l.second;
    k=(int)arr[l.first-1][l.second]-48;
    if(arr[l.first-1][l.second]=='D'||arr[l.first-1][l.second]=='S')
             k=0;
    if(counter[(l.first-1)*w+l.second]>counter[l.first*w+l.second]+k)
     {counter[(l.first-1)*w+l.second]=counter[l.first*w+l.second]+k;
     queue.push_back(itr);
     }
}
}
return counter[d];
}
int main()
{
int i,j,k,l,flag=0;
while(1)
{
scanf("%d %d",&w,&h);
if(w==h&&h==0)
    break;
for(i=0;i<h;i++)
    scanf("%s",arr[i]);
for(i=0;i<h;i++)
{for(j=0;j<w;j++)
{
if(arr[i][j]=='S')
    l=i,k=j;
if(arr[i][j]=='D')
    d=i*w+j;
counter[i*w+j]=INT_MAX;

}
}
printf("%d\n",bfs(l,k));
}
return 0;
}
