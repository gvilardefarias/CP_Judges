#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;

	scanf("%d %d", &n, &m);

	while(n!=0 && m!=0){
		set <int> a;
		set <int> b;
		int resp = 0;

		for(int i=0, aux;i<n;i++){
			scanf("%d", &aux);
			a.insert(aux);
		}
		for(int i=0, aux;i<m;i++){
			scanf("%d", &aux);
			b.insert(aux);
		}

		set<int>::iterator it;

		if(n<m)
			for(it=a.begin(); it!=a.end(); it++){
				if(b.count(*it)>0)
					resp++;
			}
		else
			for(it=b.begin(); it!=b.end(); it++){
				if(a.count(*it)>0)
					resp++;
			}
			

		printf("%d\n", resp);

		scanf("%d %d", &n, &m);
	}

	return 0;
}