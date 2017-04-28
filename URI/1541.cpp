#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,a,b,c;

	scanf("%d",&a);

	while(a!=0){
		scanf("%d",&b);
		scanf("%d",&c);

		q=(int)(100*a*b)/c;

		q=(int)sqrt(q);

		printf("%d\n",q);

		scanf("%d",&a);
	}

	return 7;
}