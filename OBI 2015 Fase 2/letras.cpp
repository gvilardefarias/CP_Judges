#include <bits/stdc++.h>

using namespace std;

int main(){
	int m=0;
	char s[300009];
	stack <char> pilha;

	scanf("%s",s);

	pilha.push(s[0]);

	for(int i=1;i<strlen(s);i++){
		if(pilha.top()<s[i])
			pilha.pop();

		pilha.push(s[i]);
		if(pilha.size()>m)
			m=pilha.size();
	}

	printf("%d\n",m);

	return 0;
}