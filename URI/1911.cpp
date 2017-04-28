#include <bits/stdc++.h>

using namespace std;

bool comparar(string a,char *b){
	int x=a.size(),y=strlen(b),aux=0;

	if(x!=y)
		return true;

	for(int i=0;i<x;i++){
		if(a[i]!=b[i])
			aux++;
	}

	if(aux>1)
		return true;

	return false;
}

int main(){
	int n;

	scanf("%d",&n);

	while(n!=0){
		int m,s=0;
		map <string,string> mapa;

		for(int i=0;i<n;i++){
			char nome[25],ass[25];
			
			scanf("\n%s %s",nome,ass);

			mapa[nome]=ass;
		}

		scanf("%d",&m);

		for(int i=0;i<m;i++){
			char nome[25],ass[25];
			
			scanf("\n%s %s",nome,ass);

			if(comparar(mapa[nome],ass))
				s++;			
		}

		printf("%d\n",s);
		scanf("%d",&n);
	}

	return 7;
}
