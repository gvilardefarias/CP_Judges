#include <bits/stdc++.h>

using namespace std;

int n,p,pedidos[25][2],pd[25][35];

int pdF(int obj,int pizza){
    if(pd[obj][pizza]!=-1)
        return pd[obj][pizza];

    if(obj>n || pizza<0)
        return pd[obj][pizza]=0;

    int nC=pdF(obj+1, pizza);

    if(pedidos[obj][1]<=pizza){
        int coloca=pedidos[obj][0]+pdF(obj+1,pizza-pedidos[obj][1]);

        if(coloca>nC)
            return pd[obj][pizza]=coloca;
        else
            return pd[obj][pizza]=nC;
    }

    return pd[obj][pizza]=nC;
}

int main(){
    scanf("%d",&n);
    scanf("%d",&p);

    for(int i=0;i<n+2;i++)
        for(int j=0;j<p+2;j++)
            pd[i][j]=-1;

    for(int i=0;i<n;i++)
        scanf("%d %d",&pedidos[i][0],&pedidos[i][1]);

    printf("%d min.\n", pdF(0,p));

    for(int i=0;i<n;i++){
        pedidos[i][1]=p+5;
    }

    scanf("%d",&n);

    while(n!=0){
        scanf("%d",&p);

        for(int i=0;i<n+2;i++)
            for(int j=0;j<p+2;j++)
                pd[i][j]=-1;

        for(int i=0;i<n;i++)
            scanf("%d %d",&pedidos[i][0],&pedidos[i][1]);

        printf("%d min.\n", pdF(0,p));

        for(int i=0;i<n;i++)
            pedidos[i][1]=p+5;

        scanf("%d",&n);
    }

    return 7;
}
