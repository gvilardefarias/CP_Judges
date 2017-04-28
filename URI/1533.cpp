#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d",&n);

	while(n!=0){
		int v[n],m=0,o=0,p=0,pm=0;

		for(int i=0;i<n;i++){
			scanf("%d",&v[i]);

			if(i==1){
				if(v[1]>v[0]){
					m=v[1];
					o=v[0];
					p=1;
					pm=2;
				}
				else{
					m=v[0];
					o=v[1];
					p=2;
					pm=1;	
				}
			}
			else{
				if(v[i]>m){
					p=pm;
					o=m;
					m=v[i];
					pm=i+1;
				}
				if(v[i]>o && v[i]<m){
					o=v[i];
					p=i+1;
				}
			}
		}

		printf("%d\n",p);

		scanf("%d",&n);
	}

	return 0;
}