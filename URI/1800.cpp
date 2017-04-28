#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,e,c,s;
	map <int,int> mapa;

	scanf("%d %d",&q,&e);

	for(int i=0;i<e;i++){
		scanf("%d",&s);
		mapa[s]=s;
	}

	for(int i=0;i<q;i++){
		scanf("%d",&c);

		if(mapa[c]==c)
			printf("0\n");
		else
			printf("1\n");

		mapa[c]=c;
	}

	return 0;
}