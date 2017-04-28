#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;

	scanf("%d %d",&n,&m);a

	while(n!=0 && m!=0){
		vector <int> grafo[n+1];
		queue <int> fila;

		int visitados[n+1];

		for(int i=0;i<=n;i++){
			visitados[i]=0;
		}

		for(int c=0;c<m;c++){
			int v,w,p;

			scanf("%d %d %d",&v,&w,&p);
			if(c==0){
				visitados[v]=1;
				fila.push(v);
			}

			if(p==1){
				grafo[v].push_back(w);
			}
			else{
				grafo[v].push_back(w);
				grafo[w].push_back(v);
			}
		}

		while(!fila.empty()){
			int aux;

			aux=fila.front();

			while(!grafo[aux].empty()){
				fila.push(grafo[aux].back());
				visitados[grafo[aux].back()]=1;
				grafo[aux].pop_back();
			}
			if(grafo[aux].empty())
				fila.pop();
		}

		bool verif=true;

		for(int i=1;i<=n && verif;i++){
			if(visitados[i]==0)
				verif=false;
		}
		if(verif)
			printf("1\n");
		else
			printf("0\n");

		scanf("%d %d",&n,&m);
	}

	return 0;
}
