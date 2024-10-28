#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, m;
	cin >> n ;
	int x = n, y = n + 1, count = 1;
	int a[100][100];
	
	a[n + 1][n + 1] = 0;
	
	m = 2 * n + 1;
//	cout << m << " " <<  n;
	while (x > 0 & y > 0 & x <= m & y <= m) {
	
		while (x > 0 & y > 0 & x <= m & y <= m) {
			if (m - y == x) 
				break ;
			a[x][y] = count++;
			x--;
		}
		while (x > 0 & y > 0 & x <= m & y <= m) {
			if(x == y)
				break;
			a[x][y] = count++;
			y--;
		}
		while (x > 0 & y > 0 & x <= m & y <= m) {
			if (m - x + 1 == y)
				break;
			a[x][y] = count++;
			x++;
		}
		while (x > 0 & y > 0 & x <= m & y <= m) {
			if (x == y) 
				break;
			a[x][y] = count++;
			y++;
		}
	}
	
//	cout << count << endl;
	
//	cout << m; 
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

}