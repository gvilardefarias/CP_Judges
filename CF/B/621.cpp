#include <bits/stdc++.h>

using namespace std;

int x, bisposI[200000], bisposJ[200000], cont = 0;

int main(){
	scanf("%d",&x);

	for(int i=0;i<x;i++)
		scanf("%d %d",&bisposI[i], &bisposJ[i]);

	for(int i=0;i<x-1;i++)
		for(int j=i+1;j<x;j++){
			int a = bisposI[i] - bisposI[j], b = bisposJ[i] - bisposJ[j];

			if (a == b || a*-1==b || b*-1==a)
				cont ++;
		}

	printf("%d\n", cont);

	return 0;
}