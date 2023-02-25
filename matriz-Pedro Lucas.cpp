#include <bits/stdc++.h>

using namespace std;

int main() {
    int col1, lin1;
    int y, x;
    cin >> col1 >> lin1;
    int matrizA[col1][lin1], matrizB[col1][lin1];
    for(y = 0; y < col1; y++)
	{
        for(x = 0; x < lin1; x++)
		{
            int v;
            cin >> v;
            matrizA[y][x] = v;
        }
    }
    
    int col2, lin2;
    cin >> col2 >> lin2;
    for(y = 0; y < col2; y++)
	{
        for(x = 0; x < lin2; x++)
		{
            double v;
            cin >> v;
            matrizB[y][x] = v;
        }
    }
    
    int menorC = col1, menorL = lin1, maiorL = lin1;
    
    if(col2 < col1)
	{
		menorC = col2;
	}
    if(lin2 < lin1)
	{
		menorL = lin2;
	}
    if(lin2 > lin1)
	{
		maiorL = lin2;
	}
    for (int fil = 0; fil < menorC; fil++) 
	{
        for (int col = 0; col < menorL; col++) 
		{
            vector<int> val;
            for (int linha = 0; linha < maiorL; linha++) 
			{
                val.push_back(matrizA[fil][linha] * matrizB[linha][col]);
            }
            long long int total = 0;
            for(int i = 0; i < maiorL; i++)
			{
                total += val[i];
            }
            cout << total << "\t";
        }
        cout << endl;
    }
    
}
