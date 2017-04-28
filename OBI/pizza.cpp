#include <bits/stdc++.h>

using namespace std;

int n, sum[100005], melhor[100005];
bool setado[100005];

int getSoma(int i, int j){
	if(i<0 || i-1<0)
		return sum[j];
	if(j<i)
		return (sum[n]-sum[i-1]) + sum[j];
	
	return sum[j]-sum[i-1];
}

int pd(int x){
	int aux = 0, aux2 = 0;

	if(x<0 || x>n)
		return -1;
	if(setado[x])
		return melhor[x];

	if(x-1>=0)
		if(setado[x-1])
			aux = melhor[x-1] + getSoma(x-1,x);
	if(x+1<n)
		if(setado[x+1])
			aux2 = melhor[x-+1] + getSoma(x,x+1);

	if(aux && aux2)
		return max(aux, aux2);;

	aux = 0;

	for(int i=0;i<n;i++)
		if(i!=x){
			aux2 = getSoma(i, x);

			if(aux2>aux)
				aux = aux2;
		}

	melhor[x] = aux;
	setado[x] = true;
	aux = pd(x+1);
	aux2 = pd(x-1);

	return max(melhor[x], max(aux, aux2));
}

int main(){
	int aux;

	scanf("%d", &n);

	for(int i=0;i<n;i++){
		scanf("%d", &aux);

		sum[i] += aux;
		sum[i+1] += sum[i];
	}

	aux = pd(0);

	if(aux>0)
		printf("%d\n", aux);
	else
		printf("0\n");

	return 0;
}