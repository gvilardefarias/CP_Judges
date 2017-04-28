#include <bits/stdc++.h>

using namespace std;

int *pd, t, n;

int dp(int n){
    if(n<=500000000){
        if(pd[n]>0)
            return pd[n];
        if(n==2 || n==0)
            return pd[n] = 1;
        if(n==1)
            return pd[n] = 2;
    }

    int aux;

    if(n%2)
        aux = dp(n-1);
    else
        aux = dp(n/2);

    aux = aux==1 ? 2:1;

    if(n<=500000000) return pd[n] = aux;

    return aux;
}

int main(){
    pd = (int*) calloc(500000001, sizeof(int));

    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf("%d", &n);
        printf("%s\n", dp(n)==2 ? "Aayush":"Akash");
    }

    free(pd);
    
    return 0;
}