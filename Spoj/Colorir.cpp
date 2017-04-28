#include <bits/stdc++.h>

using namespace std;

int grafo[201][201],c=0;

int n,m,x,y,k;

int main(){
	void bfs(int x,int y);
	
	scanf("%d %d %d %d %d",&n,&m,&x,&y,&k);

	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			grafo[i][j]=1;
	
	for(int i=0,a,b;i<k;i++){
		scanf("%d %d",&a,&b);

		grafo[a][b]=0;
	}

	bfs(x,y);

	printf("%d\n",c);

	return 7;
}

void bfs(int x,int y){
	for(int i=x-1;i<x+2;i++)
		for(int j=y-1;j<y+2;j++)
			if(i>=0 && i<=n)
				if(j>=0 && j<=m)
					if(grafo[i][j]!=0){
						c++;
						grafo[i][j]=0;
						bfs(i,j);
					}
}