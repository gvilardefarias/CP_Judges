#include <bits/stdc++.h>

using namespace std;

int main(){
	int x[105][105],n;

	scanf("%d",&n);

	while(n!=0){

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				x[i][j]=-1;

		for(int i=0;i<n;i++){
			int k=(n-1)-i;

			for(int j=0;j<n;j++){
				if(x[i][j]==-1)
					x[i][j]=i+1;
			}
			
			for(int j=0;j<n;j++){
				if(x[j][i]==-1)
					x[j][i]=i+1;
			}

			for(int j=0;j<n;j++){
				if(x[k][j]==-1)
					x[k][j]=i+1;
			}
			
			for(int j=0;j<n;j++){
				if(x[j][k]==-1)
					x[j][k]=i+1;
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++)
				printf("%3d ",x[i][j]);
			printf("%3d",x[i][n-1]);
			printf("\n");
		}
		printf("\n");
	
		scanf("%d",&n);
	}

	return 7;
}