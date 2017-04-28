#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int n, m, s[11][11], x, y, dist[11][11], resp;

queue <pair <int,int> > bfs; 

int main(){
	scanf("%d %d", &n, &m);

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			scanf("%d", &s[i][j]);

			if(s[i][j]==3)
				bfs.push(make_pair(i,j));
		}

	while(!bfs.empty()){		
		x = bfs.front().first;
		y = bfs.front().second;

		bfs.pop();

		if(s[x][y]==0){
			resp = dist[x][y];
			break;
		}

		for(int i=x-1;i<=x+1;i+=2)
			if(i>=0 && i<n && i!=x)
				if(s[i][y]!=2 && s[i][y]!=3){
					bfs.push(make_pair(i,y));
					dist[i][y] = dist[x][y]+1;
				}

		for(int i=y-1;i<=y+1;i+=2)
			if(i>=0 && i<m && i!=y)
				if(s[x][i]!=2 && s[x][i]!=3){
					bfs.push(make_pair(x,i));
					dist[x][i] = dist[x][y]+1;
				}
	}

	printf("%d\n", resp);

	return 0;
}