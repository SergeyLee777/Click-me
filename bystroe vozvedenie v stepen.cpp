#include <iostream>
using namespace std;

double powpow (double a, int n) {
    if (n == 0) {
        return 1;
    } 
    
    if (n % 2 == 0) {
    	return powpow(a * a, n / 2);
	} else {
		return a * powpow(a, n - 1);
	}
}

int main () {
    double a;
    int n;
    cin >> a >> n;
    cout << powpow(a, n) << endl;
    return  0;
}
