#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);

	int a1 = (a+b+c), a2 = (a*2)+(b*2), a3 = (a*2)+(c*2), a4 = (b*2)+(c*2);

	printf("%d\n", min(min(a1,a2),min(a3,a4)));
	
	return 0;
}