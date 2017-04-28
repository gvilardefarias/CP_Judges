#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m=0,p=0,t[100];

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&t[i]);

		if(i==1){
			if(t[1]>=t[0]){
				m=t[0];
				p=1;
			}
			else{
				m=t[1];
				p=2;	
			}
		}
		else{
			if(t[i]<m){
				m=t[i];
				p=i+1;
			}
		}
	}

	printf("%d\n",p);

	return 0;
}