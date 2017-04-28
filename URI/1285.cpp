#include <bits/stdc++.h>

using namespace std;

bool eRepetido(int num){
	if(num<10)
		return false;

	char aux[50];
	snprintf(aux, sizeof(aux), "%d", num);

	if(num<100){
		for(int i=0;i<2;i++)
			for(int j=i;j<2;j++){
				if(i!=j){
					if(aux[i]==aux[j])
						return true;
				}
			}
		return false;
	}
	if(num<1000){
		for(int i=0;i<3;i++)
			for(int j=i;j<3;j++){
				if(i!=j){
					if(aux[i]==aux[j])
						return true;
				}
			}
		return false;
	}
	if(num<10000){
		for(int i=0;i<4;i++)
			for(int j=i;j<4;j++){
				if(i!=j){
					if(aux[i]==aux[j])
						return true;
				}
			}
		return false;
	}
}

int main(){
	int n, m, cont;

	while(scanf("%d %d", &n,&m)!=EOF){
		cont=0;
		for(int i=n;i<=m;i++)
			if(eRepetido(i))
				cont++;		
		
		printf("%d\n",((m-n)+1)-cont);

	}

	return 0;
}