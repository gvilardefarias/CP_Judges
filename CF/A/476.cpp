#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,m,mA,z=0;

	scanf("%d %d",&n,&m);

	mA=m;

	while(n>=m){
		if(m==n || m*2>=n){
			z=1;
			break;
		}

		m+=mA;
	}

	if(z==1 || m==n)
		printf("%d\n", m);
	else
		printf("-1\n");

	return 0;
}