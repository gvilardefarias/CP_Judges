#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m[101][101], soma=0;

	scanf("%d", &n);

	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
			scanf("%d", &m[i][j]);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			soma = m[i][j] + m[i+1][j] + m[i][j+1] + m[i+1][j+1];

			if(soma >= 2)
				printf("S");
			else
				printf("U");
		}

		printf("\n");
	}

	return 0;
}