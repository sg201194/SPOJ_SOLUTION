#include <stdio.h>
#include <list>
using namespace std;
#define MAX 10001

int N, E;
list< int > G[MAX];
bool flag[MAX];
int pre[MAX];

bool bfs(int s)
{
	int i, u, v, sz;
	list< int > q;
	list< int >::iterator itr;
	q.push_back(s);
	flag[s] = 1;
	while(!q.empty())
	{
		u = q.front();
		q.pop_front();
		for(itr=G[u].begin();itr!=G[u].end(); itr++)
		{
			v = *itr;
			if(pre[u] != v && flag[v]) return false;
			else if(!flag[v])
			{
				pre[v] = u;
				flag[v] = 1;
				q.push_back(v);
			}
		}
	}
	for(i=1; i<=N; i++)
		if(!flag[i])
			return false;
	return true;
}

int main()
{
	int i, u, v, s;
	scanf("%d %d", &N, &E);
	for(i=0; i<E; i++)
	{
		scanf("%d %d", &u, &v);
		s = u;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	if(E!=N-1) printf("NO\n");
	else
	{
		if(bfs(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
