#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d;

	scanf("%d %d",&n,&d);

	while(n!=0 && d!=0){
		int x[d][n];
		bool re=true;

		for(int i=0;i<d;i++)
			for(int j=0;j<n;j++){
				scanf("%d",&x[i][j]);

				if(x[i][j]==0)
					re=false;
			}

		for(int i=0;i<n;i++){
			for(int j=0;j<d-1;j++){
				if(x[j][i]==0){
					re=false;
					break;
				}
				else{
					if(x[j][i]==x[j+1][i])
						re=true;
					else
						re=false;	
				}
			}
			if(re)
				break;
		}

		if(re)
			printf("yes\n");
		else
			printf("no\n");

		scanf("%d %d",&n,&d);
	}

	return 0;
}