#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y, i=1;
	char par[15], impar[15];

	scanf("%d", &n);

	while(n){
		printf("Teste %d\n", i);

		scanf("\n%s", par);
		scanf("\n%s", impar);

		while(n--){
			scanf("%d %d", &x, &y);

			if(!((x+y)%2))
				printf("%s\n", par);
			else
				printf("%s\n", impar);
		}

		printf("\n");
		scanf("%d", &n);
		i++;
	}

	return 0;
}