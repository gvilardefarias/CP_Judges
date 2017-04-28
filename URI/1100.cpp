#include <bits/stdc++.h>

using namespace std;

int x, x2, y, y2, xR, yR, resp, dist[10][10];

int main(){
	char c1, c2;

	while(scanf("\n%c%d %c%d",&c1, &y, &c2, &yR)!=EOF){
		for(int i=0;i<=9;i++)
			for(int j=0;j<=9;j++)
				dist[i][j] = 0;

		resp = 0;
		
		queue <pair <int,int> > bfs;

		x = ((int) c1)-96;
		xR = ((int) c2)-96;

		bfs.push(make_pair(x,y));

		while(!bfs.empty()){
			x2 = bfs.front().first;
			y2 = bfs.front().second;
			bfs.pop();

			if(x2<1 || x2>8 || y2<1 || y2>8)
				continue;
			if(x2==xR && y2==yR){
				resp = dist[x2][y2];
				break;
			}

			if(!dist[x2+2][y2+1]){
				bfs.push(make_pair(x2+2,y2+1));
				dist[x2+2][y2+1] = dist[x2][y2]+1;
			}

			if(!dist[x2+2][y2-1]){
				bfs.push(make_pair(x2+2,y2-1));
				dist[x2+2][y2-1] = dist[x2][y2]+1;
			}

			if(!dist[x2-2][y2+1]){
				bfs.push(make_pair(x2-2,y2+1));
				dist[x2-2][y2+1] = dist[x2][y2]+1;
			}

			if(!dist[x2-2][y2-1]){
				bfs.push(make_pair(x2-2,y2-1));
				dist[x2-2][y2-1] = dist[x2][y2]+1;
			}

			if(!dist[x2+1][y2+2]){
				bfs.push(make_pair(x2+1,y2+2));
				dist[x2+1][y2+2] = dist[x2][y2]+1;
			}

			if(!dist[x2+1][y2-2]){
				bfs.push(make_pair(x2+1,y2-2));
				dist[x2+1][y2-2] = dist[x2][y2]+1;
			}

			if(!dist[x2-1][y2+2]){
				bfs.push(make_pair(x2-1,y2+2));
				dist[x2-1][y2+2] = dist[x2][y2]+1;
			}

			if(!dist[x2-1][y2-2]){
				bfs.push(make_pair(x2-1,y2-2));
				dist[x2-1][y2-2] = dist[x2][y2]+1;
			}
		}

		printf("To get from %c%d to %c%d takes %d knight moves.\n", c1, y, c2, yR, resp);
	}

	return 0;
}