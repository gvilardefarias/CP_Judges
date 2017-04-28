#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d",&n);

	int x[n+1];
	long long int total=0;
	bool fazendas[n+1];

	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		total+=x[i];
		fazendas[i]=false;
	}

	int i=0;
	long long int carneiros=0,fC=0;

	while(true){
		if(x[i]%2==0){
			
			if(x[i]>0){
				carneiros++;
				x[i]--;
			}
			
			if(!fazendas[i]){
				fC++;
				fazendas[i]=true;
			}

			i--;
		}
		else{
			
			carneiros++;
			x[i]--;
			

			if(!fazendas[i]){
				fC++;
				fazendas[i]=true;
			}

			i++;
		}	
	
		if(i<0 || i>=n)
			break;
	}

	printf("%lld %lld\n",fC,total-carneiros);

	return 7;
}