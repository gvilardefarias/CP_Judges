#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d",&n);

	for(int c=0;c<n;c++){
		int x[9][9],m=0,k=0;
		bool r=true;
		
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
				scanf("%d",&x[i][j]);
		
		for(int t=0;t<3;t++){
			for(int o=0;o<3;o++){
				m=0;

				for(int i=0+(t*3);i<3+(t*3);i++){
					for(int j=0+(o*3);j<3+(o*3);j++){
						m+=x[i][j];
					}
				}
				if(m==45)
					r=true;
				else{
					r=false;
					break;
				}
			}
		}

		if(r){
			for(int i=0;i<9;i++){
				m=0;

				for(int j=0;j<9;j++){
					m+=x[i][j];
					k+=x[i][j];
				}
			
				if(m==45)
					r=true;
				else{
					r=false;
					break;
				}
			}
		}

		if(r){
			for(int i=0;i<9;i++){
				m=0;

				for(int j=0;j<9;j++){
					m+=x[j][i];
				}

				if(m==45)
					r=true;
				else{
					r=false;
					break;
				}
			}
		}
		
		if(r && k==405){
			printf("Instancia %d\n",c+1);
			printf("SIM\n\n");
		}
		else{
			printf("Instancia %d\n",c+1);
			printf("NAO\n\n");
		}
	}

	return 0;
}