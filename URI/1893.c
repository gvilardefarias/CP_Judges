#include <stdio.h>

int main(){
	int a,b;

	scanf("%d %d",&a,&b);

	if(a>b && b>=3 && b<=96)
		printf("minguante\n");

	else{
		if(b<=2)
			printf("nova\n");
		else{
			if(b>=3 && b<=96)
				printf("crescente\n");
			else
				printf("cheia\n");
		}
	}

	return 7;
}