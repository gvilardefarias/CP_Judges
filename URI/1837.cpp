#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,q,r=0;

	scanf("%d %d",&a,&b);

	q=(int)a/b;
	if(a%b>=0)
		printf("%d %d\n",q,a%b);
	else{
		if(q<0)
			q--;
		else
			q++;
		r=(q*b)-a;
		printf("%d %d\n",q,r);
	}

	return 0;
}