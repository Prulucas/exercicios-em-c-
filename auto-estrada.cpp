#include <bits/stdc++.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	int painel=0;

		cin >> n;
	
	char x[n];
	
	for (int i=0; i<n; i++)
	{
		cin >> x[i];
			if (x[i] == 'P')
			{
				painel+=2;
			}
			else if (x[i] == 'C')
			{
				painel+=2;
			}
			else if (x[i] == 'A')
			{
				painel+=1;
			}
			else if (x[i] == 'D')
			{
				painel+=0;
			}
		
	}
	cout << painel;
	
}
