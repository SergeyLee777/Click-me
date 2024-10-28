#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	int a,b,c,d;
	
	int A[101];
	int B[101];
	int C[101];
	
	cin >>n;
	cin >> a>>b >> c>> d;
	
	for (int i=1;i <=n; i++)
	{
		A[i]=i; B[i]=i; C[i]=i;
	}
	for (int i=a;i<=b;i++){
		B[i]=A[b-(i-a)];
		C[i]=B[i];
				
	}
		for (int i=c; i<=d;i++)   
		C[i]=B[d-(i-c)];
		
		for (int i=1; i<=n; i++)  
		cout << C[i] << " ";
		
	}
	