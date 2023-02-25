#include <bits/stdc++.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	long long xcim, xbai, xpon, ycim, ybai, ypon;
	
	while (scanf ("%lld%lld%lld%lld%lld%lld", &xbai, &ybai, &xcim, &ycim, &xpon, &ypon) != EOF)
	{
	
		if ((xpon <= xcim) && (xpon >= xbai) && (ypon <= ycim) && (ypon >= ybai))
		{
		printf ("INTERNO\n");
		}
		else if ((xpon >= xcim) && (xpon <= xbai) && (ypon <= ycim) && (ypon >= ybai))
		{
		printf ("INTERNO\n");	
		}
		else 
		{
		printf ("EXTERNO\n");
		}
	}
}
