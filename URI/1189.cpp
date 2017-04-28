#include <bits/stdc++.h>

using namespace std;

int main(){
	float s=0,x[12][12];
	char o;

	scanf("%c",&o);

	for(int i=0;i<12;i++)
		for(int j=0;j<12;j++)
			scanf("%f",&x[i][j]);

	if(o=='S'){
		for(int i=0;i<6;i++){
			for(int j=0;j<i;j++)
				s+=x[i][j];
		}

		for(int i=6;i<12;i++){
			for(int j=0;j<=10-i;j++)
				s+=x[i][j];
		}

		printf("%.1f\n",s);
	}
	else{
		for(int i=0;i<6;i++){
			for(int j=0;j<i;j++)
				s+=x[i][j];
		}

		for(int i=6;i<12;i++){
			for(int j=0;j<=10-i;j++)
				s+=x[i][j];
		}

		printf("%.1f\n",s/30);
	}

	return 0;
}