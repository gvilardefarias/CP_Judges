#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	while(scanf("%d",&n)!=EOF){
		int l[n+1],c[n+1],u=0;

		for(int i=0;i<n;i++)
			scanf("%d",&l[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&c[i]);

		for(int i=0;i<n;i++)
			for(int j=i;j<n;j++)
				if(l[i]==c[j])
					if(j-i>=0)
						u+=j-i;
	
		printf("%d\n",u);
	}

	return 0;
}