#include <bits/stdc++.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, F, Z;
	
	cin >> N >> Z >> F;

	for (int i = F - Z; i < F; i++)
	{
		if (i == 0)
		{
			cout << "[BOV]-";	
		}
		else if (i < 0)
		{
			cout << "[]-";
		}
		else
		{
			cout << "[" << i << "]-";
		}
	}
		cout << "{" << F << "}";
	
	for (int i = F + 1; i <= F + Z; i++)
	{
		if (i == N + 1)
		{
			cout << "-[EOV]";
		}
		else if (i > N)
		{
			cout << "-[]";
		}
		else 
		{
			cout << "-[" << i << "]";
		}
	}

	cout << endl;
}
