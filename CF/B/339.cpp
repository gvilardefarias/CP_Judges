#include <bits/stdc++.h>

using namespace std;

long long int n, m, aux, cont=0, ant=1;

int main(){
	scanf("%I64d %I64d", &n, &m);

	for(long long int i=0;i<m;i++){
		scanf("%I64d", &aux);

		if(aux>=ant)
			cont += aux-ant;
		else
			cont += (aux+n)-ant;

		ant = aux;
	}

	printf("%I64d\n", cont);

	return 0;
}