#include <bits/stdc++.h>

using namespace std;

int a[25],n,m,dp[26][10000000];

int pd(int pos, int comp, int num){
	if(pos>=n)
		return -1;
	if(comp == m){
		dp[pos][num] = num;
		return num;
	}
	else
		if(comp > m){
			dp[pos][num] = -1;
			return -1;
		}
	if(dp[pos][num]>0)
		return dp[pos][num];

	int d = pd(pos+1,comp + a[pos],num+1), b = pd(pos,comp + a[pos],num+1), c = pd(pos+1,comp,num);

	if(d>=0 && d<=b && d<=c){
		dp[pos][num] = d;
		return d;
	}
	else{
		if(b>=0 && b<=d && b<=c){
			dp[pos][num] = b;
			return b;
		}
		else{
			if(c>=0 && c<=d && c<=b){
				dp[pos][num] = c;
				return c;
			}
		}
	}
}

int main(){
	int maior=0,t;

	scanf("%d",&t);

	for(int c=0;c<t;c++){
		scanf("%d %d",&n, &m);

		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);

			if(a[i]>maior)
				maior = a[i];
		}

		for(int i=0;i<n;i++)
			for(int j=0;j<=maior;j++)
				dp[i][j] = -1;

		printf("%d\n",pd(0,0,0));

		for(int i=0;i<n;i++)
			for(int j=0;j<=maior;j++)
				dp[i][j] = -1;
	}

	return 7;
}