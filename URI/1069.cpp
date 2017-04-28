#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,y;
	char str[1003];
	scanf("%d",&n);

	for (int i=0;i<n;i++){
		stack <char> x;
		y=0;
		scanf("%s",str);
		
		for(int j=0;j<strlen(str);j++){
			
			if(str[j]=='<'){
				x.push(str[j]);
			}

			if(str[j]=='>'){
				if(!x.empty()){
					if(x.top()=='<'){
							x.pop();
							y++;
						}
					}	
				}
			}
		
			printf("%d\n",y);
		}

	return 0;
}