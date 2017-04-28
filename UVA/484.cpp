#include <bits/stdc++.h>

using namespace std;

int main(){
	map <long long int,int> m;
	long long int a;
	vector<long long int> ordem;

	while(scanf("%lld", &a)!=EOF){
		if(!(find(ordem.begin(), ordem.end(), a) != ordem.end()))
			ordem.push_back(a);
		if(m.count(a)==0)
			m[a] = 1;
		else
			m[a]++;
	}

	
	for(int i=0; i<ordem.size(); i++)
		printf("%lld %d\n", ordem[i], m[ordem[i]]);

	return 0;
}