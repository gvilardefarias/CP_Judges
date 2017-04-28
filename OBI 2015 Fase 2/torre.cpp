#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m=0,s=0,s2=0;

	scanf("%d",&n);

	int x[n+1][n+1];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&x[i][j]);

	for(int i=0;i<n;i++){
		s=0;

		for(int j=0;j<n;j++){
			s+=x[j][i];
		}
		for(int j=0;j<n;j++){
			s2=0;
			for(int k=0;k<n;k++){
				s2+=x[j][k];
			}

			if((s2+s)-(x[j][i]*2)>m)
				m=(s2+s)-(x[j][i]*2);
		}
	}

	printf("%d\n",m);

	return 0;
}
