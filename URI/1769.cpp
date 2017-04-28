#include <bits/stdc++.h>

using namespace std;

int main(){
	char str[20];	
	int d[10];

	while(scanf("%s",str)!=EOF){
		int n=0,m=0;

		for(int i=0,j=0;i<14;i++)
			if(str[i]!='.' && str[i]!='-'){
				d[j]=str[i]-48;
				j++;
			}

		for(int i=0,j=1,k=9;i<9;i++,k--,j++){
			n+=d[i]*j;
			m+=d[i]*k;
		}

		if(n%11==10)
			n=0;
		if(n%11<10)
			n=n%11;

		if(m%11==10)
			m=0;
		if(m%11<10)
			m=m%11;
		

		if(d[9]==n && d[10]==m)
			printf("CPF valido\n");
		else
			printf("CPF invalido\n");
	}

	return 0;
}