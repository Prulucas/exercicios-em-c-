#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int x, m;
	
		scanf("%d%d", &x, &m);
		x += x % m;
	
		if(x % m == 0){
			printf("STOP\n");
		}
		else{
			printf("NONSTOP\n");
		}	
}
