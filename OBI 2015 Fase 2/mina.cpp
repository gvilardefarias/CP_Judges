#include <bits/stdc++.h>

using namespace std;

int n, matriz[110][110], visit[110][110];

priority_queue <pair <int, pair <int, int> > > dsj;

int djs(){
	int x, y, p;

	x = dsj.top().second.first;
	y = dsj.top().second.second;
	p = -dsj.top().first;

	dsj.pop();

	if(x==n-1 && y==n-1)
		return p;

	if(visit[x][y])
		return djs();

	visit[x][y] = 1;

	if(x-1>=0)
		dsj.push(make_pair(-(matriz[x-1][y]+p), make_pair(x-1,y)));
	if(x+1<n)
		dsj.push(make_pair(-(matriz[x+1][y]+p), make_pair(x+1,y)));
	if(y-1>=0)
		dsj.push(make_pair(-(matriz[x][y-1]+p), make_pair(x,y-1)));
	if(y+1<n)
		dsj.push(make_pair(-(matriz[x][y+1]+p), make_pair(x,y+1)));

	return djs();
}

int main(){
	scanf("%d", &n);

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &matriz[i][j]);

	dsj.push(make_pair(-matriz[0][0], make_pair(0,0)));

	printf("%d\n", djs());

	return 0;
}