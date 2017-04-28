#include <bits/stdc++.h>

using namespace std;

long long int l, n;

int main(){
	scanf("%lld %lld", &l, &n);

	printf("%lld\n", ((l-(n-1))*(l-(n-1)))+n-1);

	return 0;
}