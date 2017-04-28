#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c=0,m=0,co=0;

	scanf("%d",&n);

	int capitais[n+1],visitados[n+1];
	vector <int> x[n+1];
	stack <int> bfs;

	for(int i=1;i<n;i++){
		int u,v;

		scanf("%d %d",&u,&v);

		x[u].push_back(v);
		x[v].push_back(u);
	}

	for(int i=1;i<=n;i++){
		if(x[i].size()==1){
			capitais[i]=1;
			bfs.push(i);
			co++;
		}
			
	}
	int i=0;

	while(!bfs.empty()){
		int aux=bfs.top();

		if(!x[aux].empty() && visitados[aux]!=1){
			bfs.push(x[aux].back());
			x[aux].pop_back();
			visitados[bfs.top()]=1;
			c++;
			
			if(capitais[bfs.top()]>=1){
				if((c<m && c>0) || i==0)
					m=c;
				i++;
				c=0;
			}
		}
		else{
			c--;
			bfs.pop();
		}
		if(i==co){
			for(int j=1;j<=n;j++)
				visitados[j]=0;
		}
	}

	printf("%d\n",m);

	return 0;
}