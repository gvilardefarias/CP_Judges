#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cont=0;
	vector < pair<int,int> > pontos;
	pair <int,int> aux;

	scanf("%d", &n);

	for(int i=0;i<n;i++){
		scanf("%d %d", &aux.first, &aux.second);

		pontos.push_back(aux);
	}

	sort(pontos.begin(),pontos.end());

	for(int i=0;i<pontos.size()-1;i++)
		if(pontos[i].first==pontos[i+1].first || pontos[i].second==pontos[i+1].second)
			cont++;	

	printf("%d\n", cont);

	return 0;
}