#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	char str[55];


	while(fgets(str,55,stdin)!=NULL){

		for(int i=0;i<strlen(str);i++){
			if((str[i]>77 && str[i]<91) || (str[i]>109 && str[i]<123))
				str[i]=(str[i]+13)-26;
			else{
				if((str[i]>64 && str[i]<=77) || (str[i]>96 && str[i]<=109))
					str[i]=str[i]+13;
				else
					str[i]=str[i];
			}
		}
		printf("%s",str);
	}

	return 0;
}