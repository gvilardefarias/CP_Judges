#include <bits/stdc++.h>

using namespace std;

int n, m, matriz[105][105], contNav, visit[105][105], k, a, b, resp;
bool aux;
char auxC;
vector <pair <int, int> > barcos[2500];

void dfs(int i, int j){
	visit[i][j] = 1;
	barcos[contNav].push_back(make_pair(i, j));
	
	if(i-1>=0)
		if(matriz[i-1][j] && !visit[i-1][j])
			dfs(i-1, j);
	if(i+1<n)
		if(matriz[i+1][j] && !visit[i+1][j])
			dfs(i+1, j);
	if(j-1>=0)
		if(matriz[i][j-1] && !visit[i][j-1])
			dfs(i, j-1);
	if(j+1<m)
		if(matriz[i][j+1] && !visit[i][j+1])
			dfs(i, j+1);
}

int main(){
	scanf("%d %d ", &n, &m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%c", &auxC);
			
			if(auxC=='#')
				matriz[i][j]++;	
		}

		scanf("%c", &auxC);
	}

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(!visit[i][j] && matriz[i][j]){
				dfs(i, j);
				contNav++;
			}
	
	scanf("%d", &k);
	
	for(int i=0;i<k;i++){
		scanf("%d %d", &a, &b);
		
		visit[a-1][b-1] = 2;
	}
	
	for(int i=0;i<contNav;i++){
		aux = true;
		
		for(int j=0;j<barcos[i].size();j++){
			a = barcos[i][j].first;
			b = barcos[i][j].second;
			
			if(visit[a][b]!=2){
				aux = false;
				break;
			}
		}
		
		if(aux)
			resp++;
	}
	
	printf("%d\n", resp);
	
	return 0;
}