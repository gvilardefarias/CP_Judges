#include <bits/stdc++.h>

using namespace std;

typedef struct{
	int x,y;
}pontos;

double dist(int xA, int yA, int xB, int yB){
	return sqrt(((xA-xB)*(xA-xB))+((yA-yB)*(yA-yB)));
}

bool mL(int xA, int yA, int xB, int yB){
	if(xA==xB || yA==yB || xA-yA==xB-yB || xA+yA==xB+yB)
		return true;
	
	return false;
}

double m(int xA, int xB){
	return (xA+xB)/2;
}

int main(){
	pontos p[8];
	bool resp=true;

	for(int i=1;i<=7;i++)
		scanf("%d %d", &p[i].x, &p[i].y);
	
	if(dist(p[1].x, p[1].y, p[2].x, p[2].y)!=dist(p[1].x, p[1].y, p[3].x, p[3].y)){
		resp = false;
	}
	if(dist(p[4].x, p[4].y, p[6].x, p[6].y)!=dist(p[5].x, p[5].y, p[7].x, p[7].y)){
		resp = false;
	}
	if(dist(p[2].x, p[2].y, p[3].x, p[3].y)<dist(p[4].x, p[4].y, p[5].x, p[5].y)){
		resp = false;
	}
	if(mL(p[2].x, p[2].y, p[3].x, p[3].y) && mL(p[2].x, p[2].y, p[4].x, p[4].y) && mL(p[2].x, p[2].y, p[5].x, p[5].y)){}
	else{
		resp = false;
	}
	if(m(p[2].x, p[3].x)==m(p[4].x, p[5].x) && m(p[2].y, p[3].y)==m(p[4].y, p[5].y)){}
	else{
		resp = false;
	}
	if(dist(p[4].x, p[4].y, p[6].x, p[6].y)!=dist(p[4].x, p[4].y, p[2].x, p[2].y)){
		resp = false;
	}
	if(dist(p[5].x, p[5].y, p[3].x, p[3].y)!=dist(p[5].x, p[5].y, p[7].x, p[7].y)){
		resp = false;
	}
	if(p[2].x<p[3].x){
		if(p[1].x>p[2].x && p[6].x>p[2].x && ((p[1].y>p[2].y && p[6].y<p[2].y) || (p[6].y>p[2].y || p[1].y<p[2].y))){}
		else{
			resp = false;
		}
	}
	if(p[2].x>p[3].x){
		if(p[1].x>p[3].x && p[6].x>p[3].x && ((p[1].y>p[3].y && p[6].y<p[3].y) || (p[6].y>p[3].y || p[1].y<p[3].y))){}
		else{
			resp = false;
		}
	}
	if(p[2].y<p[3].y){
		if(p[1].y>p[2].y && p[6].y>p[2].y && ((p[1].x>p[2].x && p[6].x<p[2].x) || (p[6].x>p[2].x || p[1].x<p[2].x))){}
		else{
			resp = false;
		}
	}
	if(p[2].y>p[3].y){
		if(p[1].y>p[3].y && p[6].y>p[3].y && ((p[1].x>p[3].x && p[6].x<p[3].x) || (p[6].x>p[3].x || p[1].x<p[3].x))){}
		else{
			resp = false;
		}
	}
	if((p[1].x>p[2].x && p[1].x<p[3].x) || (p[1].x<p[2].x && p[1].x>p[3].x)){}
	else{
		if((p[1].y>p[2].y && p[1].y<p[3].y) || (p[1].y<p[2].y && p[1].y>p[3].y)){}
		else{
			resp = false;
		}
	}
	
	if(resp)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
