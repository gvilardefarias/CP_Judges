#include <bits/stdc++.h>

using namespace std;

int aI, bI, cI;



int divF(int a, int b, int c){
    if(!b || c==1)
        return b-a;

    int resp = 0;
    resp += divF(a, b, c-1);

    if(c!=cI)
        resp -= divF(a/c, b/c, c-1);

    return resp;
}

int main(){
    scanf("%d %d %d", &aI, &bI, &cI);

    printf("%d\n", divF(aI/cI, bI/cI, cI));

    return 0;
}