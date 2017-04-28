#include <bits/stdc++.h>

using namespace std;

unsigned long long int p(int num, long long int po){
	if(po==0)
		return 1;
	if(po==1)
		return num;
	if(po%2!=0)
		return p(num,po-1)*num;

	unsigned long long int aux = p(num,po/2);

	return aux*aux;
}

int main(){
	long long int r;

	scanf("%lld", &r);

	printf("%llu\n", p(3,r) % 2147483647);

	return 0;
}