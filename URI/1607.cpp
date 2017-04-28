#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	int t;

	scanf("%d",&t);

	for(int i=0;i<t;i++){
		char a[10005],b[10005];
		int n=0;

		scanf("%s %s",a,b);

		for(int j=0;j<strlen(a);j++){
			if(a[j]<=b[j] && b[j]-a[j]<25)
				n+=b[j]-a[j];
			else{
				if(b[j]<a[j] && b[j]-a[j]<25)
					n+=(b[j]-a[j])+24;
				else
					n+=(b[j]-a[j])-24;
			}
		}

		printf("%d\n",n);
	}

	return 0;
}