#include <iostream>
using namespace std;
double stepen( double a, int n) {
double ans = 1;
for (int i=1; i<=n; i++)
 	ans=ans*a;
	return ans;
}
int main ()
{
	double a;
	int n;
	cin >> a >> n;
	cout << stepen (a,n);
	return 0;
}



