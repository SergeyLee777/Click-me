#include <iostream>
using namespace std;

double powpow (double a, int n) {
    if (n == 0) {
        return 1;
    } 
	else if (n > 0) 
	{
        return a * powpow (a, n - 1);
    }  
	else {
		return 1 / powpow(a, (n * (-1)));
    }
}

int main () {
    double a;
    int n;
    cin >> a >> n;
    cout << powpow(a, n) << endl;
    return  0;
}
