#include <bits/stdc++.h>

using namespace std;

int matriz[10][10];

void transpose(int a){	
	for(int i=0;i<a;i++)
		for(int j=i;j<a;j++){
			int aux = matriz[i][j];
			printf("\n%d %d\n", matriz[i][j], matriz[j][i]);
			matriz[i][j] = matriz[j][i];
			matriz[j][i] = aux;
			printf("%d %d\n", matriz[i][j], matriz[j][i]);
		}
}

int main(){
	int t;

	scanf("%d", &t);

	for(int c=0;c<t;c++){
		int n, m;

		scanf("%d", &n);

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				scanf("%d", &matriz[i][j]);

		scanf("%d", &m);

		for(int i=0;i<1;i++){
			char op[20];

			scanf(" %s", op);

			if(true){				
				transpose(n);
			}
			
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				printf("%d ", matriz[i][j]);
			printf("\n");
		}
	}

	return 0;
}