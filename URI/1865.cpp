#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		int x;
		char c[10005];

		scanf("%s %d",c,&x);

		if(strcmp(c,"Thor")==0)
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;
}