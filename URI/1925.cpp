#include <bits/stdc++.h>
  
using namespace std;
 
char grafo[1009][1009],grafoc[1009][1009]; 
int l,c,n=0,m=0,p1,p2;
 
int main(){
    void bfs(int x,int y);
      
    scanf("%d %d",&l,&c);
      
    for(int i=0;i<l;i++){
        scanf(" %s",grafo[i]);
    }
      
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            n=0;
 
            if(grafo[i][j]=='*'){
                for(int u=0;u<l;u++)
                    for(int h=0;h<c;h++)
                        grafoc[u][h]=grafo[u][h];
                bfs(i,j);
                printf("%d\n",n);
            }
             
            if(m<n){
                m=n;
                p1=i;
                p2=j;
            }
        }
    }
      
    printf("%d,%d\n",p1+1,p2+1);  
     
    return 7;
}
 
void bfs(int x,int y){
    if(x-1>=0)
        if(grafoc[x-1][y]=='n'){
            grafoc[x-1][y]='b';
            n++;
            bfs(x-1,y);
        }
    if(x+1<=l)
        if(grafoc[x+1][y]=='n'){
            grafoc[x+1][y]='b';
            n++;
            bfs(x+1,y);
        }
 
    if(y-1>=0)
        if(grafoc[x][y-1]=='n'){
            grafoc[x][y-1]='b';
            n++;
            bfs(x,y-1);
        }
    if(y+1<=c)
        if(grafoc[x][y+1]=='n'){
            grafoc[x][y+1]='b';
            n++;
            bfs(x,y+1);
        }
}