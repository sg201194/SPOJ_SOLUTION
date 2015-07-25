#include<bits/stdc++.h>
using namespace std;
int rec(int i,int b,int t);
int n;
char arr[1002]={NULL};
int dp[1005][2][1005]={NULL};
int main()
{
int test;
scanf("%d",&test);
int b;
while(test--)
{
scanf("%d %d",&n,&b);
scanf("%s",arr);
printf("%d\n",rec(0,b,0));
memset(dp,0,sizeof(dp));
}
return 0;
}
int rec(int i,int b,int t)
{
if(dp[i][t][b]!=0)
    return dp[i][t][b];
if(arr[i]=='E')
    return 1;
    if(arr[i]=='S')
    {
     dp[i][t][b]=min(rec(i+1,b,0),5+rec(i+1,b,1));
    }
    else if(arr[i]=='0'&&t==0)
    {
     dp[i][t][b]=1+min(rec(i+1,b,0),5+rec(i+1,b,1));
    }
    else if(arr[i]=='0'&&t==1)
    {
    dp[i][t][b]=1+min(rec(i+1,b,0),1+rec(i+1,b,1));
    }
    else if(arr[i]=='#'&&(t==0&&b>0))
    {
     dp[i][t][b]=1+min(rec(i+1,b-1,0),5+rec(i+1,b-1,1));
    }
    else if(arr[i]=='#'&&t==1&&b>0)
    {
     dp[i][t][b]=1+min(min(rec(i+1,b-1,0),5+rec(i+1,b-1,1)),1+rec(i+1,b,1));
    }
    else if(arr[i]=='#'&&t==0&&b<=0)
    {
     return 99999;
    }
    else if(arr[i]=='#'&&t==1&&b<=0)
    {
     dp[i][t][b]=2+rec(i+1,b,1);
    }
return dp[i][t][b];
}
