#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, resp=0, aux;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &aux);

		resp += aux-1;
	}

	printf("%d\n", resp);

	return 0;
}