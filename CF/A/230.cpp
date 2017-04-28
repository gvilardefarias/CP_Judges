#include <bits/stdc++.h>

using namespace std;

struct Dragon{
	int x,y;
};

bool comp(Dragon aux, Dragon aux2){
	return aux.x < aux2.x;
}

int main(){
	int s,n,z=0;

	scanf("%d %d",&s,&n);

	vector<Dragon> dragons;

	for(int i=0,x,y;i<n;i++){
		Dragon aux;

		scanf("%d %d",&x,&y);

		aux.x = x;
		aux.y = y;

		dragons.push_back(aux);
	}

	sort(dragons.begin(), dragons.end(), comp);

	for(int i=0;i<dragons.size();i++){
		if(dragons[i].x < s)
			s+=dragons[i].y;
		else{
			z=1;
			break;
		}
	}

	if(z==0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}