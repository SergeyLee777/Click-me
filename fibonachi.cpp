#include <iostream>
using namespace std;
int fibonachi( int n) {
	if (n == 0) return 1;
	if (n == 1) return 1;
	return fibonachi(n-1)+fibonachi(n-2);
}
int main ()
{
	int n;
	double a;
	cin >> n;
	cout << fibonachi(n);
	return 0;
}
