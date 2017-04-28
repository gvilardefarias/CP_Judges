#include <bits/stdc++.h>

using namespace std;

int n, grau[32], aux, cont=1;
bool foi;

vector <int> graph[32];
vector <int> lista;

int main(){
	scanf("%d", &n);

	while(n){
		foi = true;

		map <string, int> dict;
		map <int, string> dictI;

		printf("Teste %d\n", cont);

		for(int i=0;i<n;i++){
			char nome[20];

			scanf(" %s", nome);

			dict[nome] = i;
			dictI[i] = nome;
		}

		for(int i=0;i<n;i++){
			char nome[20], nome2[20];

			scanf("\n%s %d", nome, &aux);

			grau[dict[nome]] += aux;

			for(int j=0;j<aux;j++){
				scanf(" %s", nome2);

				graph[dict[nome2]].push_back(dict[nome]);
			}
		}

		for(int i=0;i<n;i++){
			if(!grau[i]){
				lista.push_back(i);
				printf("%s ", dictI[i].c_str());
				//foi = true;
			}
		}

		while(!lista.empty()){
			aux = lista.back();
			lista.pop_back();

			for(int i=0;i<graph[aux].size();i++){
				grau[graph[aux][i]]--;

				if(!grau[graph[aux][i]]){
					lista.push_back(graph[aux][i]);
					printf("%s ", dictI[graph[aux][i]].c_str());
					//foi = true;
				}
			}
		}

		for(int i=0;i<n;i++){
			if(grau[i])
				foi = false;
			grau[i] = 0;
		}
		
		if(!foi)
			printf("impossivel");

		printf("\n\n");
		scanf("%d", &n);

		cont++;
	}

	return 0;
}