#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    char str[10001];

    while(fgets(str, 10001, stdin)){    
        for(int i=0;str[i] != '\0';i++){    
             
            if(str[i] == 'j' || str[i] == 'p' || str[i] == 's' || str[i] == 'v' || str[i] == 'b' || str[i] == 'x' || str[i] == 'z')
                str[i] = 'f';      
            if(str[i] == 'J' || str[i] == 'P' || str[i] == 'S' || str[i] == 'V' || str[i] == 'B' || str[i] == 'X' || str[i] == 'Z')
                str[i] = 'F';
        }
        int j=0;
        while( str[j] != '\0'){
            if((str[j+1]=='f' || str[j+1]=='F') && (str[j]=='f' || str[j]=='F'))
                for(int k=j;str[k]!='\0';k++){
                    if((str[k+1]=='f' || str[k+1]=='F') && (str[k]=='f' || str[k]=='F'))
                        str[k+1]=str[k];

                    str[k]=str[k+1];
                }
            else
                j++;
        }       

        printf("%s",str);
    }
    return 0;
}