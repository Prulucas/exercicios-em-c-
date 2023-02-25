#include <bits/stdc++.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, G, i, ii;
	int l = 0, j = 0;
	
		cin >> N; 
		cin >> G;
	
		cout << "P2" << endl;
		cout << N * 8 << "\t" << N * 8 << endl;
		cout << G << endl;
	
	for (i=0; i < N * 8; i ++)
	{
		for (ii = 0; ii < N * 8; ii++)
		{
			if (l < N)
			{
				if (j < N)
				{
					cout << G;
				}
				else
				{
					cout << 0;
				}
			}
			else
			{
				if (j < N)
				{
					cout << 0;
				}
				else
				{
					cout << G;
				}
			}
		cout << "\t";
		j++;
		
		if (j == N * 2)
		{
			j = 0;
		}
		}
		
		cout << endl;
		l++;
		j = 0;
		
		if (l == N * 2)
		{
			l = 0;
		}
	}
	
}
