#include <bits/stdc++.h>

using namespace std;

int main(){
	int p,s,jogadores[11],armadilhas[3],n,a1,a2,cont;
	bool taParado[11],ganhou;

	scanf("%d %d", &p, &s);

	while(p!=0 && s!=0){
		cont=1;
		ganhou=false;

		for(int i=1;i<=p;i++){
			jogadores[i]=0;
			taParado[i]=false;
		}
		
		scanf("%d %d %d", &armadilhas[0], &armadilhas[1], &armadilhas[2]);
		scanf("%d", &n);

		for(int i=0;i<n;i++){
			scanf("%d %d", &a1, &a2);

			if(!ganhou){
				if(cont>p)
					cont=1;

				while(taParado[cont]){
					taParado[cont]=false;
					cont++;
				}

				if(cont>p)
					cont=1;

				jogadores[cont]+=a1+a2;

				for(int i=0;i<3;i++)
					if(jogadores[cont]==armadilhas[i])
						taParado[cont]=true;

				if(jogadores[cont]>s){
					printf("%d\n", cont);
					ganhou=true;
				}			

				cont++;
			}			
		}

		scanf("%d %d", &p, &s);
	}

	return 0;
}