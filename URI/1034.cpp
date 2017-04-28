#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,a[25],n,m;

	scanf("%d",&t);

	for(int c=0;c<t;c++){
		scanf("%d %d",&n, &m);

		int x=0, cont=0;

		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);

		sort(a,a+n);

		for(int i=n-1;i>=0;i--){
			if(0==m)
				break;

			int z=(int)m/a[i];

			if(z>0){
				m -= (z*a[i]);
				cont += z;
			}

			a[i]=0;
		}

		printf("%d\n", cont);
	}

	return 7;
}