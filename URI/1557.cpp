#include <bits/stdc++.h>

using namespace std;

int numerosDigitos(int x){
	int n=0;

	while(x>=1){
		x=x/10;
		n++;
	}

	return n;
}

void imprime(int num,int espa){
	int x=numerosDigitos(num);

	for(int i=0;i<espa-x;i++){
		printf(" ");
	}
	printf("%d ",num);
}

void imprimeD(int num,int espa){
	int x=numerosDigitos(num);

	for(int i=0;i<espa-x;i++){
		printf(" ");
	}
	printf("%d",num);
}

int main(){
	int n,x[20][20];

	scanf("%d",&n);

	while(n!=0){
		int m=0;

		x[0][0]=1;

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++){
				if(i-1>=0)
					x[i][j]=x[i-1][j]*2;
				else
					if(j-1>=0)
						x[i][j]=x[i][j-1]*2;

				if(x[i][j]>m)
					m=x[i][j];
			}

		m=numerosDigitos(m);

		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
				imprime(x[i][j],m);
			}

			imprimeD(x[i][n-1],m);
			
			printf("\n");
		}
		printf("\n");

		scanf("%d",&n);
	}

	return 7;
}