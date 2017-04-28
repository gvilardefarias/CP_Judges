#include <bits/stdc++.h>

using namespace std;

int v, m, moedas[1001], pd[100001];

int podePagar(int v, int i){
    if(i>=m){
        if(v)
            return 0;

        return 1;
    }

    if(pd[moedas[i]])
        return pd[moedas[i]];

    if(v==0)
        return pd[moedas[i]] = 1;

    int aux1 = podePagar(v, i+1), aux2;

    if(!aux1){
        aux2 = podePagar(v-moedas[i], i+1);

        return pd[moedas[i]] = aux2;
    }

    return pd[moedas[i]] = aux1;
}

int main(){
    scanf("%d %d", &v, &m);

    for(int i=0;i<m;i++)
        scanf("%d", &moedas[i]);

    if(podePagar(v, 0))
        printf("S\n");
    else
        printf("N\n");

    return 0;
}