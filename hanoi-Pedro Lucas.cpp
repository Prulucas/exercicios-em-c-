#include <bits/stdc++.h>

using namespace std;

void han (int n, char a, char b, char c)
{
	if (n == 1)
	{
        printf("Mover disco %d do pino %c para pino %c\n", n, a, b);
    }
	else
	{
        han(n - 1, a, c, b); 
        printf("Mover disco %d do pino %c para pino %c\n", n, a, b);
        han(n - 1, c, b, a);  
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int n;
	scanf("%d", &n);
	han(n,'A', 'B', 'C');
}
