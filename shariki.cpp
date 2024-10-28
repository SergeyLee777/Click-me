#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	int a[100];
	int b[100];
		
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
		}	
				
		for (int i=1;i<=n;i++) 
		{
		b[i]=a[n-(i-1)];
	
	
	cout << b[0];
}
	return 0;			
}
