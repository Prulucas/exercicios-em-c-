#include <bits/stdc++.h>
#define size 100 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
  	int i, G;
   	
	double co[size], a, poli, x;
	
	cin >> G >> a;
	
		for (i = G; i >= 0; i = i - 1)
		cin >> co[i];
		poli = 0.0;
		x = 1.0;
		for (i = 0; i <= G; i = i + 1)
		{
		poli = poli + co[i] * x;
		x = x * a;
		}
		printf("%.2lf\n", poli);


	return 0;
}
