#include <bits/stdc++.h>

using namespace std;

int n;

long long int num[100005], menor=999999999, cont=0;

int main(){
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%I64d",&num[i]);

		cont += num[i];

		if(num[i]%2!=0 && num[i]<menor)
			menor = num[i];
	}

	if(cont%2==0)
		printf("%I64d\n", cont);
	else
		printf("%I64d\n", cont-menor);

	return 0;
}