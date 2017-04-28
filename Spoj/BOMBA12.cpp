#include <bits/stdc++.h>

using namespace std;

int n, e, s, m, sem[501][501], aux, si, visit[501][501][3], te, resp;
bool go;

vector <int> graph[501];
queue <pair <int,int> > bfs;

int main(){
	scanf("%d %d %d %d", &n, &e, &s, &m);

	bfs.push(make_pair(e,0));

	for(int i=0, a, b, t;i<m;i++){
		scanf("%d %d %d", &a, &b, &t);

		graph[a].push_back(b);
		graph[b].push_back(a);

		if(sem[a][b] || sem[b][a]){
			sem[a][b] = 3;
			sem[b][a] = 3;
		}
		else{
			if(t==0){
				sem[a][b] = 1;
				sem[b][a] = 1;
			}
			else
				if(t==1){
					sem[a][b] = 2;
					sem[b][a] = 2;
				}
		}
	}

	while(!bfs.empty()){
		aux = bfs.front().first;
		te = bfs.front().second;

		if(aux==s){
			printf("%d\n", te);
			go = true;
			break;
		}

		si = graph[aux].size();

		bfs.pop();

		for(int i=0;i<si;i++){
			if(!visit[aux][graph[aux][i]][te%3]){	
				if(sem[aux][graph[aux][i]]==3){
					bfs.push(make_pair(graph[aux][i],te+1));
					visit[aux][graph[aux][i]][0] = 1;
					visit[aux][graph[aux][i]][1] = 1;
					visit[aux][graph[aux][i]][2] = 1;
				}
				else{
					if(sem[aux][graph[aux][i]]==2 && te%3==0){
						bfs.push(make_pair(graph[aux][i],te+1));
						visit[aux][graph[aux][i]][te%3] = 1;
					}
					else
						if(sem[aux][graph[aux][i]]==1 && te%3!=0){
							bfs.push(make_pair(graph[aux][i],te+1));
							visit[aux][graph[aux][i]][te%3] = 1;
						}
				}
			}
		}
	}

	if(!go)
		printf("*\n");

	return 0;
}