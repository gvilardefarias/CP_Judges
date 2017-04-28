#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, y, z;
	
	scanf("%d %d %d %d", &n, &x, &y, &z);
	
	int a=x+y+z, b=x+y, c=x+z, d=y+z;
	
	if(a<=n){
		printf("3\n");
		return 0;
	}
	
	if(b<=n || c<=n || d<=n){
		printf("2\n");
		return 0;
	}
	
	if(x<=n || y<=n ||z<=n){
		printf("1\n");
		return 0;
	}

	printf("0\n");
	return 0;
}
