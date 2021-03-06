#include <bits/stdc++.h>

using namespace std;

int n,m,ax[100][100],ok[100][100];

int C(int x, int y){
	int resp = 0;

	for(int i=min(x,y);i<=max(x,y);i++)
		resp = resp^i;

	return resp;
}

void coloca(int x, int y){
	if(x == n-1 && y == m-1)
		return;

	if(x-1>=0){
		int aux = C(ax[x][y], ax[x-1][y]) + ok[x][y];

		if(aux < ok[x-1][y] || ok[x-1][y]==0){
			ok[x-1][y] = aux;

			coloca(x-1,y);
		}		
	}

	if(x+1<n){
		int aux = C(ax[x][y], ax[x+1][y]) + ok[x][y];

		if(aux < ok[x+1][y] || ok[x+1][y]==0){
			ok[x+1][y] = aux;

			coloca(x+1,y);
		}
	}

	if(y-1>=0){
		int aux = C(ax[x][y], ax[x][y-1]) + ok[x][y];

		if(aux < ok[x][y-1] || ok[x][y-1]==0){
			ok[x][y-1] = aux;

			coloca(x,y-1);
		}
	}

	if(y+1<m){
		int aux = C(ax[x][y], ax[x][y+1]) + ok[x][y];

		if(aux < ok[x][y+1] || ok[x][y+1]==0){
			ok[x][y+1] = aux;
		
			coloca(x,y+1);
		}
	}
}

int main(){
	while(scanf("%d %d",&n,&m)!=EOF){
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				scanf("%d",&ax[i][j]);
				ok[i][j]=0;
			}

		coloca(0,0);

		printf("%d\n", ok[n-1][m-1]);
	}

	return 7;
}