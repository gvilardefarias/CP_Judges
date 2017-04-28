#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b, c, cont=0;

	scanf("%d %d %d %d", &n, &a, &b, &c);

	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			int A = (a*i), B = (b*j);
			int C = (n-A-B)/c;
			int aux = A + B + (c*C);

			if(aux==n && i+j+C>cont && C>=0)
				cont = i+j+C;		
		}
	}

	printf("%d\n", cont);

	return 0;
}