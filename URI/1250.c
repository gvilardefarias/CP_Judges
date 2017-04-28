#include <stdio.h>
 
int main(){
    int c,i,x;
    void vai(int);
 
    scanf("%d",&c);
 
    for(i=0;i<c;i++){
        scanf("%d",&x);
        vai(x);
    }
 
    return 0;
}
 
void vai(int c){
    int x[c],i,n=0;
    char s[c+5];
 
    for(i=0;i<c;i++){
        scanf("%d",&x[i]);
    }
 
    scanf("%s",s);
 
    for(i=0;i<c;i++){
        if((s[i]=='S' && x[i]<=2) || (s[i]=='J' && x[i]>2)){
            n++;
        }
    }
 
    printf("%d\n",n);
}