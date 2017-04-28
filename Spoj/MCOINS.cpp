#include <bits/stdc++.h>

using namespace std;

int *pd, k, l, m;

//1 = estado perdedor
//2 = estado ganhador

int dp(int n){
    if(pd[n]>0)
        return pd[n];

    int a, b, c;

    a = dp(n-1);

    if(n-k>=0)
        b = dp(n-k);
    if(n-l>=0)
        c = dp(n-l);

    if(a==1 || b==1 || c==1)
        return pd[n] = 2;
    else
        return pd[n] = 1;
}

int main(){
    pd = (int*) calloc(1000001, sizeof(int));
    pd[0] = 1;

    scanf("%d %d %d", &k, &l, &m);

    for(int i=0, aux;i<m;i++){
        scanf("%d", &aux);
        printf("%s", dp(aux)==2 ? "A":"B");
    }

    printf("\n");
    
    return 0;
}