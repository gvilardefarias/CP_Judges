#include <bits/stdc++.h>

using namespace std;

int n, k, primos[42], cont;
set <int> mmcs;

int mmc(int x, int y){
	int m=min(x,y), aux, contF=0;

	aux = x*y;

	while(aux<=n){
		mmcs.insert(aux);
		contF += 2;
		aux *= m;
	}

	return contF;
}

int main(){
	scanf("%d %d", &n, &k);

	for(int i=0;i<k;i++)
		scanf("%d", &primos[i]);

	for(int i=0;i<k;i++)
		cont += n/primos[i];
	
	for(int i=0;i<k;i++)
		for(int j=i+1, aux;j<k;j++){
			aux = mmc(primos[i], primos[j]);
			cont -= aux;
		}

	printf("%d\n", n-(cont+mmcs.size()));

	return 0;
}
