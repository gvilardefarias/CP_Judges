#include <bits/stdc++.h>

using namespace std;

int ca[51], d[51], pd[1001][51];

int maxDesculpa(int c, int f){
    if(f<0)
        return 0;
    if(pd[c][f])
        return pd[c][f];
    if(c==0)
        return 0;

    int aux1 = maxDesculpa(c, f-1), aux2;

    if(c>0 && c>=ca[f]){
        aux2 = d[f] + maxDesculpa(c-ca[f], f-1);

        return pd[c][f] = max(aux1, aux2);
    }
    
    return aux1;
}

int main(){
    int c, f, cont=1;

    scanf("%d %d", &c, &f);

    while(c && f){
        for(int i=0;i<f;i++)
            scanf("%d %d", &ca[i], &d[i]);

        printf("Teste  %d\n", cont);
        printf("%d\n\n", maxDesculpa(c, f-1));

        for(int i=0;i<=c;i++)
            for(int j=0;j<f;j++)
                pd[i][j] = 0;

        scanf("%d %d", &c, &f);

        cont++;
    }

    return 0;
}