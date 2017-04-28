#include <bits/stdc++.h>

using namespace std;

int t, a, b;

int inverte(int num){
	int resto[10], digitos=0, resultado=0, aux;

	while(num > 0){
		resto[digitos] = num%10;
		digitos++;
		num /=10;
	}

	aux = digitos-1;

	for(int i=0;i<digitos;i++){		
		resultado += resto[i] * pow(10,aux);
		aux--;
	}

	return resultado;
}

int chega(int in, int fi){
	queue <pair <int,int> > bfs;
	int v, c;

	bfs.push(make_pair(in,0));

	while(!bfs.empty()){
		v = bfs.front().first;
		c = bfs.front().second;
		bfs.pop();

		if(v==fi)
			return c;

		bfs.push(make_pair(v+1,c+1));
		bfs.push(make_pair(inverte(v),c+1));
	}
}

int main(){
	scanf("%d", &t);

	for(int i=0;i<t;i++){
		scanf("%d %d", &a, &b);

		printf("%d\n", chega(a, b));
	}

	return 0;
}