#include <bits/stdc++.h>

using namespace std;

bool bo(int x,int y){

	return x>y;
}

int main(){
	int n,m,x[2000][2000],mk=0,md=1000,d[2000];

	scanf("%d %d",&n,&m);

	for(int i=0,d,k;i<n;i++){
		scanf("%d %d",&d,&k);

		if(d<md)
			md=d;

		for(int j=1;j<=k;j++){
			x[i][d*j]=1;
			
			if(d*j>m)
				m=d*j;
		}
	}

	for(int i=md;i<=mk;i++){
		for(int j=0;j<n;j++){
			if(x[j][i]==1)
				d[i]++;
		}
	}

	sort(d+md,d+mk+1,bo);

	for(int i=0;i<m;i++)
		printf("%d\n",d[i]);

	return 7;
}