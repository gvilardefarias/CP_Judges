#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d",&n);

	for(int j=0;j<n;j++){
		int x[6],y[6],maior=0,menor=100000,max,mex;

		scanf("%d %d %d %d %d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4]);

		for(int i=0;i<4;i++){
			if(x[i]+y[i]>maior){
				maior=x[i]+y[i];
				max=i;
			}
			if(x[i]+y[i]<menor){
				menor=x[i]+y[i];
				mex=i;	
			}
		}

		if(x[4]>=x[mex] && y[4]>=y[mex] && x[4]<=x[max] && y[4]<=y[max])
			printf("1\n");
		else
			printf("0\n");
	}

	return 7;
}