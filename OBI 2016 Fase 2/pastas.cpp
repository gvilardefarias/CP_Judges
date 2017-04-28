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

	for(int i=1;i<n-1;i++){
		if(cont[i]!=cont[i-1] && cont[i]!=cont[i-1]-1){
			resp = false;
			break;
		}

		if(cont[i]!=cont[i-1]-1 && !baixo)
			baixo = true;
	}

	if((resp && baixo && cont[n-1]==cont[0]) || (resp && !baixo))
		printf("S\n");
	else
		printf("N %d\n", baixo);

	return 0;
}