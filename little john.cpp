#include <bits/stdc++.h>

using namespace std;

int main() 
{
    
	int tackle; cin >> tackle;
    int n; 
    int e = 0, d = 0;
    
    cin >> n;
    
	for(int i = 0; i < n; i++){
        int e1, e2, e3, e4, d4, d3, d2, d1;
		
		cin >> e1 >> e2 >> e3 >> e4 >> d4 >> d3 >> d2 >> d1;
        
		if((d1 < tackle && d2 < tackle && d3 < tackle))
		{
            cout << "RIGTH SIDE!\n";
            d++;
        }
		else if((e1 < tackle && e2 < tackle && e3 < tackle))
		{
            cout << "LEFT SIDE!\n";
            e++;
        }
		else
		{
            cout << "NO PERFORM!!!\n";
            if(e > 0 || d > 0)
                e++;
        }
        
    }
    
    if(e > d)
	{
        cout << "LEFT SIDE!!! THE STRONG SIDE!!!\n";
    }
	else if(d > e)
	{
        cout << "RIGTH SIDE!!! THE STRONG SIDE!!!\n";
    }
	else
	{
        cout << "WEAK SIDE!!! BOTH SIDE!!!\n";
    }
}
