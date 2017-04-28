#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,alunos[55],k;

	scanf("%d", &n);

	while(n!=0){
		for(int i=1;i<=n;i++)
			scanf("%d",&alunos[i]);

		scanf("%d",&k);

		while(alunos[k]!=k)
			k=alunos[k];	

		printf("%d\n", k);
		scanf("%d", &n);
	}

	return 0;
}