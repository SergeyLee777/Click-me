#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n;
	int a[100];
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
		for (int i = 0; i < n; i ++)
			{
				if (a[i] > k) k = a[i]; 
			}
			cout << k;
}