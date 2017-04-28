#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	scanf("%d",&n);

	while(n!=0){
		queue <int> fila;
		vector <int> discart;
		
		for(int i=1;i<=n;i++)
			fila.push(i);


		for(int k=1,j=n;k<j;k++){
			int i=fila.front();

			if(k%2==0){
				fila.pop();
				fila.push(i);
				j++;
			}

			else{
				discart.push_back(i);
				fila.pop();
			}
		}
		
		printf("Discarded cards: %d",discart[0]);
		
		for(int i=1;i<discart.size();i++)
			printf(", %d",discart[i]);
	
		
		printf("\nRemaining card: %d\n",fila.front());

		scanf("%d",&n);
	}

	return 0;
}