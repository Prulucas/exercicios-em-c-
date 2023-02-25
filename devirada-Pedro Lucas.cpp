#include <bits/stdc++.h>
#define size 100 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
  	int i, G;
  	int deri[size];
	float co[size];
	
	cin >> G;

		for (i = 0; i <= G; i++)
		{
			cin >> co[i];
		}
		
		int au = G;
		int g = G-1;
	    	
			for (i=0; i < G; i++)
			{
	       		if (i < G - 1)
				{
				   
				deri[i] = co[i] * au;
				}
				else
				{
					deri[i] = co[i];
				}
			au--;
	   		}
	    	for (i=0; i < G; i++)
			{
		        if (i < G - 2)
		        {
		        	printf("%dx^%d+",deri[i],g);
				}
				else if (i == G - 2)
				{
					printf("%dx+", deri[i]);
				}
				else
				{
					printf("%d", deri[i]);
				}
			g--;
	  	}

	return 0;
}
