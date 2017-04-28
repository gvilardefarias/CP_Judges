#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    char str[15];   
    int d[10];
 
    while(scanf("%s",str)!=EOF){
         
        for(int i=0;i<9;i++)
            d[i]=str[i]-48;
         
        d[10]=0;
        d[9]=0;
 
        for(int i=0,j=1,k=9;i<9;i++,j++,k--){
            d[9]+=d[i]*j;
            d[10]+=d[i]*k;
        }
 
        if(d[9]%11==10)
            d[9]=0;
        else
            d[9]=d[9]%11;
 
        if(d[10]%11==10)
            d[10]=0;
        else
            d[10]=d[10]%11;
 
        for(int i=0,j=0;i<14;i++){
            if(i==3 || i==7)
                printf(".");
            
            else{
                if(i==11)
                    printf("-");
                else{
                    printf("%d",d[j]);
                    j++;
                }
            }
        }

        printf("\n");
    }
    
    return 0;
}