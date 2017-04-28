#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    scanf("%d %d", &n, &m);

    bool p[n+1];

    for(int i=1;i<=n;i++){
        if(i<=m)
            p[i] = 1;
        else{
            int aux = 0;

            for(int j=i-1;j>=i-m && i>=0;j--)
                if(!p[j])
                    aux++;

            if(aux>1)
                p[i] = 1;
            else
                p[i] = 0;
        }
    }

    bool aux = 0;

    for(int i=n;i>n-m && i>=0;i--)
        if(!p[i]){
            aux = 1;
            break;
        }

    if(aux)
        printf("Paula\n");
    else
        printf("Carlos\n");

    for(int i=1;i<=n;i++)
        printf("%d\n", p[i]);

    return 0;
}