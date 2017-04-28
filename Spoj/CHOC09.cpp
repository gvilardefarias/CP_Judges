#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, *p;

    scanf("%d %d", &n, &m);

    p = (int*) calloc(n+1, sizeof(int));

    p[0] = -2;


    for(int i=1;i<=n;i++){
             
            int cont = 0, aux;

            for(int j=i-1;j>=i-m && j>=0;j--){
                if(p[j]==i-j || p[j]==-2){
                    cont++;
                    aux = i-j;
                }
            }

            if(cont==1)
                p[i] = aux;
            else
                if(cont>1)
                    p[i] = -1;
                else
                    p[i] = -2;
        
    }

    if(p[n]>=1 || p[n]==-1)
        printf("Paula\n");
    else
        printf("Carlos\n");

    free(p);

    return 0;
}