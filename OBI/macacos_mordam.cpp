#include <bits/stdc++.h>

using namespace std;

bool pula(pair <long long int, long long int> i, pair <long long int, long long int> m, pair <long long int, long long int> f){
    pair <long long int, long long int> x, y;

    x = make_pair(i.first-m.first, i.second-m.second);
    y = make_pair(f.first-m.first, f.second-m.second);

    return (x.first*y.second) - (x.second*y.first) <= 0;
}

int main(){
    int n;
    set <pair <long long int, long long int> > trees;
    vector <pair <long long int, long long int> > pilha;

    scanf("%d", &n);

    for(int i=0; i<n;i++){
        long long int h, x;

        scanf("%lld %lld", &x, &h);

        trees.insert(make_pair(x, h));
    }

    set<pair <long long int, long long int> >::iterator iter;

    for(iter=trees.begin(); iter!=trees.end();++iter){

        while(pilha.size()>1)
            if(pula(pilha[pilha.size()-2], pilha[pilha.size()-1], *iter))
                pilha.pop_back();
            else
                break;
        

        pilha.push_back(*iter);
    }

    printf("%d\n", pilha.size()-1);

    return 0;
}