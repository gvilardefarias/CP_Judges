#include <bits/stdc++.h>

using namespace std;

int main(){
	char s[20];

	scanf("%s",s);

	for(int i=strlen(s)-1;i>=0;i--)
		printf("%c", s[i]);
	printf("\n");

	return 0;
}