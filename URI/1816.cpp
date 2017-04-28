#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,t=1;

	scanf("%d",&m);

	while(m!=0){
		int x[m];
		char a='@';

		for(int i=0;i<m;i++)
			scanf("%d",&x[i]);

		printf("Instancia %d\n",t);

		t++;

		for(int i=0;i<m;i++)
			printf("%c",a+x[i]);
	}

	return 0;
}