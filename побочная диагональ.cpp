#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n,a,b,c,d;
	int k[100][100];
	
	cin >> n;
	
	for (int i=1; i<=n; i++)
	{
		for (int j =0; j<n; j++)
		{ 
			if (i+j == n-2)
					k[i][j]=1;
					
			if (i+j < n-3)
					k[i][j]=0;
					
			if (i+j > n-1)
					k[i][j]=2;
				
				cout << k[i][j] << " ";
		}
		cout << endl;
	}
	
}

