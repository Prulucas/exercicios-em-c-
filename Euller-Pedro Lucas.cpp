#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long double eu, fat;
	int i, j, n;
	
	scanf("%d",&n);
	
	eu = 1.0;
	for(i = 1; i <= n; i++){
			fat = 1.0;
			for(j = 2; j <= i; j++){
				fat = fat * j;
			}
				eu = eu + (1.0/fat);
		}
	cout << setprecision(17);
	cout << eu << endl;
	return 0;
}
