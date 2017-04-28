#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, nums[3002];

	while(scanf("%d", &n)!=EOF){
		bool jolly = true;
		set <int> s;

		for(int i = 0;i<n;i++)
			scanf("%d",&nums[i]);

		for(int i = 0;i<n-1;i++)
			s.insert(abs(nums[i]-nums[i+1]));

		for(int i = 1;i<n-1;i++)
			if(!s.count(i)){
				jolly = false;
				break;
			}		
		
		if(jolly)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}

	return 0;
}