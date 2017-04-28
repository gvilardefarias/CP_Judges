#include <bits/stdc++.h>

using namespace std;

int main(){
	int o;

	scanf("%d",&o);

	while(o!=0){
		int x[o][o];
		bool mais=true;

		for(int i=0;i<o;i++){
			x[i][0]=i+1;

			for(int j=1;j<o;j++){
				if(x[i][j-1]+1>o)
					mais=false;
				
				if(x[i][j-1]-1<=0)
					mais=true;
				
				if(mais)
					x[i][j]=x[i][j-1]+1;
				
				else
					x[i][j]=x[i][j-1]-1;
				
			}

			mais=false;
		}
		

		for(int i=0;i<o;i++){
			printf("%3d",x[i][0]);

			for(int j=1;j<o;j++)
				printf(" %3d",x[i][j]);
			
			printf("\n");
		}
		printf("\n");
		
		scanf("%d",&o);
	}

	return 0;
}