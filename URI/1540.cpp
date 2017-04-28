#include <bits/stdc++.h>

using namespace std;

int main(){
    long double a,b,c,d;
    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        long long int x=0,y=0;
        long double r=0;

        scanf("%Lf %Lf %Lf %Lf",&a,&b,&c,&d);

        x=(int)(d-b)/(c-a);
        r=(d-b)/(c-a);
        r*=100;

        y=(int)r-(x*100);

        printf("%lld,%lld",x,y);

       	if(y<10)
       		printf("0");

       	printf("\n");
    }

    return 0;
}
