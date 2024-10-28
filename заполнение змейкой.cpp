#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int a[100][100];
	
	cin >> n;
	
		for (int i = 0; i < n; i ++)
		{
			for (int j = 0; j < n; j ++) { 
				if (i == n - j - 1)
				a[i][j] = 1;
				else if (i > n - j - 1)
				a[i][j] = 2;
				else 
				a[i][j] = 0;
			}
		}
		
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < n; j ++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
			
	}
}