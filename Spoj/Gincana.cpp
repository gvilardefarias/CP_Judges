#include <bits/stdc++.h>

using namespace std;

int pai[9999999];

int find(int x){
	
	if(pai[x]==x)
		return x;
	
	return pai[x]=find(pai[x]);
}
void join(int x,int y){
	x=find(x);
	y=find(y);

	if(x==y)
		return;

	pai[x]=y;
}

int main(){
	int n,m,c=0;;

	scanf("%d %d",&n,&m);

	for(int i=1;i<=n;i++)
		pai[i]=i;

	for(int i=0,l,j;i<m;i++){
		scanf("%d %d",&l,&j);

		join(l,j);
	}

	for(int i=1;i<=n;i++)
		if(pai[i]==i)
			c++;

	printf("%d\n",c);

	return 7;
}