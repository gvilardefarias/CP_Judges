#include <bits/stdc++.h>

using namespace std;

int main(){
	int nc;

	scanf("%d",&nc);

	for(int i=0;i<nc;i++){
		int n;

		scanf("%d",&n);

		int h[n+1];

		for(int j=0;j<n;j++){
			scanf("%d",&h[j]);
		}
		
		sort(h,h+n);

		for(int j=0;j<n-1;j++)
			printf("%d ",h[j]);

		printf("%d\n",h[n-1]);
	}

	return 0;
}