#include <bits/stdc++.h>

using namespace std;


int main()
{
	long long int x;
	while(scanf("%lld", &x) != EOF){
	    if(x == 1 || x ==2){
			cout << 1 << endl;
		}		
		else {
			long long int ant = 1, prox = 1, 
			count = 2;
			while(count <= x){
				long long int aux = prox;
				prox = prox + ant;
				ant = aux;
				count++;
			}	
			cout << ant << endl;
		}
	}
}
