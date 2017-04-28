#include <bits/stdc++.h>

using namespace std;

vector <int> graph[100002];
int resp;

void go(int x, int y, int z){
	int cont=0;

	for(int i=0;i<graph[x].size();i++)
		if(graph[x][i]+x>y){
			go(graph[x][i], graph[x][i]+x, z+1);
			cont++;
		}

	if(!cont && z>resp)
		resp = z;
}

int main(){
	int n, m, a, b;

	scanf("%d %d", &n, &m);

	for(int i=0;i<m;i++){
		scanf("%d %d", &a, &b);

		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for(int i=1;i<n;i++){
		resp = 0;
		go(i,0,1);
		printf("%d ", resp);
	}

    resp = 0;
	go(n,0,1);
	printf("%d\n", resp);

	return 0;
}
