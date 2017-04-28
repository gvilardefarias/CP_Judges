#include <bits/stdc++.h>

using namespace std;

int n, d, x[1001], y[1001], visitados[1001], c, v, s;
vector <int> graph[1001];
queue <int> bfs;


double dist(int x1, int y1, int x2, int y2){
	return sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
}

int main(){
	scanf("%d %d", &n, &d);

	for(int i=0;i<n;i++){
		scanf("%d %d", &x[i], &y[i]);

		for(int j=i-1;j>=0;j--){
			if(dist(x[i], y[i], x[j], y[j])<=d){
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}

	for(int i=0;i<n;i++){
		if(!visitados[i]){
			bfs.push(i);

			visitados[i] = 1;

			c++;
		}

		while(!bfs.empty()){
			v = bfs.front();
			s = graph[v].size();

			bfs.pop();

			for(int j=0;j<s;j++){
				if(!visitados[graph[v][j]]){
					visitados[graph[v][j]] = 1;

					bfs.push(graph[v][j]);
				}
			}
		}
	}

	if(c<=1)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}