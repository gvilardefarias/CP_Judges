#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;

	scanf("%d",&t);

	for(int i=0;i<t;i++){
		int l,b,iv,ev;
		char p[10000];

		scanf("\n%s %d",p,&l);
		
		printf("Caso #%d: %s nível %d\n",i+1,p,l);

		for(int j=0;j<4;j++){
			scanf("%d %d %d",&b,&iv,&ev);

			if(j==0){
				printf("HP: %d\n",((int)(((iv+b+(sqrt(ev)/8)+50)*l)/50))+10);
			}
			else{
				if(j==1){
					printf("AT: %d\n",((int)(((iv+b+(sqrt(ev)/8))*l)/50))+5);
				}
				else{
					if(j==2){
						printf("DF: %d\n",((int)(((iv+b+(sqrt(ev)/8))*l)/50))+5);
					}
					else{
						printf("SP: %d\n",((int)(((iv+b+(sqrt(ev)/8))*l)/50))+5);
					}
				}
			}
		}
	}

	return 0;
}