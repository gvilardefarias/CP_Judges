#include <bits//stdc++.h>
 
using namespace std;
 
int main(){
    int a,d;
 
    scanf("%d %d",&a,&d);
 
    while(a!=0 && d!=0){
        int me=0,mea=0,ma=0,o=0,xa[a],xd[d];
 
        for(int i=0;i<a;i++){
            scanf("%d",&xa[i]);
 
            if(i==0){
                mea=xa[i];
            }
            else{
                if(xa[i]<mea){
                    mea=xa[i];
                }
            }
        }
 
        for(int i=0;i<d;i++){
            scanf("%d",&xd[i]);
 
            if(d==1){
                o=10009;
            }
            else{
                if(i==1){
                    if(xd[1]>xd[0]){
                        me=xd[0];
                        o=xd[1];
                    }
                    else{
                        me=xd[1];
                        o=xd[0];
                    }
                }
                else{
                    if(xd[i]<=me){
                        o=me;
                        me=xd[i];
                    }
                }
            }
        }
 
        if(mea<o)
            printf("Y\n");
        else
            printf("N\n");
 
        scanf("%d %d",&a,&d);
    }
 
    return 0;
}