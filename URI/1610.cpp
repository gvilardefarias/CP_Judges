#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
 
    scanf("%d",&t);
 
    for(int k=0;k<t;k++){
        int n,m,a,b;
 
        scanf("%d %d",&n,&m);
 
        int visitados[n+1];
        bool verif = true;
        stack <int> pilha;
        vector <vector<int> > x(n+1);
 
        for(int i=0;i<m;i++){
            scanf("%d %d",&a,&b);
            if(i==0){
                visitados[a]=1; 
                pilha.push(a);
            }
             
            x[a].push_back(b);
        }
         
        while((!pilha.empty()) && verif){
            int aux;
             
            aux=pilha.top();
 
            if(!x[aux].empty()){
                pilha.push(x[aux].back());
                x[aux].pop_back();
                if(visitados[pilha.top()]!=1)
                    visitados[pilha.top()]=1;
                else{
                    printf("SIM\n");
                    verif=false;
                    break;
                }
            }
            else
                pilha.pop();
        }
 
        if(verif)
            printf("NAO\n");
    }
 
    return 0;
}