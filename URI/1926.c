#include <stdio.h>
#include <math.h>

int contP, primos[100000], x, y, j, q, pG, c, i, maior[2];

int ePrimo(int n){
	if(n==2 || n==3)
		return 1;

	if(n%2==0 || n==1)
		return 0;

	int aux = sqrt(n)+1, i;

	for(i=0;i<contP;i++){
		if(n%primos[i]==0)
			return 0;
		if(primos[i]>aux)
			return 1;
	}

	return 1;
}

int ePrimoG(int pos){
	if(pos>0)
		if(primos[pos]-primos[pos-1]==2)
			return 1;
	
	if(pos<contP)
		if(primos[pos]-primos[pos+1]==-2){
			return 1;
		}

	return 0;
}

int main(){
	scanf("%d", &q);
	contP = 0;
	maior[0] = 0;
	maior[1] = 0;

	for(c=0;c<q;c++){
		pG=0;
		
		scanf("%d %d",&x,&y);

		if(x>y){
			pG = x;
			x = y;
			y = pG;
			pG = 0;
		}

		if(y>maior[0]){
			maior[1] = maior[0];
			maior[0] = y;

			for(i=maior[1]+1;i<=y;i++)
				if(ePrimo(i)==1){
					primos[contP] = i;
					contP++;
				}

			while(ePrimo(i)==0)
				i++;

			primos[contP] = i;

			contP++;

			for(i=0;i<contP;i++){
				if(primos[i]>=x && primos[i]<=y)
					if(ePrimoG(i)==1)
						pG++;
				if(primos[i]>y)
					break;
			}
		}
		else{
			for(i=0;i<contP;i++){
				if(primos[i]>=x && primos[i]<=y)
					if(ePrimoG(i)==1)
						pG++;
				if(primos[i]>y)
					break;
			}
		}

		printf("%d\n", pG);		
	}

	return 0;
}