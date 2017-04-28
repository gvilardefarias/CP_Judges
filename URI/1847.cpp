##include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a,b,c;
 
    scanf("%d %d %d",&a,&b,&c);
 
    if((b<a && c>=b) || (b>a && c>b && c-b>=b-a) || (a>b && b>c && a-b>b-c) || (a==b && c>a))
        printf(":)\n");
    else
        printf(":(\n");
 
    return 0;
}