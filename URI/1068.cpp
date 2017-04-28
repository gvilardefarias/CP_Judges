#include <bits/stdc++.h>

using namespace std;

int main(){
	char str[1003];
	bool a;

	while (scanf("%s",str)!=EOF){
		a=true;
		stack <char> x;
		
		for(int j=0;j<strlen(str) && a;j++){
			
			if(str[j]=='('){
				x.push(str[j]);
			}

			if(str[j]==')'){
			
				if(!x.empty()){
					if(x.top()=='('){
						x.pop();
						a=true;
					}
			
					else{
						a=false;
					}
				}
			
				else{
					a=false;
				}
			}
		}

		if(!x.empty()){
			a=false;
		}

		if(a){
			printf("correct\n");
		}

		else{
			printf("incorrect\n");
		}
	}

	return 0;
}