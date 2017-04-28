#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k=0;

	scanf("%d",&n);

	while(n!=0){
		int m=0;
		char str[n][55];

		for(int i=0;i<n;i++){
			scanf("%s",str[i]);
			
			if(strlen(str[i])>m)
				m=strlen(str[i]);	
		}

		if(k!=0)
			printf("\n");

		for(int i=0;i<n;i++){
			for(int j=0;j<m-strlen(str[i]);j++)
				printf(" ");
			printf("%s\n",str[i]);
			
		}

		scanf("%d",&n);
		k++;
	}
	return 0;
}