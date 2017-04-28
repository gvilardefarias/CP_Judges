#include <bits/stdc++.h>

using namespace std;

int  main(){
int i,j,c,k;
char x[110];
 
scanf("%d\n",&c);

for(i=0;i<c;i++){
    scanf("\n%[^\n]s",x);
  
    k=strlen(x);
  
    for(j=(k/2)-1;j>=0;j--){
    	if(x[j]!='\n')
        	printf("%c",x[j]);
    }
  
    for(j=k;j>=k/2;j--){
    	if(x[j]!='\n')
        	printf("%c",x[j]);
    }
  
    printf("\n");
  
    for(j=0;j<strlen(x);j++)
    	x[j]='\0';
}
 
return 0;
}