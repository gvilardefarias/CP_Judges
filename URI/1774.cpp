#include <bits/stdc++.h>

using namespace std;

int r,c,s=0;
int v[70][70];
int pais[100000],peso[10000];

struct aresta{
	int r1;
	int r2;
	int peso;
};

bool ordena(aresta a,aresta b){
	return a.peso<b.peso;
}

int find(int x){
	if(pais[x]==x)
		return x;

	return pais[x]=find(pais[x]);
}

void join(int a, int b){
    
    a = find(a);
    b = find(b);
    
    if(peso[a] < peso[b]) 
    	pais[a] = b;
    else
    	if(peso[b] < peso[a])
    		pais[b] = a;
    else{
        pais[a] = b;
        peso[b]++;
    }
    
}

int main(){
	scanf("%d %d",&r,&c);

	struct aresta arestas[c+1];

	for(int i=0;i<=r;i++)
		pais[i]=i;

	for(int i=0;i<c;i++){
		int z,w,p;
		
		scanf("%d %d %d",&z,&w,&p);
		
		arestas[i].r1=z;
		arestas[i].r2=w;
		arestas[i].peso=p;
	}

	sort(arestas,arestas+c,ordena);

	for(int i=0;i<c;i++){
		int aux1=arestas[i].r1,aux2=arestas[i].r2;

		if(find(aux1)!=find(aux2)){
			s+=arestas[i].peso;
			join(aux1,aux2);
		}
	}

	printf("%d\n",s);

	return 0;
}