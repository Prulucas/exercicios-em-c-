#include <bits/stdc++.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	long long n, divisor, conta = 0;
	
		
	while (scanf("%lld", &n) != EOF) {
		for (divisor = 1 ; divisor <= n; divisor++){
            if (n % divisor == 0)
				conta++;	
			}
				if (conta == 2) {
					cout << "PRIMO" << endl;
				}
				else {
					cout << "!PRIMO" << endl;
				}

		conta = 0;
		}
}
