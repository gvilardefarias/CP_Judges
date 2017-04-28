#include <bits/stdc++.h>

using namespace std;

int n, f, r, pais[10000], a, b, c, resp, cont, x, y;

vector <pair <int,pair <int,int> > > fe;
vector <pair <int,pair <int,int> > > ro;

int find(int i){
	if(i==pais[i])
		return i;

	return pais[i] = find(pais[i]);
}

int main(){
	scanf("%d %d %d", &n, &f, &r);

	for(int i=1;i<=n;i++)
		pais[i] = i;

	for(int i=0;i<f;i++){
		scanf("%d %d %d", &a, &b, &c);

		fe.push_back(make_pair(c,make_pair(a,b)));
	}	

	for(int i=0;i<r;i++){
		scanf("%d %d %d", &a, &b, &c);

		ro.push_back(make_pair(c,make_pair(a,b)));
	}

	sort(fe.begin(),fe.end());
	sort(ro.begin(),ro.end());

	for(int i=0;i<f;i++){
		x = fe[i].second.first;
		y = fe[i].second.second;
		cont = fe[i].first;

		if(!x || !y)
			continue;

		if(find(x)!=find(y)){
			resp += cont;
			pais[find(x)] = find(y);
		}
	}

	for(int i=0;i<r;i++){
		x = ro[i].second.first;
		y = ro[i].second.second;
		cont = ro[i].first;

		if(!x || !y)
			continue;

		if(find(x)!=find(y)){
			resp += cont;
			pais[find(x)] = find(y);
		}
	}

	printf("%d\n", resp);

	return 0;
}