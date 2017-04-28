#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,c;

	scanf("%d %d",&a,&c);

	while(a!=0 && c!=0){
		int alturas[10002],cont=0;
		alturas[c] = a;

		for(int i=0;i<=c;i++){
			if(i!=c)
				scanf("%d",&alturas[i]);

			if(i!=0)
				if(alturas[i-1]<alturas[i])
					cont += alturas[i]-alturas[i-1];	
		}

		printf("%d\n",cont);

		scanf("%d %d",&a,&c);
	}	

	return 7;
}