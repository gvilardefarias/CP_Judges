#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,l;
	char str[55];

	scanf("%d",&n);
	
	for(int ii=0;ii<n;ii++){
		int x=0;

		scanf("%d",&l);

		for(int i=0;i<l;i++){
			scanf("%s",str);
			for(int j=0;j<strlen(str);j++){
				x+=i+j+((int) str[j]-65);
			}
		}

		printf("%d\n",x);
	}

	return 0;
}