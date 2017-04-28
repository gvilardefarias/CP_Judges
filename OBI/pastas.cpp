#include <bits/stdc++.h>

using namespace std;

int p, n, aux, ant, cont[1005];
bool resp = true, baixo=false;

int main(){
	scanf("%d %d", &p, &n);

	for(int i=0;i<n;i++){
		scanf("%d", &aux);
		cont[aux]++;
	}

	for(int i=2;i<=p;i++){
		if((cont[i]==cont[i-1]-1 && baixo) || (baixo && cont[i]>cont[i-1])){
			resp = false;
			break;
		}
		if(cont[i]==cont[i-1]-1 && !baixo)
			baixo = true;
		if(cont[i]!=cont[i-1] && !baixo){
			resp = false;
			break;
		}
	}

	if((resp && baixo) || (resp && !baixo))
		printf("S\n");
	else
		printf("N\n");

	return 0;
}