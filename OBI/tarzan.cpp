#include <bits/stdc++.h>

using namespace std;

int n, d, x[1001], y[1001], resp=1;
map <pair <int,int>, vector<pair <int,int> > > graph;
map <pair <int,int>, bool > visitados;

void dfs(int x, int y){
	pair <int, int> aux = make_pair(x, y);

	for(int i=0;i<graph[aux].size();i++)
		if(!visitados[graph[aux][i]]){
			visitados[graph[aux][i]] = true;

			dfs(graph[aux][i].first, graph[aux][i].second);
		}
}

double dist(int x1, int y1, int x2, int y2){
	return sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
}

int main(){
	scanf("%d %d", &n, &d);

	for(int i=0;i<n;i++)
		scanf("%d %d", &x[i], &y[i]);
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(dist(x[i], y[i], x[j], y[j])<=d){
				graph[make_pair(x[i], y[i])].push_back(make_pair(x[j], y[j]));
				graph[make_pair(x[j], y[j])].push_back(make_pair(x[i], y[i]));
			}

	dfs(x[0], y[0]);

	for(int i=0;i<n;i++){
		if(!visitados[make_pair(x[i], y[i])]){
			resp = 0;
			break;
		}
	}

	if(resp)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}