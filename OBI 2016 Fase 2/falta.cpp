#include <bits/stdc++.h>

using namespace std;

int fac(int x){
	int resp = 1;

	while(x){
		resp *= x;
		x-=1;
    }

	return resp;
}

set <vector <int> > ok;

int main(){
    int n;
    vector <int> first;

    scanf("%d", &n);

    for(int i=0;i<fac(n)-1;i++){
        int aux;
        vector <int> vA;

        for(int i=0;i<n;i++){
            scanf("%d", &aux);

            vA.push_back(aux);
        }

        ok.insert(vA);
    }

    for(int i=1;i<=n;i++)
        first.push_back(i);

    while(ok.count(first))
        next_permutation(first.begin(), first.end());

    for(int i=0;i<first.size()-1;i++)
        printf("%d ", first[i]);

    printf("%d\n", first[first.size()-1]);

	return 0;
}
