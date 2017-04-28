#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,kg=0;
	float valor=0;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		int c=0;
		float v=0;
		char str[10005];

		scanf("%f\n",&v);
		fgets(str,10005,stdin);

		for(int j=0;j<strlen(str);j++)
			if(str[j]==' ')
				c++;

		c+=1;
		kg+=c;
		valor+=v;

		printf("day %d: %d kg\n",i+1,c);
	}
	double aux;

	aux=(double)kg/n;
	printf("%.2lf kg by day\n",aux);
	aux=(double)valor/n;
	printf("R$ %.2lf by day\n",aux);

	return 0;
}