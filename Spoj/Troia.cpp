#include <bits/stdc++.h>

using namespace std;

int n,visitados[100000];
vector <int> grafo[1000000];

void bfs(int x){
	
	for(int i=0;i<grafo[x].size();i++){
		int aux=grafo[x][i];

		if(visitados[aux]==0){
			visitados[aux]=1;
			bfs(aux);
		}
	}

}

int main(){
	int m,c=0;

	scanf("%d %d",&n,&m);

	for(int i=0;i<=n;i++)
		visitados[i]=0;

	for(int i=0,x,y;i<m;i++){
		scanf("%d %d",&x,&y);

		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}

	for(int i=1;i<=n;i++){
		if(visitados[i]==0){
			bfs(i);
			c++;
		}
	}

	printf("%d\n",c);

	return 7;
}