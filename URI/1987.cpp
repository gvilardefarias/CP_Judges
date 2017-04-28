#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(scanf("%d ",&n)!=EOF){
		int num=0;
		char aux[15];

		scanf("%s", aux);

		for(int i=0;i<strlen(aux);i++)
			num += int(aux[i])-48;
		

		printf("%d ", num);

		if(num % 3==0)
			printf("sim\n");
		else
			printf("nao\n");
	}

	return 7;
}