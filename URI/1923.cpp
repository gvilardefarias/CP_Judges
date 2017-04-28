#include <bits/stdc++.h>

using namespace std;
int n,g;
map <string,vector <string> > grafo;
string zz = "Rerisson";
vector<string> convidado;

int main(){
	scanf("%d %d",&n,&g);

	for(int i=0;i<n;i++){
		char str[23],str1[23];

		scanf(" %s %s",str,str1);

		grafo[str].push_back(str1);
		grafo[str1].push_back(str);
	}


	printf("%d\n", convidado.size());

	sort(convidado.begin(),convidado.end();

	for(int i=0;i<convidado.size();i++)
		printf("%s\n", convidado[i].c_str());

	return 7;
}