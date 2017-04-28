#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,cont=0,y[2005];

	scanf("%d %d",&n, &k);

	for(int i=0;i<n;i++){
		scanf("%d",&y[i]);

		if(y[i]+k<=5)
			cont++;
	}

	printf("%d\n", (int)cont/3);

	return 0;
}