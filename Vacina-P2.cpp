#include <bits/stdc++.h>

using namespace std;

int main() 
{
    
	string a,b,c; cin >> a >> b >> c;
    int d; cin >> d;
    
    int counter = 0, comp = a.length()-1;
    int i = 0;
    vector<string> vetor;
    
	while(i < comp)
	{
        string nova;
        for(int j = i; j < i+d; j++)
		{
            nova += a[j];
        }
        int ver = 0;
        for(auto v:vetor)
		{
            if(v == nova)
                ver = 1;
        }
        
        string ax,bx,cx;
        size_t foundA = a.find(nova);
        size_t foundB = b.find(nova);
        size_t foundC = c.find(nova);
        if(foundA != string::npos && foundB != string::npos && foundC != string::npos && ver == 0)
		{
            counter++;
            vetor.push_back(nova);
        }
        i++;
    }
    
	cout << counter << endl;
}
