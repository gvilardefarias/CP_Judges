#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;

	scanf("%d",&k);

	while(k!=0){
		int n,m,x,y;

		scanf("%d %d",&n,&m);

		for(int i=0;i<k;i++){
			scanf("%d %d",&x,&y);

			if(x==n || y==m)
				printf("divisa\n");
			else{
				if(x<n && y>m)
					printf("NO\n");
				else{
					if(x>n && y>m)
						printf("NE\n");
					else{
						if(x<n && y<m)
							printf("SO\n");
						else
							printf("SE\n");
					}
				}
			}
		}

		scanf("%d",&k);
	}

	return 0;
}