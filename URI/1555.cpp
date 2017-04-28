#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,y;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		int r=0,b=0,c=0;

		scanf("%d %d",&x,&y);

		r = pow(3*x,2)+ pow(y,2);
		b = (2*pow(x,2)) + pow(5*y,2);
		c = (-100*x) + pow(y,3);

		if(r>b && r>c)
			printf("Rafael ganhou\n");
		else
			if(b>r && b>c)
				printf("Beto ganhou\n");
			else
				printf("Carlos ganhou\n");
	}

	return 0;
}