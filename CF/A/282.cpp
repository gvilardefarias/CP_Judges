#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, bit=0;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		char aux[5];

		scanf(" %s",aux);

		if(aux[1]=='+')
			bit++;
		else
			bit--;
	}

	printf("%d\n", bit);

	return 0;
}