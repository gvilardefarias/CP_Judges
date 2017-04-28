#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;

	scanf("%d",&t);

	for(int c=0;c<t;c++){
		int n,m,x,y,s=0;
		bool verif=true,verif2=true;

		scanf("%d",&n);
		scanf("%d",&m);

		int visitados[n+1];
		vector <int> arestas[n+1];
		stack <int> DFS;

		visitados[0]=1;

		for(int i=0;i<m;i++){
			scanf("%d %d",&x,&y);

			if(i==0){
				DFS.push(x);
				visitados[x]=1;
				visitados[y]=1;
			}

			arestas[x].push_back(y);
		}

		while(!DFS.empty() && verif){
			int aux;
			aux=DFS.top();
			visitados[aux]=1;

			if(!arestas[aux].empty()){
				DFS.push(arestas[aux].back());
				arestas[aux].pop_back();
				visitados[DFS.top()]=1;
			}

			else{
				if(!DFS.empty())
					DFS.pop();

				if(DFS.empty()){
					bool verif3=true;
					for(int i=1;i<=n && verif3;i++){
						if(!arestas[i].empty()){
							DFS.push(arestas[i].back());
							arestas[i].pop_back();

							visitados[DFS.top()]=1;
							visitados[i]=1;
							verif3=false;
						}
					}

					if(verif3)
						verif=false;
				}
			}
		}

		for(int i=1;i<=n;i++){
			if(visitados[i]!=1){
				s++;
				verif2=false;
			}
		}

		if(verif2)
			printf("Caso #%d: a promessa foi cumprida\n",c+1);
		else
			printf("Caso #%d: ainda falta(m) %d estrada(s)\n",c+1,s);
	}

	return 0;
}
