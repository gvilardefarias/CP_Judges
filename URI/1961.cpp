#include <bits/stdc++.h>

using namespace std;

int main(){
	int p,n,pulos[100],verif=0;

	scanf("%d %d",&p,&n);

	for(int i=0;i<n;i++){
		scanf("%d",&pulos[i]);

		if(i!=0 && verif == 0){
			int aux = pulos[i-1]-pulos[i];

			if(aux<0)
				aux *= -1;

			if(aux <= p)
				verif = 0;		
			else
				verif = 1;
		}
	}

	if(verif==0)
		printf("YOU WIN\n");
	else
		printf("GAME OVER\n");

	return 7;
}