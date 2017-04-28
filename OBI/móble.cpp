#include <bits/stdc++.h>

using namespace std;

int n, x, y, ant, peso[10002];
bool resp;
vector <int> graph[10002];

int atuPai(int x){
	peso[x] += graph[x].size();

	for(int i=0;i<graph[x].size();i++)
		peso[x] += atuPai(graph[x][i]);

	return peso[x];
}

int main(){
	scanf("%d", &n);

	for(int i=0;i<n;i++){
		scanf("%d %d", &x, &y);

		graph[y].push_back(x);
	}

	atuPai(0);

	for(int i=0;i<=n;i++){
		resp = true;
		ant = -1;

		for(int j=0;j<graph[i].size();j++){
			if(ant==-1){
				ant = peso[graph[i][j]];
				continue;
			}

			if(ant!=peso[graph[i][j]]){
				resp = false;
				break;
			}
		}

		if(!resp)
			break;
	}

	if(resp)
		printf("bem\n");
	else
		printf("mal\n");

	return 0;
}