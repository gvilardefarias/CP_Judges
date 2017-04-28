#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(scanf("%d",&n)!=EOF){
		int pd[10005],pe[10005],cone=0,contd=0,cont=0;

		memset(pd,0,10000);
		memset(pe,0,10000);

		// Escaneia e divide os pares em direitos e esquedos
		for(int k=0;k<n;k++){
			char c;
			int x;

			scanf("%d %c",&x,&c);

			if(c=='D'){
				pd[contd]=x;
				contd++;
			}
			else{
				pe[cone]=x;
				cone++;
			}
		}

		// Compara as botas direitas com a as esquerdas, se for igual as botas recebem o valor de 0
		for(int i=0;i<contd;i++){
			for(int j=0;j<n;j++)
				if(pd[i]==pe[j]){
					cont++;
					pe[j]=0;
					pd[i]=0;
					break;
				}
		}

		printf("%d\n",cont);
	}	

	return 0;
}
