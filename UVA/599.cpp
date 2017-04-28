#include <bits/stdc++.h>

using namespace std;

int floresta[27][27],cont,l,t=0,a=0;

queue <int> fila;

void bfs(int x){
	int k=0;

	for(int j=0;j<27;j++){
		if(floresta[x][j]==1){
			fila.push(j);

			floresta[x][j]=0;
			floresta[j][x]=0;

			if(l==0)
				k++;
		}
	}

	if(l==0){
		if(k==1)
			a++;
		if(k>1)
			t++;
	
		l++;
	}

	if(fila.size()>0){
		int c=fila.front();

		fila.pop();

		bfs(c);
	}
}

int main(){
	int n;

	for(int i=0;i<27;i++)
		for(int j=0;j<27;j++)
			floresta[i][j]=0;
	

	scanf("%d",&n);

	for(int c=0;c<n;c++){
		t=0;
		a=0;

		char str[10];
		int aux,aux1;

		scanf(" %s",str);
		
		while(str[0]!='*'){
			aux=((int)str[1])-65;
			aux1=((int)str[3])-65;

			floresta[aux][aux1]=1;
			floresta[aux1][aux]=1;

			for(int i=0;i<strlen(str);i++)
				str[i]='\0';

			scanf(" %s",str);
		}

		char sta[100];

		scanf(" %s",sta);

		for(int i=0,aux;i<strlen(sta);i++){
			if(sta[i]!=','){
				aux=((int)sta[i])-65;

				floresta[aux][aux]=1;
			}
		}

		for(char i='A';i<='Z';i++){
			bool comp=false;
			
			for(int j=0;j<strlen(sta);j++){
				if(sta[j]==i){
					comp=true;
					break;
				}
			}

			if(!comp){
				int aux=((int) i)-65;

				for(int j=0;j<27;j++){
					floresta[aux][j]=0;
					floresta[j][aux]=0;
				}
			}
		}

		for(int i=0;i<27;i++){
			l=0;
			bfs(i);
		}

		printf("There are %d tree(s) and %d acorn(s).\n",t,a);
	}

	return 7;
}