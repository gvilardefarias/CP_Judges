#include <bits/stdc++.h>

using namespace std;

int c, e, l, p, dist[51], x, y, aux, s, cont;


int main(){
	scanf("%d %d %d %d", &c, &e, &l, &p);

	while(c!=0 || e!=0 || l!=0 || p!=0){
		vector <int> graph[51];
		queue <int> bfs;

		cont++;

		for(int i=1;i<=e;i++){
			scanf("%d %d", &x, &y);

			graph[x].push_back(y);
			graph[y].push_back(x);
		}

		for(int i=1;i<=c;i++)			
			dist[i] = 0;		

		bfs.push(l);

		while(!bfs.empty()){
			aux = bfs.front();
			bfs.pop();
			s = graph[aux].size();

			for(int i=0;i<s;i++){
				if(!dist[graph[aux][i]]){
					dist[graph[aux][i]] = dist[aux] + 1;
					bfs.push(graph[aux][i]);
				}
			}
		}

		printf("Teste %d\n", cont);

		for(int i=1;i<=c;i++){
			if(dist[i]<=p && dist[i] && i!=l){
				if(i!=1)
					printf(" %d", i);
				else
					printf("%d", i);
			}
		}

		printf("\n\n");

		scanf("%d %d %d %d", &c, &e, &l, &p);
	}

	return 0;
}