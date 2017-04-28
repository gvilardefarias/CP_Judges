#include <bits/stdc++.h>

using namespace std;

int lajotas[41];

int calculaDias(int lajota){
    if(lajotas[lajota])
        return lajotas[lajota];

    if(lajota <= 1)
        return 1;

    return lajotas[lajota] = calculaDias(lajota-1) + calculaDias(lajota-2);
}

int main(){
    int n;

    scanf("%d", &n);

    while(n){
        printf("%d\n", calculaDias(n));

        scanf("%d", &n);
    }

    return 0;
}