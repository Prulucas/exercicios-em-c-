#include <bits/stdc++.h>

using namespace std;


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, cont = 0;
	float soma;
	
	scanf ("%d", &n );
	
	while (cont < n){
		cont++;		
		soma = soma + (1.0/cont);
		}
	printf ("%.8f", soma);
	return 0;		
}
