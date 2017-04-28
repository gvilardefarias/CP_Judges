#include <bits/stdc++.h>

using namespace std;

int n, num[5], aux, cont=0;

int main(){
	scanf("%d",&n);

	for(int i=0;i<5;i++)
		num[i] = 0;

	for(int i=0;i<n;i++){
		scanf("%d",&aux);

		num[aux]++;
	}

	if(num[1]!=0){
		if(num[3]!=0){
			if(num[1]>=num[3]){
				num[4] += num[3];
				num[1] -= num[3];
				num[3] = 0;
			}
			else{
				num[4] += num[1];
				num[3] -= num[1];
				num[1] = 0;
			}
		}
	}

	if(num[2]%2==0){
		num[4] += num[2]/2;
		num[2] = 0;
	}
	else{
		if(num[1]>=2){
			num[1] -= 2;
			num[2] += 1;
			num[4] += num[2]/2;
			num[2] = 0;
		}
		else{
			num[4] += (num[2]-1)/2;
			num[2] = 1;
		}
	}

	if(num[1]%2==0){
		num[2] += num[1]/2;
		num[1] = 0;
	}
	else{
		num[2] += (num[1]-1)/2;
		num[1] = 1;
	}

	if(num[2]%2==0){
		num[4] += num[2]/2;
		num[2] = 0;
	}
	else{
		if(num[1]>=2){
			num[1] -= 2;
			num[2] += 1;
			num[4] += num[2]/2;
			num[2] = 0;
		}
		else{
			num[4] += (num[2]-1)/2;
			num[2] = 1;
		}
	}

	if(num[2]!=0 && num[1]!=0){
		if(num[1]>=num[2]){
			num[3] += num[2];
			num[1] -= num[2];
			num[2] = 0;
		}
		else{
			num[3] += num[1];
			num[2] -= num[1];
			num[1] = 0;
		}
	}
	
	cont += num[1];
	cont += num[2];
	cont += num[3];
	cont += num[4];

	printf("%d\n", cont);

	return 0;
}