#include <bits/stdc++.h>

using namespace std;

int n, ult, visit[10001], aux, s, m, dist[10001];
vector <int> tree[10001];
queue <int> bfs;
queue <int> bfs2;

int main(){
	scanf("%d", &n);

	for(int i=0, a, b;i<n-1;i++){
		scanf("%d %d", &a, &b);

		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	for(int i=1;i<=n;i++)
		if(tree[i].size()){
			bfs.push(i);
			break;
		}

	while(!bfs.empty()){
		aux = bfs.front();
		s = tree[aux].size();
		ult = aux;

		bfs.pop();

		for(int i=0;i<s;i++){
			if(!visit[tree[aux][i]]){
				bfs.push(tree[aux][i]);

				visit[tree[aux][i]] = 1;
			}			
		}
	}

	bfs2.push(ult);

	while(!bfs2.empty()){
		aux = bfs2.front();
		s = tree[aux].size();

		bfs2.pop();

		for(int i=0;i<s;i++){
			if(!dist[tree[aux][i]]){
				bfs2.push(tree[aux][i]);

				dist[tree[aux][i]] = dist[aux] + 1;

				if(dist[tree[aux][i]]>m)
					m = dist[tree[aux][i]];
			}			
		}
	}

	printf("%d\n", m);

	return 0;
}