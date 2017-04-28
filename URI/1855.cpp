#include <bits/stdc++.h>

using namespace std;

int x,y,aux=0;

char mapa[105][105];

int main(){
	scanf("%d",&x);
	scanf("%d",&y);

	bool mapaBusca(char x,int p,int p1);

	for(int i=0;i<y;i++)
		scanf(" %s",mapa[i]);

	if(mapaBusca(mapa[0][0],0,0))
		printf("*\n");

	else
		printf("!\n");

	return 7;
}

bool mapaBusca(char x,int p,int p1){
	if(aux==1)
		return true;

	if(x=='>'){
		mapa[p][p1]='k';

		for(int i=1+p1;i<x && aux!=1;i++){
			if(mapa[p][i]=='*'){
				aux=1;
				return true;
			}
			if(mapa[p][i]!='.'){
				if(mapa[p][i]=='k')
					return false;
				mapaBusca(mapa[p][i],p,i);
			}
		}
	}

	if(x=='<'){
		mapa[p][p1]='k';

		for(int i=-1+p1;i>=0 && aux!=1;i--){
			if(mapa[p][i]=='*'){
				aux=1;
				return true;
			}

			if(mapa[p][i]!='.'){
				if(mapa[p][i]=='k')
					return false;
				mapaBusca(mapa[p][i],p,i);
			}
		}
	}

	if(x=='v'){
		mapa[p][p1]='k';

		for(int i=1+p;i<y && aux!=1;i++){
			if(mapa[i][p1]=='*'){
				aux=1;
				return true;
			}

			if(mapa[i][p1]!='.'){
				if(mapa[i][p1]=='k')
					return false;
				mapaBusca(mapa[i][p1],i,p1);
			}
		}
	}

	else{
		mapa[p][p1]='k';

		for(int i=-1+p;i>=0 && aux!=1;i--){
			if(mapa[i][p1]=='*'){
				aux=1;
				return true;
			}

			if(mapa[i][p1]!='.'){
				if(mapa[i][p1]=='k')
					return false;

				mapaBusca(mapa[i][p1],i,p1);
			}
		}
	}

	if(aux!=1)
		return false;

	return true;
}
