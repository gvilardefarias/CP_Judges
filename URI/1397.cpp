#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=0;

	scanf("%d",&n);

	while(n!=0){
		int a,b,a1=0,b1=0;

		for(int i=0;i<n;i++){
			scanf("%d %d",&a,&b);

			if(a>b)
				a1++;
			if(b>a)
				b1++;
		}	

		printf("%d %d\n",a1,b1);
		scanf("%d",&n);
	}

	return 0;
}