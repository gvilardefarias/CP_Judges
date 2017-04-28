#include <bits/stdc++.h>

using namespace std;

int busca2(int i, int f, double num, int lista[]){
	int meio = (i+f)/2, meio2 = (i+f)/2;
	bool aux = false;

	while(lista[meio]>=num && meio>=0){
		aux = true;
		meio--;
	}

	if(aux)
		return meio+1;

	busca2(meio2+1,f,num,lista);
}

double busca1(double in, double f, int lista[], int n, int a, int cont){
	//printf("in: %lf f:%lf\n", in, f);	

	double m = (in+f)/2.0, soma=0;

	if(cont>100)
		return m;

	int aux = busca2(0,n,m,lista);

	//printf("i:%d %d m:%lf\n", aux, lista[aux], m);

	for(int i=aux;i<n;i++)
		soma += lista[i]-m;

	//printf("s:%lf a:%d\n", soma, a);

	if(soma==a)
		return m;

	if(in==f)
		return -1;

	if(soma>a)
		return busca1(m,f,lista,n,a,cont+1);

	return busca1(in,m,lista,n,a,cont+1);
}

int main(){
	int n,a;

	scanf("%d %d", &n, &a);

	while(n!=0 || a!=0){
		int tiras[n+1], m=0, soma=0;

		for(int i=0;i<n;i++){
			scanf("%d", &tiras[i]);

			if(tiras[i]>m)
				m = tiras[i];

			soma += tiras[i];
		}

		sort(tiras,tiras+n);

		if(soma==a)
			printf(":D\n");
		else{
			if(soma<a)
				printf("-.-\n");
			else
				printf("%.4lf\n", busca1(0,m,tiras,n,a,0));			
		}

		scanf("%d %d", &n, &a);
	}

	return 0;
}