#include <bits/stdc++.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	double delta, a, b, c;
	
	while (scanf ("%lf%lf%lf", &a, &b, &c) != EOF){
		
	double raiz, x1, x2;
		
		delta = pow(b,2) - (4 * a * c); //calculo de delta
		
		if (delta > 0){
			raiz = pow (delta,0.5); //raiz quadrada
			x1 = (-b + raiz) / (2*a);
			x2 = (-b - raiz) / (2*a);;
			
			printf ("%.2f\t%.2f\n", x1, x2);
			
		} 
		else {
			std::cout << ("NARN\n");
		}
		}
}
