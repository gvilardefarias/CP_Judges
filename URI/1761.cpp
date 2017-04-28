#include <bits/stdc++.h>

using namespace std;

int main(){
	double A,B,C;

	while(scanf("%lf %lf %lf",&A,&B,&C)!=EOF){
		double tangente,x;
		tangente=tan(A);
		x=(B*tangente)+C;

		printf("%.2lf\n",x);
	}

	return 0;
}