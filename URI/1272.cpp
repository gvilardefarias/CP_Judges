#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char g;

	scanf("%d",&n);

	for(int c=0;c<n;c++){
		char str[55];

		cin.getline(str,55,'\n');

		for(int i=0;i<strlen(str);i++){
			if(str[i]==' ' && str[i+1]!=' ')
				printf("%c",str[i+1]);
			else
				if(i==0 && str[i]!=' ')
					printf("%c",str[0]);
		}

		if(strlen(str)!=0)
			printf("\n");
	}

	return 0;
}