#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    if(n%10){
        printf("%d\n", 1);
        printf("%d\n", n - ((( int) n/10)*10));
    }
    else
        printf("%d\n", 2);

    return 0;
}