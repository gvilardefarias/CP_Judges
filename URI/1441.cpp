#include <bits/stdc++.h>

using namespace std;

int main(){

	int h[500];

	scanf("%d",&h[0]);

	while(h[0]!=0){
		int m=h[0];

		for(int i=1;h[i-1]>1;i++){
			if(h[i-1]%2==0){
				h[i]=h[i-1]/2;
			}
			else{
				h[i]=(3*h[i-1])+1;
			}

			if(h[i]>m)
				m=h[i];
		}

		printf("%d\n",m);
		scanf("%d",&h[0]);
	}

	return 0;
}